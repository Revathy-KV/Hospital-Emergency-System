#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

struct Patient {
    int id;
    char name[50];
    int priority;
};

struct Patient queue[MAX];
int size = 0;

void addPatient() {
    if(size == MAX) {
        printf("Queue is Full\n");
        return;
    }

    struct Patient p;

    printf("Enter Patient ID: ");
    scanf("%d", &p.id);

    printf("Enter Patient Name: ");
    scanf("%s", p.name);

    printf("Enter Priority (1-Critical, 2-Serious, 3-Normal): ");
    scanf("%d", &p.priority);

    queue[size++] = p;

    printf("Patient Added Successfully\n");
}

void displayPatients() {
    if(size == 0) {
        printf("No patients in queue\n");
        return;
    }

    printf("\nPatient List:\n");

    for(int i=0;i<size;i++) {
        printf("ID:%d Name:%s Priority:%d\n",
        queue[i].id, queue[i].name, queue[i].priority);
    }
}

void treatPatient() {
    if(size == 0) {
        printf("No patients available\n");
        return;
    }

    int highest = 0;

    for(int i=1;i<size;i++) {
        if(queue[i].priority < queue[highest].priority)
            highest = i;
    }

    printf("Treating Patient: %s\n", queue[highest].name);

    for(int i=highest;i<size-1;i++)
        queue[i] = queue[i+1];

    size--;
}

int main() {

    int choice;

    while(1) {

        printf("\n--- Hospital Emergency Management ---\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Treat Patient\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1: addPatient();
            break;

            case 2: displayPatients();
            break;

            case 3: treatPatient();
            break;

            case 4: exit(0);

            default: printf("Invalid Choice\n");
        }
    }

    return 0;
}
