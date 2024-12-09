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

    // First Fit Allocation
    for (int i = 0; i < numProcesses; i++) {
        for (int j = 0; j < numPartitions; j++) {
            if (partitions[j] >= processes[i]) {
                allocation[i] = j + 1;   // Allocate partition
                partitions[j] -= processes[i]; // Reduce partition size
                break;
            }
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
