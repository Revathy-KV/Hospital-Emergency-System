# Hospital-Emergency-System
The Hospital Emergency Management System is a C program that manages patients using a priority queue, ensuring critical patients are treated first. It allows adding, displaying, and treating patients based on their priority levels. This project demonstrates the use of basic data structures and menu-driven programming.

---
Overview

This project is a simple Hospital Emergency Management System implemented in the C programming language. It uses a priority-based queue to manage patients in an emergency ward.

Patients with higher priority (lower number) are treated first:

1 → Critical

2 → Serious

3 → Normal

---
Features

 Add new patients with ID, name, and priority
 Display all patients in the queue
 Treat patients based on priority
 Exit the system

---
Concept Used
 Priority Queue (Array Implementation)
 Structures in C
 Basic Input/Output Operations
 Menu-driven Program

---
Data Structure
struct Patient {
    int id;
    char name[50];
    int priority;
};

id → Unique patient ID
name → Patient name
priority → Emergency level

---
How It Works
1. Add Patient
Takes input from user
Stores patient in queue
2. Display Patients
Shows all patients currently waiting
3. Treat Patient
Finds patient with highest priority
Removes that patient from queue

---
File Structure
hospital-management/
│── main.c
│── README.md
How to Run
Step 1: Compile the program
gcc main.c -o hospital
Step 2: Run the program
./hospital

---
Sample Output
--- Hospital Emergency Management ---
1. Add Patient
2. Display Patients
3. Treat Patient
4. Exit

Enter choice: 1
Enter Patient ID: 101
Enter Patient Name: Ravi
Enter Priority: 1
Patient Added Successfully

---
Limitations
Maximum 10 patients (fixed size array)
No file storage (data lost after exit)
Name input does not support spaces

---
Future Improvements

Use dynamic memory (linked list or heap)
Add file/database storage
Improve UI
Allow full names with spaces
Add patient history tracking

Author:-Revathy KV

---

License

This project is open-source and free to use for educational purposes.
