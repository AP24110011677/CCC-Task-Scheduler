# Smart Task Scheduler using Greedy Algorithm

## Objective
To select maximum number of non-overlapping tasks using Greedy Algorithm.

## Algorithm Used
Greedy Algorithm (Activity Selection Problem)

## Explanation
Tasks are sorted based on their finishing time. The task that finishes earliest is selected first. Then, the next task is chosen only if it does not overlap with the previously selected task.

## How to Run
1. Compile:
   gcc task_scheduler.c -o task
2. Run:
   task

## Sample Input
5
1 3
2 5
4 7
6 9
8 10

## Sample Output
Start: 1, End: 3  
Start: 4, End: 7  
Start: 8, End: 10  

## Team Members
- M.Udaya Bhanu (AP24110011639)
- B.Shiva Komali (AP24110011677)
- K.L.P. Srujana (AP24110011689)
- R.Parinita
(AP24110011690)
- Section: U