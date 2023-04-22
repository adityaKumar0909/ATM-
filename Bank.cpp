//
// Created by kadi9 on 16-04-2023.
//

#include "Bank.h"

//
// Created by kadi9 on 08-04-2023.
//

#include<iostream>
#include "Bank.h"
using namespace std;



void Bank::make_new_account(std::string acc_name, long long account_num,int Pin, double bal_amt,std::string Sec_code)
{
  name=acc_name;
  account_number=account_num;
  PIN=Pin;
  balance=bal_amt;
  security_code=Sec_code;

}
bool Bank::checkAccountNum(long long acc_num) const{

    if(account_number==acc_num)
    {
        return true;
    }
    else
        return false;
}

void Bank::set_balance (double amt)
{
    balance=amt;
}
double Bank::get_balance() {
    return balance;
}
void Bank::reset_pin(int pin){
    cout<<"Seems like you have forgot your password !\n";
    cout<<"No worries ! Just answer one security question \n";
    cout<<"Enter your favourite cousin name : ";
    string security_code_answer;
    cin>>security_code_answer;
    if(security_code_answer==security_code)
    {
        PIN=pin;
        cout<<"Password changed successfully !\n";
    }
    else
    {
        cout<<"Wrong answer ! Sorry password can't be changed .\n";
    }


}
void Bank::withdraw_money(double amt) {
    if(check_pin()) {
        if (balance >= amt) {
            balance -= amt;
            cout << endl << amt << " withdrawn  " << endl;
        } else {
            cout << " Insufficient Balance" << endl;
        }
    }
}

void Bank::deposit_money(double amt,long long acc_num) {
    if (acc_num==account_number){
        balance+=amt;
        cout<<endl<<amt<<" deposited !! \n";
        cout<<"\nCurrent Balance : "<<balance<<endl;}
    else
    {
        cout<<"\nAccount details not found !\n ";
    }

}
void Bank::set_details(std::string n, long long acc_num, int pin, double bal) {
    name = n;
    account_number = acc_num;
    balance = bal;
    PIN = pin;
}

void Bank::show_balance()  {
    if(check_pin()){
        cout<<endl<<"Balance : "<<balance<<endl;
    }
}

bool Bank::check_pin() {
    int pin;
    cout<<"\nEnter PIN : ";
    cin>>pin;
    if (pin==PIN){
        return true;
    } else{
        cout<<"\nIncorrect pin...\n ";
        return false;
    }
}