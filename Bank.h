//
// Created by kadi9 on 16-04-2023.
//

#ifndef ATM_V2_BANK_H
#define ATM_V2_BANK_H

#include<string>


class Bank {
private :
    
std::string name;
double balance;
int PIN;
std::string security_code;

public :

    long long account_number;
    void make_new_account(std::string acc_name, long long account_num,int Pin, double bal_amt,std::string Sec_code);
    void deposit_money(double amt,long long acc_num);
    bool check_pin();
    void withdraw_money(double amt);
    void set_balance(double amt);
    double get_balance();
    void show_balance() ;
    void reset_pin(int pin);
    void set_details(std::string n, long long acc_num,int pin, double bal);
    bool checkAccountNum(long long acc_num) const;

};


#endif //ATM_V2_BANK_H
