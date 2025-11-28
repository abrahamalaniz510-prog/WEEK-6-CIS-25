#This code asks for user input based on the prompts that are given to them.
User is given a range that allows them to choose from that valid range and if not applied then it means that they will not get an item found
As long as valid input is given then they will receive an item found prompt with the name, and ID number

# Dynamic Inventory Search (C++)

This program demonstrates how to use **structs**, **dynamic memory allocation**, and **binary search** in C++.  
It creates a list of inventory items on the heap using `new`, fills the array with sample data, sorts it by ID, and allows the user to search for an item by entering an ID.

---

## 📌 Features

- Uses a `struct` to store an item's **name** and **ID**
- Dynamically allocates an array using `new`
- Populates the array with 100 inventory items
- Automatically displays the **valid ID range**
- Sorts the array using `std::sort`
- Uses **binary search** to quickly find an item by ID
- Frees memory using `delete[]`

---

## 📘 How It Works

1. The program creates 100 Items with IDs from **1000 to 1099**.
2. The array is sorted by ID so that binary search works properly.
3. Before asking for input, the program displays the valid ID range:

