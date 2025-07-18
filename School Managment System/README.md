# 🏫 School Management System (C++)

A console-based system to manage a school environment using object-oriented programming principles in C++. The system handles Students, Teachers, Staff, Courses, Classrooms, and Exams. It provides full CRUD functionality for each entity with a simple text-based interface.

---

## 📌 Features

- 👥 Add, view, edit, and delete **Students, Teachers, and Staff**
- 🏫 Manage **Classrooms**, including room number and capacity
- 📚 Register **Courses** and assign teachers
- 📝 Create and view **Exams**
- 🔎 Search and edit people by ID
- ♻️ Replayable looped menu until exit

---

## 🔧 Technologies Used

- Language: `C++`
- Concepts: `OOP`, `Inheritance`, `Polymorphism`, `Encapsulation`
- Data Structure: `std::vector`

---

## 🧠 What I Learned

- Applying **OOP design** with abstract base classes and overriding methods
- Managing dynamic memory with `new` and `delete`
- Implementing **search/edit/delete by ID** logic
- Modularizing code using multiple header and source files

---

## 🚀 How to Run

1. Compile using g++:

```bash
g++ main.cpp -o school -std=c++11
```

> ⚠️ Note: Make sure all `.h` and `.cpp` class files are in the same directory.

2. Run the executable:

```bash
./school
```

---

## 📂 File Structure

```bash
.
├── main.cpp
├── Person.h / .cpp
├── Student.h / .cpp
├── Teacher.h / .cpp
├── Staff.h / .cpp
├── Course.h / .cpp
├── ClassRoom.h / .cpp
├── Exam.h / .cpp
```

---

> Built by Moataz Mahmoud | Powered by C++ OOP 💻
