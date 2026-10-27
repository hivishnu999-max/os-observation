
#include <stdio.h>

int main() {
    int n = 4, i, q, t = 0;
    int bt[4], r[4], wt[4] = {0}, tat[4];
    int done = 0, x;

    printf("Round Robin:\n");

    for (i = 0; i < n; i++) {
        printf("P%d BT: ", i + 1);
        scanf("%d", &bt[i]);
        r[i] = bt[i];
    }

    printf("Time Quantum: ");
    scanf("%d", &q);

    if (q <= 0) {
        printf("Time quantum must be positive.\n");
        return 0;
    }

    while (done < n) {
        for (i = 0; i < n; i++) {
            if (r[i] > 0) {
                x = (r[i] < q) ? r[i] : q;
                t += x;
                r[i] -= x;

                if (r[i] == 0) {
                    tat[i] = t;
                    wt[i] = tat[i] - bt[i];
                    done++;
                }
            }
        }
    }

    printf("\nP\tBT\tWT\tTAT\n");

    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t%d\t%d\n",
               i + 1, bt[i], wt[i], tat[i]);
    }

    return 0;
}

