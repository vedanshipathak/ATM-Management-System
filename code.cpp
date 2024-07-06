#include<bits/stdc++.h>
using namespace std;
//creating a atm management system
//parent class
class User{
private:
    char name[50];
    long long accNo;
    char type[10];
    long long amount;
    long long total;
    public:
    User()
    {
      amount=0;
      total=0;
    }
    //set values of the user
    void set()
    {
      cout<<"enter name:"<<" ";
      cin>>name;
      cout<<endl;
      cout<<"enter the account number:"<<" ";
      cin>>accNo;
      cout<<endl;
      cout<<"enter the type:"<<" ";
      cin>>type;
      cout<<endl;
      cout<<"Enter the total balance:";
      cin>>total;
      cout<<endl;
    }
    //display values
    void show()
    {
      cout<<"NAME:"<<name<<endl;
      cout<<"ACCOUNT NUMBER:"<<accNo<<endl;
      cout<<"TYPE:"<<type<<endl;
      cout<<"BALANCE:"<<total<<endl;
    }
    //to deposit money to the account 
    void deposit()
    {
      cout << "\nEnter amount to be Deposited\n";
        cin >> amount;
    }
    //showing balance after deposit
     void showbal()
    {
        total = total + amount;
        cout << "\nTotal balance is: " << total;
    }
    //to withdraw money
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Enter amount to withdraw\n";
        cin >> a;
        avai_balance = total - a;
        cout << "Available Balance is" << avai_balance;
    }
};
int main()
{
  User ob;
  int choice;
  while(1)
  {
    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~WELCOME~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Enter Your Choice\n";
        cout << "\t1. Enter name, Account "
             << "number, Account type\n";
        cout << "\t2. Balance Enquiry\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cin >> choice;
        switch (choice)
        {
           case 1:
           ob.set();
           break;
           case 2:
           ob.show();
           break;
           case 3:
           ob.deposit();
           break;
           case 4:
           ob.showbal();
           break;
           case 5:
           ob.withdrawl();
           break;
           case 6:
           exit(1);
           break;
           default:
           cout<< "invalid input\n";
           break;
        }
  }
}
