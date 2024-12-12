#include <stdio.h>
#include <stdlib.h>

int main()
{
    int locks, stocks, barrels, tlocks, tstocks, tbarrels;
    float lprice, sprice, bprice, sales = 0, comm;
    int c1, c2, c3, temp;

    tlocks = 0, tstocks = 0, tbarrels = 0;
    lprice = 45.0;
    sprice = 30.0;
    bprice = 25.0;

    printf("Enter the value of locks (-1 to exit):\n");
    scanf("%d", &locks);

    while (locks != -1) {
        c1 = (locks < 0 || locks > 70);
        printf("Enter stock and barrels:\n");
        scanf("%d%d", &stocks, &barrels);
        c2 = (stocks < 0 || stocks > 80);
        c3 = (barrels < 0 || barrels > 90);

        if (c1) {
            printf("Enter value not in range for locks\n");
        } else {
            temp = locks + tlocks;
            if (temp > 70) {
                printf("New value %d not in range for locks\n", temp);
            } else {
                tlocks = temp;
                printf("Total locks: %d\n", tlocks);
            }
        }

        if (c2) {
            printf("Enter value not in range for stocks\n");
        } else {
            temp = stocks + tstocks;
            if (temp > 80) {
                printf("New value %d not in range for stocks\n", temp);
            } else {
                tstocks = temp;
                printf("Total stocks: %d\n", tstocks);
            }
        }

        if (c3) {
            printf("Enter value not in range for barrels\n");
        } else {
            temp = barrels + tbarrels;
            if (temp > 90) {
                printf("New value %d not in range for barrels\n", temp);
            } else {
                tbarrels = temp;
                printf("Total barrels: %d\n", tbarrels);
            }
        }

        printf("Enter the value of locks (-1 to exit):\n");
        scanf("%d", &locks);
    }

    if (tlocks > 0 && tstocks > 0 && tbarrels > 0) {
        printf("Total locks, stocks, barrels: %d, %d, %d\n", tlocks, tstocks, tbarrels);
        sales = (tlocks * lprice) + (tstocks * sprice) + (tbarrels * bprice);
        printf("Sales: %.2f\n", sales);

        if (sales > 1800) {
            comm = 0.10 * 1000;
            comm += 0.15 * 800;
            comm += 0.20 * (sales - 1800);
        } else if (sales > 1000) {
            comm = 0.10 * 1000;
            comm += 0.15 * (sales - 1000);
        } else {
            comm = 0.10 * sales;
        }

        printf("Commission: %.2f\n", comm);
    } else {
        printf("There is no sales.\n");
    }

    return 0;
}
