//Input Format
//•Input will contain a non-negative integer N.
//Constraints
//•	1 <= N <= 2^31
//Output Format
//•	Output the events that will happen as asked in the question.
//Sample Input 0
//1000
//Sample Output 0
//Bad luck!
//Sample Input 1
//1450
//Sample Output 1
//I will buy Punjabi
//Sample Input 2
//1500

#include<stdio.h>
int main(){
int tk;
scanf("%d",&tk);
if(tk>500 && tk<=1000)
{
    printf("Bad luck!");
}
else if(tk>=1001 && tk<=1499)
{
    printf("I will buy Punjabi");
}
else
{

    printf("I will buy Punjabi\n");
    printf("I will buy new shoes\n");
    printf("Alisa will buy new shoes\n");
}




return 0;}

