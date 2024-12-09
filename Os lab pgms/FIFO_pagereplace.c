#include <stdio.h>

int main() {
    int n, frames, pages[50], memory[10], pageFaults = 0, current = 0;

    // Input number of pages and the page reference string
    printf("Enter the number of pages: ");
    scanf("%d", &n);
    printf("Enter the page reference string:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &pages[i]);
    }

    // Input number of frames
    printf("Enter the number of frames: ");
    scanf("%d", &frames);

    // Initialize memory to -1 (indicating empty)
    for (int i = 0; i < frames; i++) {
        memory[i] = -1;
    }

    // FIFO Logic
    for (int i = 0; i < n; i++) {
        int isPageFound = 0;

        // Check if the page is already in memory
        for (int j = 0; j < frames; j++) {
            if (memory[j] == pages[i]) {
                isPageFound = 1; // Page found, no replacement needed
                break;
            }
        }

        if (!isPageFound) {
            // Replace the oldest page
            memory[current] = pages[i];
            current = (current + 1) % frames; // Move pointer to next frame
            pageFaults++;
        }

        // Print current memory state
        printf("Memory: ");
        for (int j = 0; j < frames; j++) {
            if (memory[j] == -1)
                printf("- ");
            else
                printf("%d ", memory[j]);
        }
        printf("\n");
    }

    // Output total page faults
    printf("\nTotal Page Faults: %d\n", pageFaults);

    return 0;
}
