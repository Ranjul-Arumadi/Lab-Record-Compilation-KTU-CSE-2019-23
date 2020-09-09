#include<stdio.h>
#define C_SIZE 30
union person
{
    char Name[C_SIZE];
    char HouseName[C_SIZE];
    char CityName[C_SIZE];
    char State[C_SIZE];
    long int PinCode;
    
}x;
void main()
{
    printf("Enter the name- ");
     scanf("%s",x.Name);
     printf("\nName: %s",x.Name);
    printf("\nEnter the housename- ");
     scanf("%s",x.HouseName);
     printf("\nHousename  %s",x.HouseName);
    printf("\nEnter the city name-  ");
     scanf("%s",x.CityName);
     printf("\nCityName : %s",x.CityName);
    printf("\nEnter the state-  ");
     scanf("%s",x.State);
     printf("\nState : %s",x.State);
    printf("\nEnter the pincode-  ");
     scanf("%ld",&x.PinCode);
     printf("\nPinCode : %ld",x.PinCode);
 
}
