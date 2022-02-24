#include<stdio.h>
int main() {
    int m1, m2, m3, m4, m5;
    
    printf("Enter Marks 1 : ");
    scanf("%d", &m1);

    printf("Enter Marks 2 : ");
    scanf("%d", &m2);

    printf("Enter Marks 3 : ");
    scanf("%d", &m3);

    printf("Enter Marks 4 : ");
    scanf("%d", &m4);

    printf("Enter Marks 5 : ");
    scanf("%d", &m5);

    int total = m1 + m2 + m3 + m4 + m5;
    
    printf("Total Marks = %d\n", total);
    printf("Average Marks = %d\n", total/5);
    printf("Percentage = %f\n", (total/500.0)*100);

    return 0;
}
