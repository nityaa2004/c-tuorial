#include<stdio.h>
#include<conio.h>
int main() {
    //2 x 3 
    int marks[2][3];
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=78;

    marks[1][0]=100;
    marks[1][1]=97;
    marks[1][2]=80;

    printf("%d",marks[0][2]);

    return 0;

}