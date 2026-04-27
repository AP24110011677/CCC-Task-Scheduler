#include <stdio.h>

// Structure to store task
struct Task {
    int start;
    int end;
};

// Function to sort tasks based on end time (Bubble Sort)
void sortTasks(struct Task tasks[], int n) {
    int i, j;
    struct Task temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tasks[j].end > tasks[j + 1].end) {
                temp = tasks[j];
                tasks[j] = tasks[j + 1];
                tasks[j + 1] = temp;
            }
        }
    }
}

// Function to select maximum non-overlapping tasks
void taskScheduler(struct Task tasks[], int n) {
    // Sort tasks by end time
    sortTasks(tasks, n);

    printf("Selected Tasks:\n");

    // Select first task
    int lastEnd = tasks[0].end;
    printf("Start: %d, End: %d\n", tasks[0].start, tasks[0].end);

    // Check remaining tasks
    for (int i = 1; i < n; i++) {
        if (tasks[i].start >= lastEnd) {
            printf("Start: %d, End: %d\n", tasks[i].start, tasks[i].end);
            lastEnd = tasks[i].end;
        }
    }
}

int main() {
    int n;

    printf("Enter number of tasks: ");
    scanf("%d", &n);

    struct Task tasks[n];

    printf("Enter start and end times:\n");
    for (int i = 0; i < n; i++) {
        printf("Task %d:\n", i + 1);
        scanf("%d %d", &tasks[i].start, &tasks[i].end);
    }

    taskScheduler(tasks, n);

    return 0;
}