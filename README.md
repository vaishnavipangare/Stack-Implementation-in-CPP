# 📦 Queue and Stack in C++

## 🎯 Aim  
To study and implement **Queue** and **Stack** operations in C++ using arrays, and to understand their differences in terms of memory allocation, order of processing, and efficiency.

---

## 📚 Theory  

### Queue  
A **Queue** is a linear data structure that follows the **FIFO (First In, First Out)** principle. The element inserted first is the one removed first.  

- **Front** → points to the first element.  
- **Rear** → points to the last element.  

**Characteristics:**  
- FIFO order  
- Insertion at rear, deletion at front  
- Overflow when full, underflow when empty  

---

### Stack  
A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle. The element inserted last is the one removed first.  

- **Top** → points to the most recently inserted element.  

**Characteristics:**  
- LIFO order  
- Insertion and deletion at top only  
- Overflow when full, underflow when empty  

---

## 📋 Algorithm for Queue 

1. **Start**  
2. Initialize `front = -1`, `rear = -1`, and define array `arr[SIZE]`.  
3. Display menu with options:  
   - Enqueue  
   - Dequeue  
   - Display  
   - Peek  
   - Check if Empty  
   - Check if Full  
   - Size  
   - Clear  
   - Exit  

4. **Repeat until Exit chosen:**  
   - Read user’s choice.  

   **Enqueue:**  
   - If `rear == SIZE - 1` → Overflow.  
   - Else if `front == -1` → set `front = 0`.  
   - Increment `rear`, insert element at `arr[rear]`.  

   **Dequeue:**  
   - If `front == -1 OR front > rear` → Underflow.  
   - Else print `arr[front]`, increment `front`.  
   - If `front > rear` → reset `front = rear = -1`.  

   **Display:**  
   - If empty → print message.  
   - Else traverse from `front` to `rear` and print elements.  

   **Peek:**  
   - If empty → print message.  
   - Else print `arr[front]`.  

   **Check if Empty:**  
   - If `front == -1 OR front > rear` → Empty.  
   - Else Not Empty.  

   **Check if Full:**  
   - If `rear == SIZE - 1` → Full.  
   - Else Not Full.  

   **Size:**  
   - If empty → 0.  
   - Else `rear - front + 1`.  

   **Clear:**  
   - Reset `front = rear = -1`.  

   **Exit:**  
   - Terminate program.  

5. **End**

---

## 📋 Algorithm for Stack

1. **Start**  
2. Initialize `top = -1` and define array `arr[MAX]`.  
3. Display menu with options:  
   - Push  
   - Pop  
   - Display  
   - Exit  

4. **Repeat until Exit chosen:**  
   - Read user’s choice.  

   **Push:**  
   - If `top == MAX - 1` → Overflow.  
   - Else increment `top`, insert element at `arr[top]`.  

   **Pop:**  
   - If `top == -1` → Underflow.  
   - Else print `arr[top]`, decrement `top`.  

   **Display:**  
   - If `top == -1` → Empty.  
   - Else traverse from `top` to `0` and print elements.  

   **Exit:**  
   - Terminate program.  

   **Default:**  
   - Print invalid choice.  

5. **End**

---

## 🚀 Applications  

### Queue  
- CPU scheduling (Round Robin, FCFS)  
- Disk scheduling  
- Data buffering (IO buffers, print queue)  
- BFS in graphs  
- Order processing systems  

### Stack  
- Expression evaluation (postfix, prefix)  
- Function call management (recursion)  
- Undo/Redo in editors  
- Backtracking algorithms  
- Browser history navigation  
- Parsing and compilation  

---

## 🧠 Conclusion  

- **Queue** follows FIFO, useful for scheduling and buffering.  
- **Stack** follows LIFO, useful for recursion, parsing, and backtracking.  
- Both structures are fundamental in **Data Structures and Algorithms (DSA)** and form the basis for advanced applications like expression evaluation, graph traversal, and memory management.
