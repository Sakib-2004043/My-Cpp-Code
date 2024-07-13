#include<stdio.h>
#include<conio.h>
int main( )
{
    FILE *file6;
    file6=fopen("output.txt","w");
    if(file6==NULL)
    {
        //fprintf(file6,"Mobile\t\tAge\t\tName");
    }
    char name[99][999];
    int n,i,age=35;
    n=1000000;
    double phone=01236;
    printf("Enter the number of person:");
    //scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        //printf("Enter data for person %d.\n\n",i+1);
        //printf("Enter Name:");
        //fflush(stdin);
        //gets(name[i]);
        //printf("Enter Mobile Number:");
        //scanf("%ld",&phone);
        //printf("Enter Age:");
        //scanf("%d",&age);
        fprintf(file6,"\n%ld\t%d\t\t",phone,age);
    }
    fclose(file6);
    printf("\n\nFile is written successfully.\n");
    //getch();
    return 0;
}
