#include <stdio.h>
#include <string.h>
int Amount, TotalAmount = 100000, Withd, Trans;
long long int MN;
void Deposit();   // Function prototype
void Withdraw();   // Function prototype
void Transfer();   // Function prototype
void Recharge();   // Function prototype
void PayBills();   // Function prototype
void Exit();        // Function prototype
int main() {
    int n;
    printf("1. DEPOSIT AMOUNT\n");
    printf("2. WITHDRAW AMOUNT\n");
    printf("3. BANK TRANSFER\n");
    printf("4. RECHARGE\n");
    printf("5. PAY BILLS\n");
    printf("6. EXIT\n");
    printf("-----------------------\n");
    printf("Enter your choice number: ");
    scanf("%d", &n);
    if (n == 1)
        Deposite();
    else if (n == 2)
        Withdraw();
    else if (n == 3)
        Transfer();
    else if (n == 4)
        Recharge();
    else if (n == 5)
        PayBills();
    else if (n == 6)
        Exit();
    else {
        printf("Wrong input\n");
        printf("Please Enter a Valid Choice number\n");
        printf("--------------------------------------\n");
        main();
    }
    return 0;
}
void Transfer2();   // Function prototype
void Transfer3();   // Function prototype
void Recharge2();   // function declaration
void Recharge3();   // function declaration
void Deposit() {
    int Amount, TotalAmount;
    char str1[11], str2[11],str3[100];
    printf("Enter your 10 Digit Account Number: ");
    scanf(" %[^\n]", str1);
    int x1 = strlen(str1);
    if (x1 == 10) {
        printf("Confirm your 10 Digit Account Number: ");
         scanf(" %[^\n]", str2);
        int x2 = strlen(str2);
            if (x2 == 10) {
                if (strcmp(str1,str2) == 0) {
                    printf("Enter Account Holder Name : ");
        scanf(" %[^\n]",str3);
                    printf("Enter the Amount you want to Deposit: ");
                    scanf("%d", &Amount);
                    TotalAmount = TotalAmount + Amount;
                    printf("A/c 3XXXXX6925 credited by Rs. %d \nTotal Bal: Rs. %d\nNever share OTP/Password for EMI postponement or any reason.\n", Amount, TotalAmount);
                    printf("-------------------------------------------------------------\n");
                    main();
                } else {
                    printf("Account Number and Confirm Account Number are not the same\n");
                    Deposit();
                }
            } else {
                printf("Please Enter a Valid 10 digit Confirm Account Number\n");
                Deposit();
            }
       
    } else {
        printf("Please Enter a Valid 10 digit Account Number\n");
        Deposit();
    }
}

void Withdraw() {
    char str1[10], str2[10];
    printf("Enter your 10 Digit Account Number: ");
    scanf("%s", str1);
    int x1 = strlen(str1);

    if (x1 == 10) {
        printf("Confirm your 10 Digit Account Number: ");
        scanf("%s", str2);
        int x2 = strlen(str2);

        if (x1 == 10) {
            if (x2 == 10) {
                if (strcmp(str1, str2) != 0) {
                    printf("Enter the Amount you want to Withdraw: ");
                    scanf("%d", &Amount);
                    TotalAmount = TotalAmount - Amount;
                    printf("A/c 3XXXXX6925 debited by Rs. %d \nTotal Bal: Rs. %d\nNever share OTP/Password for EMI postponement or any reason.\n", Amount, TotalAmount);
                    printf("-------------------------------------------------------------\n");
                    main();
                } else {
                    printf("Account Number and Confirm Account Number are not the same\n");
                    Withdraw();
                }
            } else {
                printf("Please Enter a Valid 10 digit Confirm Account Number\n");
                Withdraw();
            }
        } else {
            printf("Please Enter a Valid 10 digit Confirm Account Number\n");
            Withdraw();
        }
    } else {
        printf("Please Enter a Valid 10 digit Account Number\n");
        Withdraw();
    }
}
void Transfer() {
    int e, k;
    long long int f;
    char str1[10],str2[10];
    printf("Select Bank\n");
    printf("1. State Bank of India (SBI)\n");
    printf("2. ICICI Bank\n");
    printf("3. Axis Bank\n");
    printf("4. HDFC Bank\n");
    printf("5. Union Bank of India\n");
    printf("6. Central Bank of India\n");
    printf("Enter your choice number: ");
    scanf("%d", &e);
    printf("\n Enter IFSC Code: ");
    scanf("%lld", &f);
    printf("\n Enter Account Number: ");
    scanf("%s", str1);
    int x1 = strlen(str1);
    if(x1==10){
    

    if (strcmp(str1,str2)!=0) {
        printf("Enter the Amount you want to Transfer: ");
        scanf("%d", &Trans);
        printf("Enter Your TPIN: ");
        scanf("%d", &k);
    } else {
        printf("Account Number and Confirm Account Number are not the same\n");
    }

    if (k == 1234) {
        if (Trans <= TotalAmount) {
            TotalAmount = TotalAmount - Trans;
            switch (e) {
                case 1: case 2: case 3: case 4: case 5: case 6:
                    if (strcmp(str1,str2)!=0) {
                        printf("A/c 3XXXXX6925 debited by Rs.%d \nTotal Bal:%d\nNever share OTP/Password for EMI postponement or any reason.", Trans, TotalAmount);
                    }
                    break;
                default:
                    printf("Wrong input");
            }
        } else {
            printf("You do not have sufficient Balance in your Account\n");
        }
    } else {
        printf("INVALID TPIN\n");
        Transfer2();
    }
    }
    else{
        printf("Please Enter a valid Account Number\n");
        Transfer3();
    }
}
void Transfer3(){
    char str1[10],str2[10];
    int q,k;
    printf("Please Re-Enter your  10 Digit Account Number : ");
    scanf("%s",str1);
     int x1 = strlen(str1);
     if(x1==10)
     {
         printf("Confirm Your 10 Digit Account Number : ");
         scanf("%s",str2);
         int x2 = strlen(str2);
         if(x2==10){
         printf("Enter the Amount You Wish to transfer : ");
         scanf("%d",&q);
         printf("Enter Your TPIN: ");
        scanf("%d", &k);
        if(k==1234){
            if(q<=TotalAmount){
                TotalAmount=TotalAmount-q;
                 printf("A/c 3XXXXX6925 debited by Rs.%d \nTotal Bal:%d\nNever share OTP/Password for EMI postponement or any reason.",q, TotalAmount);
                    
     }
     else{
         printf("You do not have sufficient Balance in your Account\n");
     }
        }
     else{
        printf("INCORRECT TPIN\n");
         Transfer2();
         }
         }
     else{
      printf("Please Enter a Valid 10 Digit Confirm Account Number\n");
      Transfer3();
     }
     }
     else{
         printf("Please Enter a Valid 10 Digit Account Number\n");
         Transfer3();
     }
         
}

void Transfer2() {
    int k, g, h;
    printf("Re-Enter Your TPIN: ");
    scanf("%d", &k);

    if (k == 1234) {
        if (Trans <= TotalAmount) {
            TotalAmount = TotalAmount - Trans;
            printf("A/c 3XXXXX6925 debited by Rs.%d \nTotal Bal:%d\nNever share OTP/Password for EMI postponement or any reason.",Trans, TotalAmount);
        } else {
            printf("You do not have sufficient Balance in your Account\n");
        }
    } else {
        printf("INVALID TPIN\n");
        Transfer2();
    }
}

void Recharge() {
    int d;
    char str3[10];
    printf("Enter Mobile Number: ");
    scanf("%s", str3);
    int x3=strlen(str3);
    if(x3==10){
    printf("\nSelect a Plan, e.g. 239 or 28 days\n");
    printf("1. ₹19    Validity- 1 Days     Data- 1.5GB\n");
    printf("2. ₹399   Validity- 28 Days    Data- 2GB/Day\n");
    printf("3. ₹749   Validity- 90 Days    Data- 2GB/Day\n");
    printf("4. ₹808   Validity- 84 Days    Data- 3GB/Day\n");
    printf("5. ₹2,999  Validity- 365 Days   Data- 2.5GB/Day\n");
    printf("6. ₹3,359  Validity- 365 Days   Data- 2.5GB/Day\n");
    printf("7. ₹1,799  Validity- 365 Days   Data- 2GB/Day\n");
    printf("\nEnter your choice: ");
    scanf("%d", &d);

    switch (d) {
        case 1: case 2: case 3: case 4: case 5:
        case 6: case 7:
            printf("PROCEED TO PAY\n");
            break;
            default :
            printf("Wrong Input\n");
            printf("Please Select a Valid Plan Number\n");
            Recharge2();
    }
    }
    else{
        printf("Please Enter a valid Mobile Number\n");
        Recharge();
    }
}

void Recharge2(){
    int n,c;
    printf("Please Re-Enter your choice Number : ");
    scanf("%d",&n);
    switch (n) {
        case 1: case 2: case 3: case 4: case 5: case 6: case 7:
            printf("PROCEED TO PAY\n");
            printf("Select an option to pay\n ");
            printf("1.Paytm UPI\n");
            printf("2.Wallet / Postpaid\n");
            printf("3. Credit / Debit / ATM card\n");
            printf("4.Net Banking\n"); 
            printf("Select an option to Pay : ");
            scanf("%d",&c);
            switch(c)
            {
                case 1: case 2: case 3: case 4:
                printf("Pay Securely");
                break;
                default :
                printf("Wrong Input\n");
                Recharge3();
            }
            
            break;
            default :
            printf("Wrong Input\n");
            Recharge2();
    }
            
}
void Recharge3(){
    int x;
     printf("Please Re-Enter your choice Number : ");
     scanf("%d",&x);
     switch(x){
          case 1: case 2: case 3: case 4:
                printf("Pay Securely");
                break;
                default :
                printf("Wrong Input\n");
                Recharge3();
     }
}
void PayBills() {
    int a, b;
    long long int c;
    printf("\n");
    printf("1. Electricity Bill Payment\n");
    printf("2. Water and Sewage Bill Payment\n");
    printf("3. Gas Cylinder Bill Payment\n");
    printf("------------------------------\n");
    printf("enter your choice number: ");
    scanf("%d", &a);

    if (a == 1) {
        printf("1. Paschim Gujarat Vij Company Limited\n");
        printf("2. Madhya Gujarat Vij Company Limited\n");
        printf("3. Dasshin Gujarat Vij Company Limited\n");
        printf("4. Uttar Gujarat Vij Company Limited\n");
        printf("5. Vaghani Energy Limited\n");
        printf("-------------------------------\n");
        printf("Select your electricity board name: ");
        scanf("%d", &b);
    }
    switch (b) {
        case 1: case 2: case 3: case 4: case 5:
            printf("Please enter your 5 or 11 digit Consumer Number: ");
            scanf("%lld", &c);
            printf("PROCEED TO PAY");
            break;
        default:
            printf("Wrong Input");
    }
}
void Exit() {
    printf("Thank You for Visiting");
}
