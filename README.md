# Smart Task Scheduler using Greedy Algorithm

## Objective
To efficiently schedule tasks such that:
- No two selected tasks overlap
- Maximum number of tasks are completed

## Algorithm Used
Greedy Algorithm (Activity Selection Problem)

## ⚙️ Working Principle
1. Input tasks with start and end times
2. Sort tasks based on **end time**
3. Select the first task
4. Iterate through remaining tasks:
   - If start time ≥ last selected task’s end time → select it
5. Display selected tasks

### Strategy:
- Always select the task that finishes earliest
- This ensures maximum remaining time for other tasks

## Explanation
Tasks are sorted based on their finishing time. The task that finishes earliest is selected first. Then, the next task is chosen only if it does not overlap with the previously selected task.

## How to Run
1. Compile:
   gcc task_scheduler.c -o task
2. Run:
   task

## Sample Input
Enter number of tasks: 5
Task 1: 1 3
Task 2: 2 5
Task 3: 4 7
Task 4: 6 9
Task 5: 8 10

## Sample Output
Selected Tasks:
Start: 1, End: 3
Start: 4, End: 7
Start: 8, End: 10

## ⏱️ Time Complexity
- Sorting: **O(n²)** (Bubble Sort)
- Selection: **O(n)**
- Overall Complexity: **O(n²)**

  ## 🚀 Future Improvements
- Use efficient sorting algorithms like Quick Sort or Merge Sort (O(n log n))
- Add graphical user interface (GUI)
- Allow dynamic input from files
- Extend to real-world scheduling applications

## Team Members
- M.Udaya Bhanu  (AP24110011639)
- B.Shiva Komali (AP24110011677)
- K.L.P. Srujana (AP24110011689)
- R.Parinita     (AP24110011690)
- Section: U

- ## 📎 Conclusion
This project demonstrates how a Greedy approach can be used to solve real-world scheduling problems efficiently by making optimal local choices.
