#include <stdio.h>

int main() {
    int i, j, n, wt[20], bt[20], tat[20], avgwt = 0, avgtat = 0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("\nEnter burst time for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    wt[0] = 0;
    for (i = 1; i < n; i++) {
        wt[i] = 0;
        for (j = 0; j < i; j++) {
            wt[i] += bt[j];
        }
    }

    printf("\nPROCESS \t BURST TIME \t WAITING TIME \t TURNAROUND TIME");
    for (i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
        avgwt += wt[i];
        avgtat += tat[i];
        printf("\n P[%d] \t\t %d \t\t %d \t\t %d", i + 1, bt[i], wt[i], tat[i]);
    }

    avgwt /= n;
    avgtat /= n;
    printf("\nAVG WT: %d", avgwt);
    printf("\nAVG TAT: %d\n", avgtat);

    return 0;
}
