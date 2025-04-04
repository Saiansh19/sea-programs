#include<stdio.h>
int main()
{
    int dd,mm,yyyy;
    printf("Enter date (DD/MM/YYYY) format : ");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);
    //to check year
    if (yyyy>=1900 && yyyy<=2999)
    {
        //to check month
        if (mm>=1 && mm<=12)
        {
            //to check days
            if ((dd>=1 && dd<=31) && (mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12))
            {
                printf("Date is valid. \n");
            }
            else if ((dd>=1 && dd<=30) && (mm==4||mm==6||mm==9||mm==11))
            {
                printf("Date is valid. \n");
            }
            else if ((dd>=1 && dd<=28) && (mm==2))
            {
                printf("Date is valid. \n");
            }
            else if (dd==29 && mm==2 && (yyyy % 400 == 0 || (yyyy % 4 == 0 && yyyy % 100 != 0)))
            {
                printf("Date is valid. \n");
            }            
            else 
            {
                printf("Date is invalid. \n");
            }
        }
        else
        {
            printf("Month is invalid. \n");
        }
    }
    else
    {
        printf("Year is invalid. \n");
    }
}