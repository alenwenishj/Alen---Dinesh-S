#include <stdio.h>
#include <string.h>

char banks[8][50]={"HDFC Bank","State Bank of India (SBI)","India Overseas Bank (IOB)","ICICI Bank","Canara Bank","Federal Bank","Axis Bank","Indian Bank"};

void savings_account(char* bank_name)
{
    float rates[8] ={7.01,7.50,6.65,6.90,7.25,6.25,6.47,7.31};
    int withdraw_limit[8]={8,4,6,6,4,10,7,8};
    int min_bal[8]={10000,5000,5000,500,1000,100,200,500};
    int annual_charge[8]={350,100,500,250,200,200,100,150};
    printf("\n*************************************************************\n");
    printf("\tSavings Account information of %s\n",bank_name); 
    printf("*************************************************************\n\n");
    for(int i=0;i<8;i++)
    {
        if(bank_name==banks[i])
        {
            printf("The interest rate is %.2f%%\n",rates[i]);
            printf("%d free monthly cash withdrawals\n",withdraw_limit[i]);
            printf("The minimum balance is Rs.%d\n",min_bal[i]);
            printf("The annual charge fees is Rs.%d\n\n",annual_charge[i]);
            break;
        }
    }
}

void current_account(char* bank_name)
{
    float rates[8] ={6.01,6.50,5.65,5.90,6.25,5.25,5.47,5.31};
    int cheques[8]={50,50,60,50,40,30,30,25};
    int min_bal[8]={10000,10000,15000,5000,12000,10000,5000,5000};
    int annual_charge[8]={550,700,600,750,500,250,150,650};
    printf("\n*************************************************************\n");
    printf("\tCurrent Account information of %s\n",bank_name); 
    printf("*************************************************************\n\n");
    for(int i=0;i<8;i++)
    {
        if(bank_name==banks[i])
        {
            printf("The interest rate for current account is %.2f%%\n",rates[i]);
            printf("Free %d cheque leaves per month\n",cheques[i]);
            printf("The minimum balance for current account is Rs.%d\n",min_bal[i]);
            printf("The annual charge fees is Rs.%d\n\n",annual_charge[i]);
            break;
        }
    }
}

void demat_account(char* bank_name)
{
    int opening_charges[8] ={1000,850,800,500,750,600,950,500};
    float equity[8]={1.00,0.50,0.25,0.25,0.55,1.00,0.20,0.30};
    float transaction[8]={0.02,0.05,0.03,0.05,0.08,0.10,0.01,0.02};
    int annual_charge[8]={550,700,600,750,500,250,150,650};
    printf("\n*************************************************************\n");
    printf("\tDemat Account information of %s\n",bank_name); 
    printf("*************************************************************\n\n");
    for(int i=0;i<8;i++)
    {
        if(bank_name==banks[i])
        {
            printf("Demat account opening charges is Rs.%d\n",opening_charges[i]);
            printf("The brokerage fee for equity delivery is %.2f%%\n",equity[i]);
            printf("The transaction charges is %.2f%% of the transaction value\n",transaction[i]);
            printf("The annual maintenance charge for the Demat account is Rs.%d\n\n",annual_charge[i]);
            break;
        }
    }
}

void banking_operations(char* bank_name)
{
    printf("\n*****************************************************\n");
    printf("\tWelcome to %s\n",bank_name); 
    printf("*****************************************************\n\n");
    int choice;
    char ans;
    do{
        printf("\tAccount Summary\n\n");
        printf("1. Savings Account\n2. Current Account\n3. Demat Account\n\nSelect the account to view the details: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: savings_account(bank_name);
                    break;
            case 2: current_account(bank_name);
                    break;
            case 3: demat_account(bank_name);
                    break; 
            default: printf("Invalid choice!!\nEnter a valid account...\n");
                     continue;
        }
        printf("\nDo you to check details for another account? [y/n]:");
        scanf(" %c",&ans);
    }while(ans=='y' || ans=='Y');
}

int main()
{
    int choice;
    char ans;
    do{
        printf("******************************************************\n\n");
        printf("\t\tMain Menu\n\n");
        printf("******************************************************\n\n");
        for(int i=0;i<8;i++)
        {
            printf("%d. ",i+1);
            puts(banks[i]);
        }
        printf("Choose your bank (Enter the number): ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8: banking_operations(banks[choice-1]);
                    break;
            default: printf("Invalid choice!!\nEnter a valid number...\n");
        }
        printf("\nDo you want to continue and go to the main menu? [y/n]:");
        scanf(" %c",&ans);
    }while(ans=='y'|| ans=='Y');
    return 0;
}
