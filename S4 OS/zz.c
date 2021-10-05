//RR
#include<stdio.h>

int main() {
    int n, x = 0, i, j, t;

    //Read the number of processes
    printf("Enter the number of process : ");
    scanf("%d", &n);

    int bta[n], bt[n], tat[n], wt[n], ct[n], a[n];

    //Read the burst time of the processes
    printf("Enter the Burst time of process : ");
    for (i = 0; i < n; i++)
        scanf("%d", &bt[i]);

    //Read the time slice
    printf("Enter the Time slice : ");
    scanf("%d", &t);

    //Calculate process number
    for (i = 0; i < n; i++)
        a[i] = i + 1;

    //Initialize completion time to 0
    for (i = 0; i < n; i++)
        ct[0] = 0;

    //Duplicate burst time
    for (i = 0; i < n; i++)
        bta[i] = bt[i];

    //Computation
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++) {
	    //Burst time is more than time slice
	    if (bta[i] > t) {
                bta[i] = bta[i] - t;
                x = x + t;
                ct[i] = x;
            } else if (bta[i] == 0)
                continue;
            else if (bta[i] <= t) {
                x = x + bta[i];
                ct[i] = x;
                bta[i] = 0;
            }
        }
    }

    //Completion time is TAT
    for (i = 0; i < n; i++)
        tat[i] = ct[i];

    //Calculate Waiting time
    for (i = 0, j = 0; i < n; i++, j++)
        wt[i] = tat[i] - bt[j];

    //Display
    printf("\nProcess\tBT\tCT\tTAT\tWT");
    for (i = 0; i < n; i++) {
        printf("\nP%d\t%d\t%d\t%d\t%d", a[i], bt[i], ct[i], tat[i], wt[i]);
    }
    printf("\n");

    return 0;
}



