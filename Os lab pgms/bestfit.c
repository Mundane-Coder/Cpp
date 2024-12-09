//SAME AS FIRST FIT BUT WE HERE FIND THE BEST INDEX AND ALLOCATE THAT MEMORY TO THAT PROCESS. ALL THIS HAPPENS IN BETWEEEN THOSE NESTED FOR LOOPS

#include <stdio.h>

int main() {
    int partitions[10], processes[10], allocation[10];
    int numPartitions, numProcesses;

    // Input number of partitions and their sizes
    printf("Enter the number of partitions: ");
    scanf("%d", &numPartitions);
    printf("Enter the sizes of the partitions:\n");
    for (int i = 0; i < numPartitions; i++) {
        scanf("%d", &partitions[i]);
    }

    // Input number of processes and their sizes
    printf("Enter the number of processes: ");
    scanf("%d", &numProcesses);
    printf("Enter the sizes of the processes:\n");
    for (int i = 0; i < numProcesses; i++) {
        scanf("%d", &processes[i]);
        allocation[i] = -1; // Initialize as not allocated
    }

    // Best Fit Allocation
    for (int i = 0; i < numProcesses; i++) {
        int bestIdx = -1;

        // Find the best partition for the current process
        for (int j = 0; j < numPartitions; j++) {
            if (partitions[j] >= processes[i]) {
                if (bestIdx == -1 || partitions[j] < partitions[bestIdx]) {
                    bestIdx = j; // Update to the better fit
                }
            }
        }

        // Allocate the best partition found
        if (bestIdx != -1) {
            allocation[i] = bestIdx + 1;   // Assign partition number (1-based index)
            partitions[bestIdx] -= processes[i]; // Reduce partition size
        }
    }

    // Output allocation details
    printf("\nProcess\tSize\tPartition\n");
    for (int i = 0; i < numProcesses; i++) {
        if (allocation[i] != -1)
            printf("P%d\t%d\t%d\n", i + 1, processes[i], allocation[i]);
        else
            printf("P%d\t%d\tNot Allocated\n", i + 1, processes[i]);
    }

    return 0;
}
