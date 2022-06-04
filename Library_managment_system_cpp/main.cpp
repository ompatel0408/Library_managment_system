//
//  main.cpp
//  Library_managment_system_cpp
//
//  Created by ompatel on 24/05/22.
//

#include <iostream>
#include "Library.hpp"
#include <stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *Next;
}*Head;
int Insert();
class Admin
{
private:
    string name;
    string E_mail;
    string password;
    int job_id;
public:
    inline string input_name();
    inline void input_job_id();
    inline int display_job_id();
    inline string input_E_mail();
    inline string input_password();
    
};//end
inline string Admin::input_name(){
    fflush(stdin);
    cout<<"\nEnter your name : ";
    getline(cin, name);

    return name;
}
inline void Admin::input_job_id(){
    fflush(stdin);
    cout<<"\nEnter your job id : ";
    cin>>job_id;
}
inline int Admin::display_job_id(){
    return job_id;
}
inline string Admin::input_E_mail()
{
    fflush(stdin);
    cout<<"\nEnter your E-mail id : ";
    getline(cin, E_mail);
    
    return E_mail;
}
inline string Admin::input_password(){
    fflush(stdin);
    cout<<"\nEnter your password : ";
    getline(cin,password);
    
    
    return password;
}
class Students : private Admin
{
private:
    string name;
    string E_mail;
    string password;
    string required_book;
    int quantity_of_book;
    string type_of_books;
    string Gender;
    string city;
    long phone_number;
    string Address;
    int PIN;
    int balance;
public:
    inline string input_name_stu();
    inline string input_E_mail_stu();
    inline string input_password_stu();
    inline string input_required_book_stu();
    inline int input_quantity_of_book_stu();
    inline string input_type_of_book_stu();
    inline string input_gender();
    inline string input_city();
    inline int input_balance();
    inline int input_pin();
    inline long input_phone_number();
    inline string input_address();
};
inline string Students::input_gender(){
    
    cout<<"\nEnter your Gender : ";
    getline(cin, Gender);
    return Gender;
}
inline long Students::input_phone_number(){
    cout<<"\nEnter your phone number : ";
    cin>>phone_number;
    
    return phone_number;
}
inline string Students::input_address(){
    cout<<"\nEnter your current address : ";
    getline(cin, Address);
    
    return Address;
}
inline int Students::input_pin(){
    cout<<"\nEnter your PIN : ";
    cin>>PIN;
    
    return PIN;
}
inline int Students::input_balance(){
    cout<<"\nEnter your Balance in your amazon card : ";
    cin>>balance;
    
    return balance;
}
inline string Students::input_city(){
    
    cout<<"\nEnter your city : ";
    getline(cin, city);
    return city;
}
inline string Students::input_name_stu(){
    fflush(stdin);
    cout<<"\nEnter your name : ";
    getline(cin, name);
    
    return name;
}
inline string Students::input_E_mail_stu(){
    fflush(stdin);
    cout<<"\nEnter your E-mail : ";
    getline(cin, E_mail);
    
    return E_mail;
}
inline string Students::input_password_stu(){
    fflush(stdin);
    cout<<"\nEnter your password : ";
    getline(cin, password);
    
    return password;
}
inline string Students::input_required_book_stu(){
    fflush(stdin);
    cout<<"\nEnter name of book you want to have : ";
    getline(cin, required_book);
    
    return required_book;
}
inline int  Students::input_quantity_of_book_stu(){
    fflush(stdin);
    cout<<"\nEnter quantity of books you want to have : ";
    cin>>quantity_of_book;
    
    return quantity_of_book;
}
inline string Students::input_type_of_book_stu(){
    fflush(stdin);
    cout<<"\nEnter type of books you want to have : ";
    cin>>type_of_books;
    
    return type_of_books;
}
class Book : public Students
{
public:
    string type_of_books;
    string type_of_books1;
    string type_of_books2;
    string type_of_books3;
    string type_of_books4;
    string sci_book1;
    string sci_book2;
    string sci_book3;
    string sci_book4;
    string sci_book5;
    string hor_book1;
    string hor_book2;
    string hor_book3;
    string hor_book4;
    string hor_book5;
    string AI_book1;
    string AI_book2;
    string AI_book3;
    string AI_book4;
    string AI_book5;
    string spe_book1;
    string spe_book2;
    string spe_book3;
    string spe_book4;
    string spe_book5;
    string cs_book1;
    string cs_book2;
    string cs_book3;
    string cs_book4;
    string cs_book5;
public:
    Book(){
        type_of_books="Science-friction";
        type_of_books1="Horror";
        type_of_books2="Artificial intelligance";
        type_of_books3="Speretual";
        type_of_books4="Computer science";
        sci_book1="Lost in space";
        sci_book2="The martian";
        sci_book3="Interstaller";
        sci_book4="Return to space";
        sci_book5="The time machine";
        hor_book1="The Shining";
        hor_book2="House of Leaves";
        hor_book3="Pet Sematary";
        hor_book4="The Exorcist";
        hor_book5="Bird Box";
        AI_book1="Artificial Intelligence: A Modern Approach";
        AI_book2="Life 3.0";
        AI_book3="Deep Learning";
        AI_book4="The Book of Why";
        AI_book5="Think like AI";
        spe_book1="The Shiva Sutras";
        spe_book2="Mahabharat";
        spe_book3="ramayana";
        spe_book4="karn";
        spe_book5="krishna leela";
        cs_book1="Introduction to Algorithms";
        cs_book2="Clean Code";
        cs_book3="Code Complete";
        cs_book4="Hackers: Heroes of the Computer Revolution";
        cs_book5="Compilers: Principles, Techniques, and Tools";
        
        
         
    }
};
class Prize : public Book{
public:
     
    float prize1,prize2,prize3,prize4,prize5;
    float prize6,prize7,prize8,prize9,prize10;
    float prize11,prize12,prize13,prize14,prize15;
    float prize16,prize17,prize18,prize19,prize20;
    float prize21,prize22,prize23,prize24,prize25;
public:
    Prize(){
        prize1=49;
        prize2=54.78;
        prize3=34.45;
        prize4=78.90;
        prize5=14;
        prize6=24.5;
        prize7=30;
        prize8=23.56;
        prize9=57;
        prize10=43.45;
        prize11=51;
        prize12=46.78;
        prize13=12;
        prize14=56;
        prize15=89;
        prize16=76.67;
        prize17=54;
        prize18=33.34;
        prize19=50;
        prize20=11;
        prize21=32;
        prize22=13.45;
        prize23=34.9;
        prize24=15.7;
        prize25=23.9;
        
    }
};
class Account
{
private:
    double Total_amount_after_adding;
    double remaining_amount;
    double Updated_amount;
    double Requested_money1;
public:
    inline double input_Total_amount_after_adding();
    inline double Input_remaining_amount();
    inline double Input_Updated_amount();
    inline double Input_requested_money();

};
inline double Account::input_Total_amount_after_adding(){
    Total_amount_after_adding=1009.38;
    
    return Total_amount_after_adding;
}
inline double Account::Input_remaining_amount(){
    
    return remaining_amount;
}
inline double Account::Input_Updated_amount(){
    return Updated_amount;
}
inline double Account::Input_requested_money(){
    return Requested_money1;
}
typedef class Students stu;
typedef class Admin A;
typedef class Book B;
typedef class Prize P;
typedef class Account A1;
int main(){
    A a;
    int index1;
    struct Node *temp,*p;
    cout<<"\nHow many of you are intrested to buy a book : ";
    cin>>index1;
    if (Head==NULL)
    {
        Head=(struct Node*)malloc(sizeof(struct Node));
        Head->data=index1;
        Head->Next=NULL;
    }
    else
    {
        temp=(struct Node*)malloc(sizeof(struct Node));
        temp->data=index1;
        temp->Next=NULL;
        
        p=Head;
        while (p->Next!=NULL)
        {
            p=p->Next;
        }
        p->Next=temp;
    }
    int index=index1;
    string first[index1];
    string st;
    string st_1 ;
    string st_2 ;
    string second[index1];
    string third[index1];
    string forth[index1];
    string fifth[index1];
    string sixth[index1];
    string seventh[index1];
    string eighth[index1];
    string ninth[index1];
    string log1[index1];
    string log2[index1];
    string log3[index1];
    string g[index1];
    string c[index1];
    float prize26 = 0.0;
    int h_book=0;
    int pincode;
    string book1;
    string book2[h_book];
    string book3;
    int h_books[h_book];
    string book4;
    stu s[index1];
    int h1_book=0;
    h1_book=h_book;
    string boolean="YES";
    string boolean1="Yes";
    string boolean2="yes";
    string boolean4;
    string card_holder_name;
    long  Card_number;
    short cvv=0;
    int year;
    int month;
    int PIN=0;
    string name;
    string tp;
    string name1;
    int PIN2 = 0;
    long phone_number1 = 0;
    int balance2 = 0;
    string Address;
    int PIN1 = 0;
    int balance=0;
    int balance3=0;
    int Remaining_balance1=0;
    int balance1 = 0;
    int Remaining_balance = 0;
    bool bool1=false,bool2=false,bool3=false,bool4=false,bool5=false,bool6=false,bool7=false,bool8=false,bool9=false,bool10=false,bool11=false,bool12=false,bool13=false,bool14=false,bool15=false,bool16=false,bool17=false,bool18=false,bool19=false,bool20=false,bool21=false,bool22=false,bool23=false,bool24=false,bool25=false,bool26=false ,bool27=false,bool28=false,bool29=false;
    float pr1 = 0.0,pr2 = 0.0,pr3 = 0.0,pr4,pr5,pr6,pr7,pr8,pr9,pr10,pr11,pr12,pr13,pr14,pr15,pr16,pr17,pr18,pr19,pr20,pr21,pr22,pr23,pr24,pr25,pr26;
    
    float total = 0.0,total1 = 0.0,total2 = 0.0,total3 = 0.0,total4 = 0.0,total5 = 0.0,total6 = 0.0,total7 = 0.0,total8 = 0.0,total9 = 0.0,total10 = 0.0,total11 = 0.0,total12 = 0.0,total13 = 0.0,total14 = 0.0,total15 = 0.0,total16 = 0.0,total17 = 0.0,total18 = 0.0,total19 = 0.0,total20 = 0.0,total21 = 0.0,total22 = 0.0,total23 = 0.0,total24 = 0.0,total25 = 0.0;
    A1 a2;
    double a_1=a2.Input_Updated_amount();
    double a_2=a2.Input_Updated_amount();
    double a_3=a2.Input_Updated_amount();
    double a_4=a2.Input_Updated_amount();
    double a_5=a2.Input_Updated_amount();
    double a_6=a2.Input_Updated_amount();
    double a_7=a2.Input_Updated_amount();
    double a_8=a2.Input_Updated_amount();
    double a_9=a2.Input_Updated_amount();
    double a_10=a2.Input_Updated_amount();
    double a_11=a2.Input_Updated_amount();
    double a_12=a2.Input_Updated_amount();
    double a_13=a2.Input_Updated_amount();
    double a_14=a2.Input_Updated_amount();
    double a_15=a2.Input_Updated_amount();
    double a_16=a2.Input_Updated_amount();
    double a_17=a2.Input_Updated_amount();
    double a_18=a2.Input_Updated_amount();
    double a_19=a2.Input_Updated_amount();
    double a_20=a2.Input_Updated_amount();
    double a_21=a2.Input_Updated_amount();
    double a_22=a2.Input_Updated_amount();
    double a_23=a2.Input_Updated_amount();
    double a_24=a2.Input_Updated_amount();
    double a_25=a2.Input_Updated_amount();
    double a_26=a2.Input_Updated_amount();
    double a_27=a2.Input_Updated_amount();
    double a_30=0.0;
    double a_29=a2.Input_remaining_amount();
    
    B b2;
    string b_1= b2.sci_book1,b_2 = b2.sci_book2,b_3 = b2.sci_book3,b_4 = b2.sci_book4,b_5 = b2.sci_book5;
    string b_6 = b2.hor_book1,b_7 = b2.hor_book2,b_8 = b2.hor_book3,b_9 = b2.hor_book4,b_10 = b2.hor_book5;
    string b_11 = b2.AI_book1,b_12 = b2.AI_book2,b_13 = b2.AI_book3,b_14 = b2.AI_book4,b_15 = b2.AI_book5;
    string b_16 = b2.spe_book1,b_17 = b2.spe_book2,b_18 = b2.spe_book3,b_19 = b2.spe_book4,b_20 = b2.spe_book5;
    string b_21 = b2.cs_book1,b_22 = b2.cs_book2,b_23 = b2.cs_book3,b_24 = b2.cs_book4,b_25 = b2.cs_book5;
    float pr27[h_book];
    float prize27[h_book];
    float mul27;
    float total26 = 0.0;
    int choice;
    while (2)
    {
        cout<<"\n1) Create account for Admin";
        cout<<"\n2) Create account for students";
        cout<<"\n3) For log with Admin";
        cout<<"\n4) For login with students";
        cout<<"\n5) For create amazon card";
        cout<<"\n6) Wallet for UPI";
        cout<<"\nPlease,enter your choice : ";
        cin>>choice;
        switch (choice)
        {
            case 1:
            {
                A a;
                cout<<"______________________________________________________________";
                cout<<"\n                     sign up details                       \n";
                cout<<"--------------------------------------------------------------";
                st = a.input_name();
                st_1=a.input_E_mail();
                st_2=a.input_password();
                cout<<"_______________________________________________________________________________________________\n";
                cout<<"Name = "<<st<<" | "<<"E-mail = "<<st_1<<" | "<<"Password = "<<st_2<<" | ";
                cout<<"\n-----------------------------------------------------------------------------------------------";
               
                
            }//end of case 1
                break;
            case 2:
            {
                for (int i=0; i<index; i++)
                {
                    cout<<"----------------------------------------------";
                    cout<<"\n             Sign up details              \n";
                    cout<<"-----------------------------------------------";
                    first[i] = s[i].input_name_stu();
                    second[i]= s[i].input_E_mail_stu();
                    third[i] = s[i].input_password_stu();
                    cout<<"-----------------------------------------------";
                    cout<<"\n             Personal details             \n";
                    cout<<"-----------------------------------------------";
                    g[i]=s[i].input_gender();
                    c[i]=s[i].input_city();
                    cout<<"\n                      🙏    Welcome to our library "<<first[i]<<"     🙏                   \n";
                }//end of for loop
                cout<<"_____________________________________________________________________________________________________________________________________________________________________\n";
                for (int i=0; i<index; i++)
                {
                    cout<<"Name = "<<first[i]<<" | "<<"E-mail = "<<second[i]<<" | "<<"Password = "<<third[i]<<" | ";
                }//end of for loop
                cout<<"\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------";
               
               
            }//end of case 2
                break;
            case 3:
            {
                if (st == string() || st_1== string()|| st_2==string())
                {
                    cout<<"\nPlease,Create account first!!!\n";
                }//end of if statement
                else
                {
                    
                    int isfound=0;
                    A a1;
                    //string a_1= a1.input_name();
                    cout<<"_______________________________________________________________________________________";
                    cout<<"\n                                    Login details                                  \n";
                    cout<<"---------------------------------------------------------------------------------------";
                    string a_2=a1.input_E_mail();
                    string a_3= a1.input_password();
                    
                    if ((a_2==st_1) && (a_3 == st_2))
                    {
                        
                        cout<<"\n                            ✅ Login successfully!!!                         \n";
                        isfound=1;
                        int choice1 = 0;
                        
                            cout<<"\n1) For insert some information to server";
                            cout<<"\n2) For chack stock of all type of books";
                            cout<<"\n3) For insert prize of requested book : ";
                            cout<<"\n4) For chack funding information";
                            cout<<"\nPlease,enter your choice : ";
                            cin>>choice1;
                            
                            switch (choice1) {
                                case 1:
                                {
                                    
                                    for (int j=0; j<index ; j++)
                                    {
                                        seventh[j]=log1[j];
                                        eighth[j]=log2[j];
                                        ninth[j]=log3[j];
                                    }
                                    for (int i=0;i<index1;i++)
                                    {
                                        cout<<"Name = "<<first[i]<<"\t\t"<<"E-mail = "<<second[i]<<"\t\t"<<"Password = "<<third[i]<<"\n";
                                    }
                                    
                                }//end of case 1
                                    break;
                                case 2:
                                {
                                    int choice5;
                                    cout<<"\n1) For chack science-friction books";
                                    cout<<"\n2) For chack Horror books";
                                    cout<<"\n3) For chack AI book";
                                    cout<<"\n4) For chack sperectual book";
                                    cout<<"\n5) For chack computer science books";
                                    cout<<"\nPlease ,Enter your choice : ";
                                    cin>>choice5;
                                    switch(choice5)
                                    {
                                        case 1:
                                            
                                                if(((boolean==boolean4) && (tp=="Science-friction"))|| ((boolean1==boolean4) && (tp=="Science-friction"))|| ((boolean2==boolean4) && (tp=="Science-friction")))
                                                {
                                                    
                                                        cout<<"_____________________________________________________________________________";
                                                        cout<<"\n                      Available Science-friction book                    \n";
                                                        cout<<"-----------------------------------------------------------------------------\n";
                                                        cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                        cout<<" |";                    cout<<"---------------\n"    ;
                                                        cout<<" |";                    cout<<"6)"<<book1<<"\n";
                                                    
                                                    
                                                }
                                                if(bool1==true && book4=="Science-friction")
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Science-friction book                    \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";
                                                    for(int i=0; i<=h_book; i++)
                                                    {
                                                        cout<<"6)"<<book2[i]<<"\n";
                                                        
                                                    }//end of for loop
                                                }
                                        
                                        
                                            
                                                if(bool1==false)
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Science-friction book                    \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    break;
                                                }
                                            
                                            
                                                break;
                                        case 2:
                                            
                                                    if(((boolean==boolean4) && (tp=="Horror"))|| ((boolean1==boolean4) && (tp=="Horror"))|| ((boolean2==boolean4) && (tp=="Horror")))
                                                        {
                                                            cout<<"_____________________________________________________________________________";
                                                            cout<<"\n                      Available Horror book                                \n";
                                                            cout<<"-----------------------------------------------------------------------------\n";
                                                            cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                            cout<<" |";                    cout<<"---------------\n"    ;
                                                            cout<<" |";                    cout<<"6)"<<book1<<"\n";
                                                            break;
                                                        }
                                                        else if ((bool1==true) && (book4=="Horror"))
                                                        {
                                                            cout<<"_____________________________________________________________________________";
                                                            cout<<"\n                      Available Horror book                                \n";
                                                            cout<<"-----------------------------------------------------------------------------\n";
                                                            cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                            cout<<" |";                    cout<<"---------------\n";
                                                            cout<<" |";
                                                            for (int i=0; i<=h_book; i++)
                                                            {
                                                                cout<<"6)"<<book2[i]<<"\n";
                                                               
                                                            }//end of for loop
                                                            break;
                                                        }
                                                    
                                            
                                                if(bool1==false)
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Horror book                                \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    
                                                    break;
                                                }
                                               
                                            
                                                break;
                                        case 3:
                                            
                                                if(((boolean==boolean4) && (tp=="Artificial intelligance"))|| ((boolean1==boolean4) && (tp=="Artificial intelligance"))|| ((boolean2==boolean4) && (tp=="Artificial intelligance")))
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Artificial intelligance book               \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n"    ;
                                                    cout<<" |";                    cout<<"6)"<<book1<<"\n";
                                                    break;
                                                }
                                                else if (bool1==true && book4=="Artificial intelligance"){
                                                    
                                                        cout<<"_____________________________________________________________________________";
                                                        cout<<"\n                      Available Artificial intelligance book               \n";
                                                        cout<<"-----------------------------------------------------------------------------\n";
                                                        cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";
                                                    for (int i=0; i<h_book; i++)
                                                    {
                                                        cout<<"6)"<<book2[i]<<"\n";
                                                        
                                                    }//end of for loop
                                                    break;
                                                }
                                            
                                            
                                            
                                                if(bool1==false)
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Horror book                                \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    
                                                    break;
                                                }
                                            
                                                break;
                                            
                                        case 4:
                                            
                                            
                                                if(((boolean==boolean4) && (tp=="Sperectual"))|| ((boolean1==boolean4) && (tp=="Sperectual"))|| ((boolean2==boolean4) && (tp=="Sperectual")))
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Sperectual book                            \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n"    ;
                                                    cout<<" |";                    cout<<"6)"<<book1<<"\n";
                                                    break;
                                                }
                                                else if (bool1==true  && book4=="Sperectual"){
                                                    
                                                        cout<<"_____________________________________________________________________________";
                                                        cout<<"\n                      Available Sperectual book                            \n";
                                                        cout<<"-----------------------------------------------------------------------------\n";
                                                        cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";
                                                    for (int i=0; i<h_book; i++)
                                                    {
                                                        cout<<"6)"<<book2[i]<<"\n";
                                                        
                                                    }//end of for loop
                                                    break;
                                                }
                                            
                                            
                                            
                                                if(bool1==false)
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Sperectual book                            \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    
                                                    break;
                                                }
                                                
                                               break;
                                        case 5:
                                            
                                                if(((boolean==boolean4) && (tp=="Computer science"))|| ((boolean1==boolean4) && (tp=="Computer science"))|| ((boolean2==boolean4) && (tp=="Computer science")))
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Computer science book                      \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n"    ;
                                                    cout<<" |";                    cout<<"6)"<<book1<<"\n";
                                                }
                                                else if (bool1==true && book4=="Computer science"){
                                                    
                                                        cout<<"_____________________________________________________________________________";
                                                        cout<<"\n                      Available Computer science book                      \n";
                                                        cout<<"-----------------------------------------------------------------------------\n";
                                                        cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                        cout<<" |";                    cout<<"---------------\n";
                                                        cout<<" |";
                                                    for (int i=0; i<h_book; i++)
                                                    {
                                                        cout<<"\n6)"<<book2[i]<<"\n";
                                                        
                                                    }//end of for loop
                                                }
                                            
                                            
                                            
                                                if(bool1==false)
                                                {
                                                    cout<<"_____________________________________________________________________________";
                                                    cout<<"\n                      Available Computer science book                      \n";
                                                    cout<<"-----------------------------------------------------------------------------\n";
                                                    cout<<" |";                    cout<<"1)"<<b_1<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"2)"<<b_2<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"3)"<<b_3<<"\n"        ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"4)"<<b_4  <<"\n"      ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                    cout<<" |";                    cout<<"5)"<<b_5     <<"\n"   ;
                                                    cout<<" |";                    cout<<"---------------\n";
                                                }
                                            
                                    break;
                                        default:
                                            cout<<"\n❌ ERROR : Invalid choice please try again!!!";
                                    break;
                                    }
                                }//end of case 2
                                    break;
                                case 3:
                                        for(int i=0;i<index;i++)
                                        {
                                            if(g[i]=="MALE" || g[i]=="male" ||g[i]=="Male")
                                            {
                                                cout<<"\nEnter prize of new book which was requested by"<<" Mr "<<log1[i];
                                                cin>>prize26;
                                                
                                            }//end of first if
                                            if (g[i]=="female" || g[i]=="FEMALE" ||g[i]=="Female")
                                            {
                                                    cout<<"\nEnter prize of new book which was requested by"<<" Miss "<<log1[i];
                                                    cin>>prize26;
                                            }//end of second if
                                        }//end of for loop
                                    
                                    break;
                                case 4:
                                {
                                    
                                    if((bool2==true) && (bool3==true))
                                    {
                                        a_1=a2.input_Total_amount_after_adding()+total;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_1<<"\n";
                                    }//end of if statement
                                    else if((bool2==true)&&(bool4==true))
                                    {
                                        a_2=a2.input_Total_amount_after_adding()+total1;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_2<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool5==true))
                                    {
                                        a_3=a2.input_Total_amount_after_adding()+total2;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_3<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool6==true))
                                    {
                                        a_4=a2.input_Total_amount_after_adding()+total3;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_4<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool7==true))
                                    {
                                        a_5=a2.input_Total_amount_after_adding()+total4;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_5<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool8==true))
                                    {
                                        a_6=a2.input_Total_amount_after_adding()+total5;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_6<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool9==true))
                                    {
                                        a_7=a2.input_Total_amount_after_adding()+total6;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_7<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool10==true))
                                    {
                                        a_8=a2.input_Total_amount_after_adding()+total7;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_8<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool11==true))
                                    {
                                        a_9=a2.input_Total_amount_after_adding()+total8;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_9<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool12==true))
                                    {
                                        a_10=a2.input_Total_amount_after_adding()+total9;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_10<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool13==true))
                                    {
                                        a_11=a2.input_Total_amount_after_adding()+total10;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_11<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool14==true))
                                    {
                                        a_12=a2.input_Total_amount_after_adding()+total11;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_12<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool15==true))
                                    {
                                        a_13=a2.input_Total_amount_after_adding()+total12;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_13<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool16==true))
                                    {
                                        a_14=a2.input_Total_amount_after_adding()+total13;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_14<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool17==true))
                                    {
                                        a_15=a2.input_Total_amount_after_adding()+total14;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_15<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool18==true))
                                    {
                                        a_16=a2.input_Total_amount_after_adding()+total15;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_16<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool19==true))
                                    {
                                        a_17=a2.input_Total_amount_after_adding()+total16;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_17<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool20==true))
                                    {
                                        a_18=a2.input_Total_amount_after_adding()+total17;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_18<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool21==true))
                                    {
                                        a_19=a2.input_Total_amount_after_adding()+total18;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_19<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool22==true))
                                    {
                                        a_20=a2.input_Total_amount_after_adding()+total19;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_20<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool23==true))
                                    {
                                        a_21=a2.input_Total_amount_after_adding()+total20;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_21<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool24==true))
                                    {
                                        a_22=a2.input_Total_amount_after_adding()+total21;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_22<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool25==true))
                                    {
                                        a_23=a2.input_Total_amount_after_adding()+total22;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_23<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool26==true))
                                    {
                                        a_24=a2.input_Total_amount_after_adding()+total23;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_24<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool27==true))
                                    {
                                        a_25=a2.input_Total_amount_after_adding()+total24;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_25<<"\n";
                                    }
                                    
                                    else if ((bool2==true)&&(bool28==true))
                                    {
                                        a_26=a2.input_Total_amount_after_adding()+total25;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_26<<"\n";
                                    }
                                    else if ((bool2==true)&&(bool29==true))
                                    {
                                        a_27=a2.input_Total_amount_after_adding()+total26;
                                        cout<<"\nTotal amount after adding bill of book ="<<a_27<<"\n";
                                    }
                                    else if (bool1==true)
                                    {
                                        a_30=a2.Input_requested_money();
                                        cout<<"\nHow much money you want to expected from me ? : ";
                                        cin>>a_30;
                                        a_29=a2.input_Total_amount_after_adding()-a_30;
                                        cout<<"Total amount after selling books ="<<a_29<<"\n";
                                    }
                                }
                                    break;
                                default:
                                    cout<<"\ninvalid choice Please,try again!!!";
                                    break;
                            }//end of inner switch of case 3
                        
                    }//end of inner if statement
                    else
                        cout<<"\n❌ ERROR : Inncorrect password or E-mail address"<<"\n"<<"Please,try again!!!"<<"\n";
                   
                
                }//end of else statement
                
            }//end of case 3
                break;
            case 4:
            {
                int isfound=0;
                stu s1[index];
                stu s2;
                for (int i=0; i<index; i++)
                {
                    if (first[i]== string() || second[i] == string() || third[i]==string())
                    {
                        cout<<"\nPlease,Create account first!!!\n";
                        break;
                    }//end of if
                    else
                    {
                        isfound=1;
                       // log1[i]=s1[i].input_name_stu();
                        cout<<"_______________________________________________________________________________________";
                        cout<<"\n                                  Login details                                    \n";
                        cout<<"---------------------------------------------------------------------------------------";
                        log2[i]=s1[i].input_E_mail_stu();
                        log3[i]=s[i].input_password_stu();
                    }//end of else
                    if (second[i]==log2[i] && third[i]==log3[i])
                    {
                        
                        cout<<"\n                              ✅Login successfully!!!                            \n";
                        int choice3;
                            cout<<"\n1) For buy books from library";
                            cout<<"\n2) For return books to the library";
                            cout<<"\nPlease,enter your choice : ";
                            cin>>choice3;
                            
                            switch(choice3)
                            {
                                    
                                case 1:
                                {
                                    
                                    bool2=true;
                                    stu s3;
                                    tp= s3.input_type_of_book_stu();
                                    int tp2=0;
                                    B b1;
                                    P p1;
                                    string tp3 = b1.type_of_books;
                                    string tp4 = b1.type_of_books1;
                                    string tp5 =b1.type_of_books2;
                                    string tp6 = b1.type_of_books3;
                                    string tp7 = b1.type_of_books4;
                                    
                                        if(tp3==tp || tp4==tp || tp5==tp || tp6==tp || tp7==tp)
                                        {
                                            cout<<"\n✅ This type of books are available yet\n";
                                            int index3;
                                           // for(int i=0;i<index; i++)
                                            //{
                                                
                                                    if (g[i]=="female" || g[i]=="FEMALE" ||g[i]=="Female")
                                                    {
                                                        fflush(stdin);
                                                        cout<<"\nMiss "<<first[i]<<" How many books do you want to have ? : ";
                                                        fflush(stdin);
                                                       
                                                    }
                                                    if(g[i]=="male" || g[i]=="MALE" || g[i]=="Male")
                                                    {
                                                        fflush(stdin);
                                                        cout<<"\nMr "<<first[i]<<" How many books do you want to have ? : ";
                                                        fflush(stdin);
                                                    }
                                            //}
                                            
                                            cin>>index3;
                                            stu s4[index3];
                                            string tp1[index3];
                                            float mul1,mul2,mul3,mul4,mul5,mul6,mul7,mul8,mul9,mul10,mul11,mul12,mul13,mul14,mul15,mul16,mul17,mul18,mul19,mul20,mul21,mul22,mul23,mul24,mul25,mul26;
                                            for (int i=0; i<index3;i++)
                                            {
                                               tp1[i]=s4[i].input_required_book_stu();
                                            }//end of for loop
                                            for (int i=0; i<index3; i++)
                                            {
                                                if (tp1[i]==b_1)
                                                {
                                                    bool3=true;
                                                    tp2 = s3.input_quantity_of_book_stu();
                                                    pr1 = p1.prize1;
                                                        
                                                cout<<"_________________________________________________";
                                                cout<<"\n                  billing Address          \n";
                                                cout<<"-------------------------------------------------";
                                                fflush(stdin);
                                                cout<<"\nEnter your Delivary address : ";
                                                getline(cin, Address);
                                                fflush(stdin);
                                                cout<<"\nEnter pin code of your area : ";
                                                cin>>pincode;
                                                cout<<"_______________________________________________________";
                                                cout<<"\n                  Payment method           \n";
                                                cout<<"-------------------------------------------------------";
                                                int choice6;
                                                cout<<"\n1) Pay by using cradit card";
                                                cout<<"\n2) Pay by using debit card";
                                                cout<<"\n3) Pay by using UPI";
                                                cout<<"\n4) Cash on delivary";
                                                cout<<"\n5) Pay by using Amazon card";
                                                cout<<"\nPlease,enter your choice : ";
                                                cin>>choice6;
                                                switch (choice6)
                                                {
                                                    case 1:
                                                    {
                                                        cout<<"\nRate per product ="<<pr1<<" $"<<"\n";
                                                        mul1=(tp2*pr1);
                                                        cout<<"\nRate = "<<mul1<<" $"<<"\n";
                                                        float gst= (mul1*5)/100;
                                                        cout<<"\nGST Amount ="<<gst<<" $"<<"\n";
                                                        total=mul1+gst;
                                                        cout<<"\nBill with gst "<<total<<" $"<<"\n";
                                                        cout<<"____________________________________________________________________________________";
                                                        cout<<"\n                                Card details                                    \n";
                                                        cout<<"------------------------------------------------------------------------------------";
                                                        fflush(stdin);
                                                        cout<<"\n1)CARD HOLDER NAME: ";
                                                        getline(cin, card_holder_name);
                                                        fflush(stdin);
                                                        cout<<"\n2) CARD NUMBER : ";
                                                        cin>>Card_number;
                                                        cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                        cin>>year;
                                                        cout<<"\nENTER A MONTH OF EXPIRY :";
                                                        cin>>month;
                                                        cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                        cout<<"\nCVV = ";
                                                        cin>>cvv;
                                                        cout<<"\nEnter your PIN = ";
                                                        cin>>PIN;
                                                        
                                                        cout<<"\n✅Payment suceessfully!!!";
                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                    }
                                                        break;
                                                    case 2:
                                                    {
                                                        
                                                        cout<<"\nRate per product ="<<pr1<<" $"<<"\n";
                                                        mul1=(tp2*pr1);
                                                        cout<<"\nRate = "<<mul1<<" $"<<"\n";
                                                        float gst= (mul1*5)/100;
                                                        cout<<"\nGST Amount ="<<gst<<" $"<<"\n";
                                                        total=mul1+gst;
                                                        cout<<"\nBill with gst "<<total<<" $"<<"\n";
                                                        cout<<"____________________________________________________________________________________";
                                                        cout<<"\n                                Card details                                    \n";
                                                        cout<<"------------------------------------------------------------------------------------";
                                                        fflush(stdin);
                                                        cout<<"\n1)CARD HOLDER NAME: ";
                                                        getline(cin, card_holder_name);
                                                        fflush(stdin);
                                                        cout<<"\n2) CARD NUMBER : ";
                                                        cin>>Card_number;
                                                        cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                        cin>>year;
                                                        cout<<"\nENTER A MONTH OF EXPIRY :";
                                                        cin>>month;
                                                        cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                        cout<<"\nCVV = ";
                                                        cin>>cvv;
                                                        cout<<"\nEnter your PIN = ";
                                                        cin>>PIN;
                                                        
                                                        cout<<"\n✅Payment suceessfully!!!";
                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                    }
                                                        break;
                                                    case 3:
                                                    {
                                                        int choice7;
                                                        cout<<"\n1) Pay using google pay ";
                                                        cout<<"\n2) Pay using paytm";
                                                        cout<<"\n3) pay using phonePay ";
                                                        cout<<"\nPlease,enter your choice : ";
                                                        cin>>choice7;
                                                        if(balance2==0)
                                                        {
                                                            cout<<"\n❌  ERROR : ";
                                                            cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                        }
                                                        else
                                                        {
                                                            switch (choice7)
                                                            {
                                                                case 1:
                                                                {
                                                                    stu s;
                                                                    s.input_name_stu();
                                                                    s.input_phone_number();
                                                                    s.input_pin();
                                                                    
                                                                    if(name1==s.input_name_stu() && phone_number1==s.input_phone_number() && PIN2==s.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr1<<" $"<<"\n";
                                                                        mul1=(tp2*pr1);
                                                                        cout<<"\nRate = "<<mul1<<" $"<<"\n";
                                                                        float gst= (mul1*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst<<" $"<<"\n";
                                                                        total=mul1+gst;
                                                                        cout<<"\nBill with gst "<<total<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ? : ";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            
                                                                            balance3 = balance2;
                                                                            Remaining_balance1=balance2-total;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        } //end of if
                                                                        
                                                                    } //end of outer if
                                                                    
                                                                    
                                                                }
                                                                    break;
                                                                case 2:
                                                                {
                                                                    stu s1;
                                                                    s1.input_name_stu();
                                                                    s1.input_phone_number();
                                                                    s1.input_pin();
                                                                    if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr1<<" $"<<"\n";
                                                                        mul1=(tp2*pr1);
                                                                        cout<<"\nRate = "<<mul1<<" $"<<"\n";
                                                                        float gst= (mul1*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst<<" $"<<"\n";
                                                                        total=mul1+gst;
                                                                        cout<<"\nBill with gst "<<total<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ? : ";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            
                                                                            balance3 = balance2;
                                                                            Remaining_balance1=balance3-total;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }//end of if
                                                                        
                                                                    }//end of outer if
                                                                    
                                                                    
                                                                 
                                                                }
                                                                    break;
                                                                case 3:
                                                                {
                                                                    stu s2;
                                                                    s2.input_name_stu();
                                                                    s2.input_phone_number();
                                                                    s2.input_pin();
                                                                    if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr1<<" $"<<"\n";
                                                                        mul1=(tp2*pr1);
                                                                        cout<<"\nRate = "<<mul1<<" $"<<"\n";
                                                                        float gst= (mul1*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst<<" $"<<"\n";
                                                                        total=mul1+gst;
                                                                        cout<<"\nBill with gst "<<total<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ? : ";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            
                                                                            balance3 = balance2;
                                                                            Remaining_balance1=balance3-total;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }//end of if
                                                                        
                                                                    }//end of outer if
                                                                    
                                                                    
                                                                }
                                                                    break;
                                                            }//end switch
                                                        }//end of else
                                                        
                                                    }//end of case 3
                                                            break;
                                                        case 4:
                                                        {
                                                            cout<<"\nRate per product ="<<pr1<<" $"<<"\n";
                                                            mul1=(tp2*pr1);
                                                            cout<<"\nRate = "<<mul1<<" $"<<"\n";
                                                            float gst= (mul1*5)/100;
                                                            cout<<"\nGST Amount ="<<gst<<" $"<<"\n";
                                                            total=mul1+gst;
                                                            cout<<"\nBill with gst "<<total<<" $"<<"\n";
                                                            fflush(stdin);
                                                            cout<<"\nCan you Placed your order ? : ";
                                                            getline(cin, boolean4);
                                                            fflush(stdin);
                                                            if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                            {
                                                                cout<<"\n✅ your order is successfully placed!!!";
                                                                cout<<"\nThank you for shopping!!!\n";
                                                            }
                                                            
                                                        }
                                                            break;
                                                    case 5:
                                                    {
                                                        if(balance1==0)
                                                        {
                                                            cout<<"\n❌ ERROR :  ";
                                                            cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                        }
                                                        else
                                                        {
                                                            stu s3;
                                                            s3.input_name_stu();
                                                            s3.input_pin();
                                                            if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                            {
                                                                cout<<"\nRate per product ="<<pr1<<" $"<<"\n";
                                                                mul1=(tp2*pr1);
                                                                cout<<"\nRate = "<<mul1<<" $"<<"\n";
                                                                float gst= (mul1*5)/100;
                                                                cout<<"\nGST Amount ="<<gst<<" $"<<"\n";
                                                                total=mul1+gst;
                                                                cout<<"\nBill with gst "<<total<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"Can you Place your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    
                                                                    balance = balance1;
                                                                    Remaining_balance=balance-total;
                                                                    cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
                                                                    cout<<"\n✅Payment suceessfully!!!";
                                                                    cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                }//end of if
                                                            }//end of outer if
                                                        }
                                                        
                                                    }
                                                        break;
                                                   }
                                                }
                                                else if(tp1[i]==b_2){
                                                    bool4=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr2=p1.prize2;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                            cout<<"\nRate per product ="<<pr2<<" $"<<"\n";
                                                            mul2=(tp2*pr2);
                                                            cout<<"\nRate = "<<mul2<<" $"<<"\n";
                                                            float gst1= (mul2*5)/100;
                                                            cout<<"\nGST Amount ="<<gst1<<" $"<<"\n";
                                                            total1=mul2+gst1;
                                                            cout<<"\nBill with gst "<<total1<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                            
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr2<<" $"<<"\n";
                                                            mul2=(tp2*pr2);
                                                            cout<<"\nRate = "<<mul2<<" $"<<"\n";
                                                            float gst1= (mul2*5)/100;
                                                            cout<<"\nGST Amount ="<<gst1<<" $"<<"\n";
                                                            total1=mul2+gst1;
                                                            cout<<"\nBill with gst "<<total1<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                           
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if(balance2==0)
                                                            {
                                                                    cout<<"\n❌  ERROR : ";
                                                                    cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() && PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr2<<" $"<<"\n";
                                                                            mul2=(tp2*pr2);
                                                                            cout<<"\nRate = "<<mul2<<" $"<<"\n";
                                                                            float gst1= (mul2*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst1<<" $"<<"\n";
                                                                            total1=mul2+gst1;
                                                                            cout<<"\nBill with gst "<<total1<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ? : ";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total1;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of if
                                                                        }//end of outer if
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() && PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr2<<" $"<<"\n";
                                                                            mul2=(tp2*pr2);
                                                                            cout<<"\nRate = "<<mul2<<" $"<<"\n";
                                                                            float gst1= (mul2*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst1<<" $"<<"\n";
                                                                            total1=mul2+gst1;
                                                                            cout<<"\nBill with gst "<<total1<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ? : ";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total1;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of if
                                                                        }//end of outer if
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s3.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() && PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr2<<" $"<<"\n";
                                                                            mul2=(tp2*pr2);
                                                                            cout<<"\nRate = "<<mul2<<" $"<<"\n";
                                                                            float gst1= (mul2*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst1<<" $"<<"\n";
                                                                            total1=mul2+gst1;
                                                                            cout<<"\nBill with gst "<<total1<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ? : ";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total1;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of if
                                                                        }//end of outer if
                                                                    }
                                                                        break;
                                                                }
                                                            }
                                                            
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr2<<" $"<<"\n";
                                                                mul2=(tp2*pr2);
                                                                cout<<"\nRate = "<<mul2<<" $"<<"\n";
                                                                float gst1= (mul2*5)/100;
                                                                cout<<"\nGST Amount ="<<gst1<<" $"<<"\n";
                                                                total1=mul2+gst1;
                                                                cout<<"\nBill with gst "<<total1<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if(balance1==0)
                                                            {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr2<<" $"<<"\n";
                                                                    mul2=(tp2*pr2);
                                                                    cout<<"\nRate = "<<mul2<<" $"<<"\n";
                                                                    float gst1=(mul2*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst1<<" $"<<"\n";
                                                                    total1=mul2+gst1;
                                                                    cout<<"\nBill with gst "<<total1<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total1;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
    
                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }//end of if
                                                            }
                                                            
                                                        }
                                                            break;
                                                        }
                                                     }
                                                else if (tp1[i]==b_3)
                                                {
                                                    bool5=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr3=p1.prize3;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                            cout<<"\nRate per product ="<<pr3<<" $"<<"\n";
                                                            mul3=(tp2*pr3);
                                                            cout<<"\nRate = "<<mul3<<" $"<<"\n";
                                                            float gst2=(mul3*5)/100;
                                                            cout<<"\nGST Amount ="<<gst2<<" $"<<"\n";
                                                            total2=mul3+gst2;
                                                            cout<<"\nBill after gst ="<<total2<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                            
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr3<<" $"<<"\n";
                                                            mul3=(tp2*pr3);
                                                            cout<<"\nRate = "<<mul3<<" $"<<"\n";
                                                            float gst2=(mul3*5)/100;
                                                            cout<<"\nGST Amount ="<<gst2<<" $"<<"\n";
                                                            total2=mul3+gst2;
                                                            cout<<"\nBill after gst ="<<total2<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                            
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                        cout<<"\n❌  ERROR : ";
                                                                        cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() && phone_number1==s.input_phone_number() && PIN2==s.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr3<<" $"<<"\n";
                                                                            mul3=(tp2*pr3);
                                                                            cout<<"\nRate = "<<mul3<<" $"<<"\n";
                                                                            float gst2=(mul3*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst2<<" $"<<"\n";
                                                                            total2=mul3+gst2;
                                                                            cout<<"\nBill after gst ="<<total2<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total2;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of if
                                                                        }//end of outer if
                                                                        
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() && phone_number1==s1.input_phone_number() && PIN2==s1.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr3<<" $"<<"\n";
                                                                            mul3=(tp2*pr3);
                                                                            cout<<"\nRate = "<<mul3<<" $"<<"\n";
                                                                            float gst2=(mul3*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst2<<" $"<<"\n";
                                                                            total2=mul3+gst2;
                                                                            cout<<"\nBill after gst ="<<total2<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total2;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of if
                                                                        }//end of outer if
                                                                        
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() && phone_number1==s2.input_phone_number() && PIN2==s2.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr3<<" $"<<"\n";
                                                                            mul3=(tp2*pr3);
                                                                            cout<<"\nRate = "<<mul3<<" $"<<"\n";
                                                                            float gst2=(mul3*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst2<<" $"<<"\n";
                                                                            total2=mul3+gst2;
                                                                            cout<<"\nBill after gst ="<<total2<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total2;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of if
                                                                        }//end of outer if
                                                                        
                                                                    }
                                                                        break;
                                                                }
                                                            }
                                                            
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr3<<" $"<<"\n";
                                                                mul3=(tp2*pr3);
                                                                cout<<"\nRate = "<<mul3<<" $"<<"\n";
                                                                float gst2=(mul3*5)/100;
                                                                cout<<"\nGST Amount ="<<gst2<<" $"<<"\n";
                                                                total2=mul3+gst2;
                                                                cout<<"\nBill after gst ="<<total2<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if(balance1==0)
                                                            {
                                                                        cout<<"\n❌ ERROR :  ";
                                                                        cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    
                                                                    cout<<"\nRate per product ="<<pr3<<" $"<<"\n";
                                                                    mul3=(tp2*pr3);
                                                                    cout<<"\nRate = "<<mul3<<" $"<<"\n";
                                                                    float gst2=(mul3*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst2<<" $"<<"\n";
                                                                    total2=mul3+gst2;
                                                                    cout<<"\nBill after gst ="<<total2<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                        
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total2;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
    
                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                                
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_4)
                                                {
                                                    bool6=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr4=p1.prize4;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                            cout<<"\nRate peer product ="<<pr4<<" $"<<"\n";
                                                            mul4=(tp2*pr4);
                                                            cout<<"\nRate = "<<mul4<<" $"<<"\n";
                                                            float gst3=(mul4*5)/100;
                                                            cout<<"\nGST Amount = "<<gst3<<" $"<<"\n";
                                                            total3=mul4+gst3;
                                                            fflush(stdin);
                                                            cout<<"\nBill after gst ="<<total3<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                            cout<<"\nRate peer product ="<<pr4<<" $"<<"\n";
                                                            mul4=(tp2*pr4);
                                                            cout<<"\nRate = "<<mul4<<" $"<<"\n";
                                                            float gst3=(mul4*5)/100;
                                                            cout<<"\nGST Amount = "<<gst3<<" $"<<"\n";
                                                            total3=mul4+gst3;
                                                            fflush(stdin);
                                                            cout<<"\nBill after gst ="<<total3<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if(balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                    
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() && phone_number1==s.input_phone_number() && PIN2==s.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate peer product ="<<pr4<<" $"<<"\n";
                                                                            mul4=(tp2*pr4);
                                                                            cout<<"\nRate = "<<mul4<<" $"<<"\n";
                                                                            float gst3=(mul4*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst3<<" $"<<"\n";
                                                                            total3=mul4+gst3;
                                                                            fflush(stdin);
                                                                            cout<<"\nBill after gst ="<<total3<<" $"<<"\n";
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total3;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of inner if
                                                                        }//end of outer if
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() && phone_number1==s1.input_phone_number() && PIN2==s1.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate peer product ="<<pr4<<" $"<<"\n";
                                                                            mul4=(tp2*pr4);
                                                                            cout<<"\nRate = "<<mul4<<" $"<<"\n";
                                                                            float gst3=(mul4*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst3<<" $"<<"\n";
                                                                            total3=mul4+gst3;
                                                                            cout<<"\nBill after gst ="<<total3<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total3;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of inner if
                                                                            
                                                                        }//end of outer if
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() && phone_number1==s2.input_phone_number() && PIN2==s2.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate peer product ="<<pr4<<" $"<<"\n";
                                                                            mul4=(tp2*pr4);
                                                                            cout<<"\nRate = "<<mul4<<" $"<<"\n";
                                                                            float gst3=(mul4*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst3<<" $"<<"\n";
                                                                            total3=mul4+gst3;
                                                                            cout<<"\nBill after gst ="<<total3<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total3;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }//end of inner if
                                                                        }//end of outer if
                                                                    }
                                                                        break;
                                                                }
                                                           
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate peer product ="<<pr4<<" $"<<"\n";
                                                                mul4=(tp2*pr4);
                                                                cout<<"\nRate = "<<mul4<<" $"<<"\n";
                                                                float gst3=(mul4*5)/100;
                                                                cout<<"\nGST Amount = "<<gst3<<" $"<<"\n";
                                                                total3=mul4+gst3;
                                                                cout<<"\nBill after gst ="<<total3<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                
                                                                        cout<<"\n❌ ERROR :  ";
                                                                        cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    
                                                                    cout<<"\nRate peer product ="<<pr4<<" $"<<"\n";
                                                                    mul4=(tp2*pr4);
                                                                    cout<<"\nRate = "<<mul4<<" $"<<"\n";
                                                                    float gst3=(mul4*5)/100;
                                                                    cout<<"\nGST Amount = "<<gst3<<" $"<<"\n";
                                                                    total3=mul4+gst3;
                                                                    cout<<"\nBill after gst ="<<total3<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total3;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
    
                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }//end of inner if
                                                                }//end of outer if
                                                            }
                                                                
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_5)
                                                {
                                                    bool7=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr5=p1.prize5;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            cout<<"\\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            break;
                                                        case 2:
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            cout<<"\\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            break;
                                                        case 3:
                                                        {
                                                            
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                    
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() && phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nAmount per product ="<<pr5<<" $"<<"\n";
                                                                            mul5=(tp2*pr5);
                                                                            cout<<"\nRate ="<<mul5<<" $"<<"\n";
                                                                            float gst4=(mul5*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst4<<" $"<<"\n";
                                                                            total4=mul5+gst4;
                                                                            cout<<"\nBill after gst ="<<total4<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total4;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() && phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nAmount per product ="<<pr5<<" $"<<"\n";
                                                                            mul5=(tp2*pr5);
                                                                            cout<<"\nRate ="<<mul5<<" $"<<"\n";
                                                                            float gst4=(mul5*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst4<<" $"<<"\n";
                                                                            total4=mul5+gst4;
                                                                            cout<<"\nBill after gst ="<<total4<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total4;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() && phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nAmount per product ="<<pr5<<" $"<<"\n";
                                                                            mul5=(tp2*pr5);
                                                                            cout<<"\nRate ="<<mul5<<" $"<<"\n";
                                                                            float gst4=(mul5*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst4<<" $"<<"\n";
                                                                            total4=mul5+gst4;
                                                                            cout<<"\nBill after gst ="<<total4<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total4;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                }
                                                        
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nAmount per product ="<<pr5<<" $"<<"\n";
                                                                mul5=(tp2*pr5);
                                                                cout<<"\nRate ="<<mul5<<" $"<<"\n";
                                                                float gst4=(mul5*5)/100;
                                                                cout<<"\nGST Amount = "<<gst4<<" $"<<"\n";
                                                                total4=mul5+gst4;
                                                                cout<<"\nBill after gst ="<<total4<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    
                                                                    cout<<"\nAmount per product ="<<pr5<<" $"<<"\n";
                                                                    mul5=(tp2*pr5);
                                                                    cout<<"\nRate ="<<mul5<<" $"<<"\n";
                                                                    float gst4=(mul5*5)/100;
                                                                    cout<<"\nGST Amount = "<<gst4<<" $"<<"\n";
                                                                    total4=mul5+gst4;
                                                                    cout<<"\nBill after gst ="<<total4<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total4;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
    
                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                            
                                                                
                                                        }
                                                            break;
                                                            
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_6)
                                                {
                                                    bool8=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr6=p1.prize6;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr6<<" $"<<"\n";
                                                                mul6=(tp2*pr6);
                                                                cout<<"\nRate = "<<mul6<<" $"<<"\n";
                                                                float gst5=(mul6*5)/100;
                                                                total5=mul6+gst5;
                                                                cout<<"\nBill after gst ="<<total5<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr6<<" $"<<"\n";
                                                            mul6=(tp2*pr6);
                                                            cout<<"\nRate = "<<mul6<<" $"<<"\n";
                                                            float gst5=(mul6*5)/100;
                                                            total5=mul6+gst5;
                                                            cout<<"\nBill after gst ="<<total5<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                    cout<<"\n❌  ERROR : ";
                                                                    cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr6<<" $"<<"\n";
                                                                            mul6=(tp2*pr6);
                                                                            cout<<"\nRate = "<<mul6<<" $"<<"\n";
                                                                            float gst5=(mul6*5)/100;
                                                                            total5=mul6+gst5;
                                                                            cout<<"\nBill after gst ="<<total5<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total5;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr6<<" $"<<"\n";
                                                                            mul6=(tp2*pr6);
                                                                            cout<<"\nRate = "<<mul6<<" $"<<"\n";
                                                                            float gst5=(mul6*5)/100;
                                                                            total5=mul6+gst5;
                                                                            cout<<"\nBill after gst ="<<total5<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total5;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr6<<" $"<<"\n";
                                                                            mul6=(tp2*pr6);
                                                                            cout<<"\nRate = "<<mul6<<" $"<<"\n";
                                                                            float gst5=(mul6*5)/100;
                                                                            total5=mul6+gst5;
                                                                            cout<<"\nBill after gst ="<<total5<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total5;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                cout<<"\nRate per product ="<<pr6<<" $"<<"\n";
                                                                mul6=(tp2*pr6);
                                                                cout<<"\nRate = "<<mul6<<" $"<<"\n";
                                                                float gst5=(mul6*5)/100;
                                                                total5=mul6+gst5;
                                                                cout<<"\nBill after gst ="<<total5<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                        
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr6<<" $"<<"\n";
                                                                    mul6=(tp2*pr6);
                                                                    cout<<"\nRate = "<<mul6<<" $"<<"\n";
                                                                    float gst5=(mul6*5)/100;
                                                                    total5=mul6+gst5;
                                                                    cout<<"\nBill after gst ="<<total5<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total5;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
    
                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                                
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_7){
                                                    bool9=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr7=p1.prize7;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                            cout<<"\nRate per product ="<<pr7<<" $"<<"\n";
                                                            mul7=(pr7*tp2);
                                                            cout<<"nRate ="<<mul7<<" $"<<"\n";
                                                            float gst6=(mul7*5)/100;
                                                            cout<<"\nGST Amount ="<<gst6<<" $"<<"\n";
                                                            total6=mul7+gst6;
                                                            cout<<"\nBill after gst ="<<total6<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr7<<" $"<<"\n";
                                                            mul7=(pr7*tp2);
                                                            cout<<"nRate ="<<mul7<<" $"<<"\n";
                                                            float gst6=(mul7*5)/100;
                                                            cout<<"\nGST Amount ="<<gst6<<" $"<<"\n";
                                                            total6=mul7+gst6;
                                                            cout<<"\nBill after gst ="<<total6<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() && phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr7<<" $"<<"\n";
                                                                            mul7=(pr7*tp2);
                                                                            cout<<"nRate ="<<mul7<<" $"<<"\n";
                                                                            float gst6=(mul7*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst6<<" $"<<"\n";
                                                                            total6=mul7+gst6;
                                                                            cout<<"\nBill after gst ="<<total6<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total6;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() && phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr7<<" $"<<"\n";
                                                                            mul7=(pr7*tp2);
                                                                            cout<<"nRate ="<<mul7<<" $"<<"\n";
                                                                            float gst6=(mul7*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst6<<" $"<<"\n";
                                                                            total6=mul7+gst6;
                                                                            cout<<"\nBill after gst ="<<total6<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total6;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() && phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr7<<" $"<<"\n";
                                                                            mul7=(pr7*tp2);
                                                                            cout<<"nRate ="<<mul7<<" $"<<"\n";
                                                                            float gst6=(mul7*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst6<<" $"<<"\n";
                                                                            total6=mul7+gst6;
                                                                            cout<<"\nBill after gst ="<<total6<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total6;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                            
                                                                cout<<"\nRate per product ="<<pr7<<" $"<<"\n";
                                                                mul7=(pr7*tp2);
                                                                cout<<"nRate ="<<mul7<<" $"<<"\n";
                                                                float gst6=(mul7*5)/100;
                                                                cout<<"\nGST Amount ="<<gst6<<" $"<<"\n";
                                                                total6=mul7+gst6;
                                                                cout<<"\nBill after gst ="<<total6<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr7<<" $"<<"\n";
                                                                    mul7=(pr7*tp2);
                                                                    cout<<"nRate ="<<mul7<<" $"<<"\n";
                                                                    float gst6=(mul7*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst6<<" $"<<"\n";
                                                                    total6=mul7+gst6;
                                                                    cout<<"\nBill after gst ="<<total6<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total6;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if(tp1[i]==b_8){
                                                    bool10=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr8=p1.prize8;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr8<<" $"<<"\n";
                                                                mul8=(pr8*tp2);
                                                                cout<<"\nRate ="<<mul8<<" $"<<"\n";
                                                                float gst7=(mul8*5)/100;
                                                                cout<<"\nGST Amount ="<<gst7<<" $"<<"\n";
                                                                total7=mul8+gst7;
                                                                cout<<"\nBill after gst ="<<total7<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr8<<" $"<<"\n";
                                                                mul8=(pr8*tp2);
                                                                cout<<"\nRate ="<<mul8<<" $"<<"\n";
                                                                float gst7=(mul8*5)/100;
                                                                cout<<"\nGST Amount ="<<gst7<<" $"<<"\n";
                                                                total7=mul8+gst7;
                                                                cout<<"\nBill after gst ="<<total7<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr8<<" $"<<"\n";
                                                                            mul8=(pr8*tp2);
                                                                            cout<<"\nRate ="<<mul8<<" $"<<"\n";
                                                                            float gst7=(mul8*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst7<<" $"<<"\n";
                                                                            total7=mul8+gst7;
                                                                            cout<<"\nBill after gst ="<<total7<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total7;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                        
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr8<<" $"<<"\n";
                                                                            mul8=(pr8*tp2);
                                                                            cout<<"\nRate ="<<mul8<<" $"<<"\n";
                                                                            float gst7=(mul8*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst7<<" $"<<"\n";
                                                                            total7=mul8+gst7;
                                                                            cout<<"\nBill after gst ="<<total7<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total7;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr8<<" $"<<"\n";
                                                                            mul8=(pr8*tp2);
                                                                            cout<<"\nRate ="<<mul8<<" $"<<"\n";
                                                                            float gst7=(mul8*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst7<<" $"<<"\n";
                                                                            total7=mul8+gst7;
                                                                            cout<<"\nBill after gst ="<<total7<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total7;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                
                                                                    }//end of case 3
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                    cout<<"\nRate per product ="<<pr8<<" $"<<"\n";
                                                                    mul8=(pr8*tp2);
                                                                    cout<<"\nRate ="<<mul8<<" $"<<"\n";
                                                                    float gst7=(mul8*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst7<<" $"<<"\n";
                                                                    total7=mul8+gst7;
                                                                    cout<<"\nBill after gst ="<<total7<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"\nCan you Placed your order ? : ";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        cout<<"\n✅ your order is successfully placed!!!";
                                                                        cout<<"\nThank you for shopping!!!\n";
                                                                    }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr8<<" $"<<"\n";
                                                                    mul8=(pr8*tp2);
                                                                    cout<<"\nRate ="<<mul8<<" $"<<"\n";
                                                                    float gst7=(mul8*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst7<<" $"<<"\n";
                                                                    total7=mul8+gst7;
                                                                    cout<<"\nBill after gst ="<<total7<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total7;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
        
                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                            
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_9){
                                                    bool11=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr9=p1.prize9;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr9<<" $"<<"\n";
                                                                mul9=pr9*tp2;
                                                                cout<<"\nRate ="<<mul9<<" $"<<"\n";
                                                                float gst8=(mul9*5)/100;
                                                                cout<<"\nGST Amount ="<<gst8<<" $"<<"\n";
                                                                total8=mul9+gst8;
                                                                cout<<"\nBill after gst ="<<total8<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr9<<" $"<<"\n";
                                                            mul9=pr9*tp2;
                                                            cout<<"\nRate ="<<mul9<<" $"<<"\n";
                                                            float gst8=(mul9*5)/100;
                                                            cout<<"\nGST Amount ="<<gst8<<" $"<<"\n";
                                                            total8=mul9+gst8;
                                                            cout<<"\nBill after gst ="<<total8<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() && PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr9<<" $"<<"\n";
                                                                            mul9=pr9*tp2;
                                                                            cout<<"\nRate ="<<mul9<<" $"<<"\n";
                                                                            float gst8=(mul9*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst8<<" $"<<"\n";
                                                                            total8=mul9+gst8;
                                                                            cout<<"\nBill after gst ="<<total8<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total8;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() && PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr9<<" $"<<"\n";
                                                                            mul9=pr9*tp2;
                                                                            cout<<"\nRate ="<<mul9<<" $"<<"\n";
                                                                            float gst8=(mul9*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst8<<" $"<<"\n";
                                                                            total8=mul9+gst8;
                                                                            cout<<"\nBill after gst ="<<total8<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total8;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() && PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr9<<" $"<<"\n";
                                                                            mul9=pr9*tp2;
                                                                            cout<<"\nRate ="<<mul9<<" $"<<"\n";
                                                                            float gst8=(mul9*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst8<<" $"<<"\n";
                                                                            total8=mul9+gst8;
                                                                            cout<<"\nBill after gst ="<<total8<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total8;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                cout<<"\nRate per product ="<<pr9<<" $"<<"\n";
                                                                mul9=pr9*tp2;
                                                                cout<<"\nRate ="<<mul9<<" $"<<"\n";
                                                                float gst8=(mul9*5)/100;
                                                                cout<<"\nGST Amount ="<<gst8<<" $"<<"\n";
                                                                total8=mul9+gst8;
                                                                cout<<"\nBill after gst ="<<total8<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr9<<" $"<<"\n";
                                                                        mul9=pr9*tp2;
                                                                        cout<<"\nRate ="<<mul9<<" $"<<"\n";
                                                                        float gst8=(mul9*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst8<<" $"<<"\n";
                                                                        total8=mul9+gst8;
                                                                        cout<<"\nBill after gst ="<<total8<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total8;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
        
                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                            }
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_10){
                                                    bool12=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr10=p1.prize10;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            cout<<"\nRate per product ="<<pr10<<" $"<<"\n";
                                                            mul10=pr10*tp2;
                                                            cout<<"\nRate ="<<mul10<<" $"<<"\n";
                                                            float gst9=(mul10*5)/100;
                                                            cout<<"\nGST Amount ="<<gst9<<" $"<<"\n";
                                                            total9=mul10+gst9;
                                                            cout<<"\nBill after gst ="<<total9<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                            
                                                            
                                                            
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr10<<" $"<<"\n";
                                                            mul10=pr10*tp2;
                                                            cout<<"\nRate ="<<mul10<<" $"<<"\n";
                                                            float gst9=(mul10*5)/100;
                                                            cout<<"\nGST Amount ="<<gst9<<" $"<<"\n";
                                                            total9=mul10+gst9;
                                                            cout<<"\nBill after gst ="<<total9<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                         
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr10<<" $"<<"\n";
                                                                            mul10=pr10*tp2;
                                                                            cout<<"\nRate ="<<mul10<<" $"<<"\n";
                                                                            float gst9=(mul10*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst9<<" $"<<"\n";
                                                                            total9=mul10+gst9;
                                                                            cout<<"\nBill after gst ="<<total9<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"\nCan you Place your order ? : ";
                                                                            getline(cin,boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total9;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr10<<" $"<<"\n";
                                                                            mul10=pr10*tp2;
                                                                            cout<<"\nRate ="<<mul10<<" $"<<"\n";
                                                                            float gst9=(mul10*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst9<<" $"<<"\n";
                                                                            total9=mul10+gst9;
                                                                            cout<<"\nBill after gst ="<<total9<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"\nCan you Place your order ? : ";
                                                                            getline(cin,boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total9;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr10<<" $"<<"\n";
                                                                            mul10=pr10*tp2;
                                                                            cout<<"\nRate ="<<mul10<<" $"<<"\n";
                                                                            float gst9=(mul10*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst9<<" $"<<"\n";
                                                                            total9=mul10+gst9;
                                                                            cout<<"\nBill after gst ="<<total9<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"\nCan you Place your order ? : ";
                                                                            getline(cin,boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total9;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                                 
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr10<<" $"<<"\n";
                                                                mul10=pr10*tp2;
                                                                cout<<"\nRate ="<<mul10<<" $"<<"\n";
                                                                float gst9=(mul10*5)/100;
                                                                cout<<"\nGST Amount ="<<gst9<<" $"<<"\n";
                                                                total9=mul10+gst9;
                                                                cout<<"\nBill after gst ="<<total9<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr10<<" $"<<"\n";
                                                                    mul10=pr10*tp2;
                                                                    cout<<"\nRate ="<<mul10<<" $"<<"\n";
                                                                    float gst9=(mul10*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst9<<" $"<<"\n";
                                                                    total9=mul10+gst9;
                                                                    cout<<"\nBill after gst ="<<total9<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"\nCan you Place your order ? : ";
                                                                    getline(cin,boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total9;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";
        
                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                                
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_11){
                                                    bool13=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr11=p1.prize11;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                            cout<<"\nRate per product ="<<pr11<<" $"<<"\n";
                                                            mul11=pr11*tp2;
                                                            cout<<"\nRate ="<<mul11<<" $"<<"\n";
                                                            float gst10=(mul11*5)/100;
                                                            cout<<"\nGST Amount ="<<gst10<<" $"<<"\n";
                                                            total10=gst10+mul11;
                                                            cout<<"\nBill after gst ="<<total10<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                           
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr11<<" $"<<"\n";
                                                            mul11=pr11*tp2;
                                                            cout<<"\nRate ="<<mul11<<" $"<<"\n";
                                                            float gst10=(mul11*5)/100;
                                                            cout<<"\nGST Amount ="<<gst10<<" $"<<"\n";
                                                            total10=gst10+mul11;
                                                            cout<<"\nBill after gst ="<<total10<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                       
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() && PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr11<<" $"<<"\n";
                                                                            mul11=pr11*tp2;
                                                                            cout<<"\nRate ="<<mul11<<" $"<<"\n";
                                                                            float gst10=(mul11*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst10<<" $"<<"\n";
                                                                            total10=gst10+mul11;
                                                                            cout<<"\nBill after gst ="<<total10<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total10;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() && PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr11<<" $"<<"\n";
                                                                            mul11=pr11*tp2;
                                                                            cout<<"\nRate ="<<mul11<<" $"<<"\n";
                                                                            float gst10=(mul11*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst10<<" $"<<"\n";
                                                                            total10=gst10+mul11;
                                                                            cout<<"\nBill after gst ="<<total10<<" $"<<"\n";
                                                                       
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total10;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() && PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr11<<" $"<<"\n";
                                                                            mul11=pr11*tp2;
                                                                            cout<<"\nRate ="<<mul11<<" $"<<"\n";
                                                                            float gst10=(mul11*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst10<<" $"<<"\n";
                                                                            total10=gst10+mul11;
                                                                            cout<<"\nBill after gst ="<<total10<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total10;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                               
                                                            }
                                                                break;
                                                            
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr11<<" $"<<"\n";
                                                                mul11=pr11*tp2;
                                                                cout<<"\nRate ="<<mul11<<" $"<<"\n";
                                                                float gst10=(mul11*5)/100;
                                                                cout<<"\nGST Amount ="<<gst10<<" $"<<"\n";
                                                                total10=gst10+mul11;
                                                                cout<<"\nBill after gst ="<<total10<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr11<<" $"<<"\n";
                                                                    mul11=pr11*tp2;
                                                                    cout<<"\nRate ="<<mul11<<" $"<<"\n";
                                                                    float gst10=(mul11*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst10<<" $"<<"\n";
                                                                    total10=gst10+mul11;
                                                                    cout<<"\nBill after gst ="<<total10<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total10;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                            }
                                                else if (tp1[i]==b_12){
                                                    bool14=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr12=p1.prize12;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                            cout<<"\nRate per product ="<<pr12<<" $"<<"\n";
                                                            mul12=pr12*tp2;
                                                            cout<<"\nRate ="<<mul12<<" $"<<"\n";
                                                            float gst11=(mul12*5)/100;
                                                            cout<<"\nGST Amount ="<<gst11<<" $"<<"\n";
                                                            total11=gst11+mul12;
                                                            cout<<"\nBill after gst ="<<total11<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr12<<" $"<<"\n";
                                                            mul12=pr12*tp2;
                                                            cout<<"\nRate ="<<mul12<<" $"<<"\n";
                                                            float gst11=(mul12*5)/100;
                                                            cout<<"\nGST Amount ="<<gst11<<" $"<<"\n";
                                                            total11=gst11+mul12;
                                                            cout<<"\nBill after gst ="<<total11<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if(balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr12<<" $"<<"\n";
                                                                            mul12=pr12*tp2;
                                                                            cout<<"\nRate ="<<mul12<<" $"<<"\n";
                                                                            float gst11=(mul12*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst11<<" $"<<"\n";
                                                                            total11=gst11+mul12;
                                                                            cout<<"\nBill after gst ="<<total11<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total11;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr12<<" $"<<"\n";
                                                                            mul12=pr12*tp2;
                                                                            cout<<"\nRate ="<<mul12<<" $"<<"\n";
                                                                            float gst11=(mul12*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst11<<" $"<<"\n";
                                                                            total11=gst11+mul12;
                                                                            cout<<"\nBill after gst ="<<total11<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total11;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr12<<" $"<<"\n";
                                                                            mul12=pr12*tp2;
                                                                            cout<<"\nRate ="<<mul12<<" $"<<"\n";
                                                                            float gst11=(mul12*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst11<<" $"<<"\n";
                                                                            total11=gst11+mul12;
                                                                            cout<<"\nBill after gst ="<<total11<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total11;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                cout<<"\nRate per product ="<<pr12<<" $"<<"\n";
                                                                mul12=pr12*tp2;
                                                                cout<<"\nRate ="<<mul12<<" $"<<"\n";
                                                                float gst11=(mul12*5)/100;
                                                                cout<<"\nGST Amount ="<<gst11<<" $"<<"\n";
                                                                total11=gst11+mul12;
                                                                cout<<"\nBill after gst ="<<total11<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr12<<" $"<<"\n";
                                                                    mul12=pr12*tp2;
                                                                    cout<<"\nRate ="<<mul12<<" $"<<"\n";
                                                                    float gst11=(mul12*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst11<<" $"<<"\n";
                                                                    total11=gst11+mul12;
                                                                    cout<<"\nBill after gst ="<<total11<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total11;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                        }
                                                            break;
                                                            
                                                        }
                                                    
                                                }
                                                else if(tp1[i]==b_13){
                                                    bool15=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr13=p1.prize13;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                            cout<<"\nRate per product ="<<pr13<<" $"<<"\n";
                                                            mul13=pr13*tp2;
                                                            cout<<"\nRate ="<<mul13<<" $"<<"\n";
                                                            float gst12=(mul13*5)/100;
                                                            cout<<"\nGST Amount ="<<gst12<<" $"<<"\n";
                                                            total12=gst12+mul13;
                                                            cout<<"\nBill after gst"<<total12<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr13<<" $"<<"\n";
                                                            mul13=pr13*tp2;
                                                            cout<<"\nRate ="<<mul13<<" $"<<"\n";
                                                            float gst12=(mul13*5)/100;
                                                            cout<<"\nGST Amount ="<<gst12<<" $"<<"\n";
                                                            total12=gst12+mul13;
                                                            cout<<"\nBill after gst"<<total12<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                            
                                                            
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if(balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() && PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr13<<" $"<<"\n";
                                                                            mul13=pr13*tp2;
                                                                            cout<<"\nRate ="<<mul13<<" $"<<"\n";
                                                                            float gst12=(mul13*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst12<<" $"<<"\n";
                                                                            total12=gst12+mul13;
                                                                            cout<<"\nBill after gst"<<total12<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total12;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() && PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr13<<" $"<<"\n";
                                                                            mul13=pr13*tp2;
                                                                            cout<<"\nRate ="<<mul13<<" $"<<"\n";
                                                                            float gst12=(mul13*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst12<<" $"<<"\n";
                                                                            total12=gst12+mul13;
                                                                            cout<<"\nBill after gst"<<total12<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total12;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() && PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr13<<" $"<<"\n";
                                                                            mul13=pr13*tp2;
                                                                            cout<<"\nRate ="<<mul13<<" $"<<"\n";
                                                                            float gst12=(mul13*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst12<<" $"<<"\n";
                                                                            total12=gst12+mul13;
                                                                            cout<<"\nBill after gst"<<total12<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total12;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr13<<" $"<<"\n";
                                                                mul13=pr13*tp2;
                                                                cout<<"\nRate ="<<mul13<<" $"<<"\n";
                                                                float gst12=(mul13*5)/100;
                                                                cout<<"\nGST Amount ="<<gst12<<" $"<<"\n";
                                                                total12=gst12+mul13;
                                                                cout<<"\nBill after gst"<<total12<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr13<<" $"<<"\n";
                                                                        mul13=pr13*tp2;
                                                                        cout<<"\nRate ="<<mul13<<" $"<<"\n";
                                                                        float gst12=(mul13*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst12<<" $"<<"\n";
                                                                        total12=gst12+mul13;
                                                                        cout<<"\nBill after gst"<<total12<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total12;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                            }
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_14)
                                                {
                                                    bool16=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr14=p1.prize14;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                                
                                                                cout<<"\nRate per product ="<<pr14<<" $"<<"\n";
                                                                mul14=tp2*pr14;
                                                                cout<<"\nRate ="<<mul14<<" $"<<"\n";
                                                                float gst13=(mul14*5)/100;
                                                                cout<<"\nGST Amount ="<<gst13<<" $"<<"\n";
                                                                total13=gst13+mul14;
                                                                cout<<"\nBill after gst ="<<total13<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                            cout<<"\nRate per product ="<<pr14<<" $"<<"\n";
                                                            mul14=tp2*pr14;
                                                            cout<<"\nRate ="<<mul14<<" $"<<"\n";
                                                            float gst13=(mul14*5)/100;
                                                            cout<<"\nGST Amount ="<<gst13<<" $"<<"\n";
                                                            total13=gst13+mul14;
                                                            cout<<"\nBill after gst ="<<total13<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() && phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr14<<" $"<<"\n";
                                                                            mul14=tp2*pr14;
                                                                            cout<<"\nRate ="<<mul14<<" $"<<"\n";
                                                                            float gst13=(mul14*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst13<<" $"<<"\n";
                                                                            total13=gst13+mul14;
                                                                            cout<<"\nBill after gst ="<<total13<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total13;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() && phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr14<<" $"<<"\n";
                                                                            mul14=tp2*pr14;
                                                                            cout<<"\nRate ="<<mul14<<" $"<<"\n";
                                                                            float gst13=(mul14*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst13<<" $"<<"\n";
                                                                            total13=gst13+mul14;
                                                                            cout<<"\nBill after gst ="<<total13<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total13;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() && phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr14<<" $"<<"\n";
                                                                            mul14=tp2*pr14;
                                                                            cout<<"\nRate ="<<mul14<<" $"<<"\n";
                                                                            float gst13=(mul14*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst13<<" $"<<"\n";
                                                                            total13=gst13+mul14;
                                                                            cout<<"\nBill after gst ="<<total13<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total13;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                               
                                                            }
                                                                 
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr14<<" $"<<"\n";
                                                                mul14=tp2*pr14;
                                                                cout<<"\nRate ="<<mul14<<" $"<<"\n";
                                                                float gst13=(mul14*5)/100;
                                                                cout<<"\nGST Amount ="<<gst13<<" $"<<"\n";
                                                                total13=gst13+mul14;
                                                                cout<<"\nBill after gst ="<<total13<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr14<<" $"<<"\n";
                                                                        mul14=tp2*pr14;
                                                                        cout<<"\nRate ="<<mul14<<" $"<<"\n";
                                                                        float gst13=(mul14*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst13<<" $"<<"\n";
                                                                        total13=gst13+mul14;
                                                                        cout<<"\nBill after gst ="<<total13<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            
                                                                                balance = balance1;
                                                                                Remaining_balance=balance-total13;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            
                                                                        }
                                                                    }

                                                            }
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_15)
                                                {
                                                    bool17=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr15=p1.prize15;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr15<<" $"<<"\n";
                                                                mul15=pr15*tp2;
                                                                cout<<"\nRate ="<<mul15<<" $"<<"\n";
                                                                float gst14=(mul15*5)/100;
                                                                cout<<"\nGST Amount ="<<gst14<<" $"<<"\n";
                                                                total14=gst14+mul15;
                                                                cout<<"\nBill after gst"<<total14<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr15<<" $"<<"\n";
                                                            mul15=pr15*tp2;
                                                            cout<<"\nRate ="<<mul15<<" $"<<"\n";
                                                            float gst14=(mul15*5)/100;
                                                            cout<<"\nGST Amount ="<<gst14<<" $"<<"\n";
                                                            total14=gst14+mul15;
                                                            cout<<"\nBill after gst"<<total14<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() && phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr15<<" $"<<"\n";
                                                                            mul15=pr15*tp2;
                                                                            cout<<"\nRate ="<<mul15<<" $"<<"\n";
                                                                            float gst14=(mul15*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst14<<" $"<<"\n";
                                                                            total14=gst14+mul15;
                                                                            cout<<"\nBill after gst"<<total14<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total14;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() && phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr15<<" $"<<"\n";
                                                                            mul15=pr15*tp2;
                                                                            cout<<"\nRate ="<<mul15<<" $"<<"\n";
                                                                            float gst14=(mul15*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst14<<" $"<<"\n";
                                                                            total14=gst14+mul15;
                                                                            cout<<"\nBill after gst"<<total14<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total14;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() && phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr15<<" $"<<"\n";
                                                                            mul15=pr15*tp2;
                                                                            cout<<"\nRate ="<<mul15<<" $"<<"\n";
                                                                            float gst14=(mul15*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst14<<" $"<<"\n";
                                                                            total14=gst14+mul15;
                                                                            cout<<"\nBill after gst"<<total14<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total14;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                               
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr15<<" $"<<"\n";
                                                                mul15=pr15*tp2;
                                                                cout<<"\nRate ="<<mul15<<" $"<<"\n";
                                                                float gst14=(mul15*5)/100;
                                                                cout<<"\nGST Amount ="<<gst14<<" $"<<"\n";
                                                                total14=gst14+mul15;
                                                                cout<<"\nBill after gst"<<total14<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr15<<" $"<<"\n";
                                                                    mul15=pr15*tp2;
                                                                    cout<<"\nRate ="<<mul15<<" $"<<"\n";
                                                                    float gst14=(mul15*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst14<<" $"<<"\n";
                                                                    total14=gst14+mul15;
                                                                    cout<<"\nBill after gst"<<total14<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total14;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    
                                                                    }
                                                                }
                                                            }
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_16)
                                                {
                                                    bool18=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr16=p1.prize16;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr16<<" $"<<"\n";
                                                                mul16=pr16*tp2;
                                                                cout<<"\nRate ="<<mul16<<" $"<<"\n";
                                                                float gst15=(mul16*5)/100;
                                                                cout<<"\nGST Amount = "<<gst15<<" $"<<"\n";
                                                                total15=gst15+mul16;
                                                                cout<<"\nBill after gst ="<<total15<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr16<<" $"<<"\n";
                                                            mul16=pr16*tp2;
                                                            cout<<"\nRate ="<<mul16<<" $"<<"\n";
                                                            float gst15=(mul16*5)/100;
                                                            cout<<"\nGST Amount = "<<gst15<<" $"<<"\n";
                                                            total15=gst15+mul16;
                                                            cout<<"\nBill after gst ="<<total15<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() && PIN2==s.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr16<<" $"<<"\n";
                                                                            mul16=pr16*tp2;
                                                                            cout<<"\nRate ="<<mul16<<" $"<<"\n";
                                                                            float gst15=(mul16*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst15<<" $"<<"\n";
                                                                            total15=gst15+mul16;
                                                                            cout<<"\nBill after gst ="<<total15<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total15;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() && PIN2==s1.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr16<<" $"<<"\n";
                                                                            mul16=pr16*tp2;
                                                                            cout<<"\nRate ="<<mul16<<" $"<<"\n";
                                                                            float gst15=(mul16*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst15<<" $"<<"\n";
                                                                            total15=gst15+mul16;
                                                                            cout<<"\nBill after gst ="<<total15<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total15;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() && PIN2==s2.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr16<<" $"<<"\n";
                                                                            mul16=pr16*tp2;
                                                                            cout<<"\nRate ="<<mul16<<" $"<<"\n";
                                                                            float gst15=(mul16*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst15<<" $"<<"\n";
                                                                            total15=gst15+mul16;
                                                                            cout<<"\nBill after gst ="<<total15<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total15;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr16<<" $"<<"\n";
                                                                mul16=pr16*tp2;
                                                                cout<<"\nRate ="<<mul16<<" $"<<"\n";
                                                                float gst15=(mul16*5)/100;
                                                                cout<<"\nGST Amount = "<<gst15<<" $"<<"\n";
                                                                total15=gst15+mul16;
                                                                cout<<"\nBill after gst ="<<total15<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if(balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    
                                                                    cout<<"\nRate per product ="<<pr16<<" $"<<"\n";
                                                                    mul16=pr16*tp2;
                                                                    cout<<"\nRate ="<<mul16<<" $"<<"\n";
                                                                    float gst15=(mul16*5)/100;
                                                                    cout<<"\nGST Amount = "<<gst15<<" $"<<"\n";
                                                                    total15=gst15+mul16;
                                                                    cout<<"\nBill after gst ="<<total15<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total15;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                            
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_17)
                                                {
                                                    bool19=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr17=p1.prize17;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr17<<" $"<<"\n";
                                                                mul17=pr17*tp2;
                                                                cout<<"\nRate ="<<mul17<<" $"<<"\n";
                                                                float gst16=(mul17*5)/100;
                                                                cout<<"\nGST Amount ="<<gst16<<" $"<<"\n";
                                                                total16=gst16+mul17;
                                                                cout<<"\nBill after gst ="<<total16<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr17<<" $"<<"\n";
                                                                mul17=pr17*tp2;
                                                                cout<<"\nRate ="<<mul17<<" $"<<"\n";
                                                                float gst16=(mul17*5)/100;
                                                                cout<<"\nGST Amount ="<<gst16<<" $"<<"\n";
                                                                total16=gst16+mul17;
                                                                cout<<"\nBill after gst ="<<total16<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr17<<" $"<<"\n";
                                                                            mul17=pr17*tp2;
                                                                            cout<<"\nRate ="<<mul17<<" $"<<"\n";
                                                                            float gst16=(mul17*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst16<<" $"<<"\n";
                                                                            total16=gst16+mul17;
                                                                            cout<<"\nBill after gst ="<<total16<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total16;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr17<<" $"<<"\n";
                                                                            mul17=pr17*tp2;
                                                                            cout<<"\nRate ="<<mul17<<" $"<<"\n";
                                                                            float gst16=(mul17*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst16<<" $"<<"\n";
                                                                            total16=gst16+mul17;
                                                                            cout<<"\nBill after gst ="<<total16<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                
                                                                                    balance3 = balance2;
                                                                                    Remaining_balance1=balance3-total16;
                                                                                    cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                
                                                                                    cout<<"\n✅Payment suceessfully!!!";
                                                                                    cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr17<<" $"<<"\n";
                                                                            mul17=pr17*tp2;
                                                                            cout<<"\nRate ="<<mul17<<" $"<<"\n";
                                                                            float gst16=(mul17*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst16<<" $"<<"\n";
                                                                            total16=gst16+mul17;
                                                                            cout<<"\nBill after gst ="<<total16<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total16;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                            
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr17<<" $"<<"\n";
                                                                mul17=pr17*tp2;
                                                                cout<<"\nRate ="<<mul17<<" $"<<"\n";
                                                                float gst16=(mul17*5)/100;
                                                                cout<<"\nGST Amount ="<<gst16<<" $"<<"\n";
                                                                total16=gst16+mul17;
                                                                cout<<"\nBill after gst ="<<total16<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr17<<" $"<<"\n";
                                                                    mul17=pr17*tp2;
                                                                    cout<<"\nRate ="<<mul17<<" $"<<"\n";
                                                                    float gst16=(mul17*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst16<<" $"<<"\n";
                                                                    total16=gst16+mul17;
                                                                    cout<<"\nBill after gst ="<<total16<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total16;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        
                                                                    }
                                                                }
                                                            }
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_18)
                                                {
                                                    bool20=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr18=p1.prize18;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr18<<" $"<<"\n";
                                                                mul18=pr18*tp2;
                                                                cout<<"\nRate ="<<mul18<<" $"<<"\n";
                                                                float gst17=(mul18*5)/100;
                                                                cout<<"\nGST Amount ="<<gst17<<" $"<<"\n";
                                                                total17=mul18+gst17;
                                                                cout<<"\nBill after gst ="<<total17<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr18<<" $"<<"\n";
                                                                mul18=pr18*tp2;
                                                                cout<<"\nRate ="<<mul18<<" $"<<"\n";
                                                                float gst17=(mul18*5)/100;
                                                                cout<<"\nGST Amount ="<<gst17<<" $"<<"\n";
                                                                total17=mul18+gst17;
                                                                cout<<"\nBill after gst ="<<total17<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr18<<" $"<<"\n";
                                                                            mul18=pr18*tp2;
                                                                            cout<<"\nRate ="<<mul18<<" $"<<"\n";
                                                                            float gst17=(mul18*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst17<<" $"<<"\n";
                                                                            total17=mul18+gst17;
                                                                            cout<<"\nBill after gst ="<<total17<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total17;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr18<<" $"<<"\n";
                                                                            mul18=pr18*tp2;
                                                                            cout<<"\nRate ="<<mul18<<" $"<<"\n";
                                                                            float gst17=(mul18*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst17<<" $"<<"\n";
                                                                            total17=mul18+gst17;
                                                                            cout<<"\nBill after gst ="<<total17<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                
                                                                                    balance3 = balance2;
                                                                                    Remaining_balance1=balance3-total17;
                                                                                    cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                
                                                                                    cout<<"\n✅Payment suceessfully!!!";
                                                                                    cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                                
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr18<<" $"<<"\n";
                                                                            mul18=pr18*tp2;
                                                                            cout<<"\nRate ="<<mul18<<" $"<<"\n";
                                                                            float gst17=(mul18*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst17<<" $"<<"\n";
                                                                            total17=mul18+gst17;
                                                                            cout<<"\nBill after gst ="<<total17<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total17;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                cout<<"\nRate per product ="<<pr18<<" $"<<"\n";
                                                                mul18=pr18*tp2;
                                                                cout<<"\nRate ="<<mul18<<" $"<<"\n";
                                                                float gst17=(mul18*5)/100;
                                                                cout<<"\nGST Amount ="<<gst17<<" $"<<"\n";
                                                                total17=mul18+gst17;
                                                                cout<<"\nBill after gst ="<<total17<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr18<<" $"<<"\n";
                                                                    mul18=pr18*tp2;
                                                                    cout<<"\nRate ="<<mul18<<" $"<<"\n";
                                                                    float gst17=(mul18*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst17<<" $"<<"\n";
                                                                    total17=mul18+gst17;
                                                                    cout<<"\nBill after gst ="<<total17<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total17;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    
                                                                    }
                                                                }
                                                            }
                                                            
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_19){
                                                    bool21=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr19=p1.prize19;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product = "<<pr19<<" $"<<"\n";
                                                                mul19=pr19*tp2;
                                                                cout<<"\nRate ="<<mul19<<" $"<<"\n";
                                                                float gst18=(mul19*5)/100;
                                                                cout<<"\nGST Amount ="<<gst18<<" $"<<"\n";
                                                                total18=gst18+mul19;
                                                                cout<<"\nBill after gst ="<<total18<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product = "<<pr19<<" $"<<"\n";
                                                            mul19=pr19*tp2;
                                                            cout<<"\nRate ="<<mul19<<" $"<<"\n";
                                                            float gst18=(mul19*5)/100;
                                                            cout<<"\nGST Amount ="<<gst18<<" $"<<"\n";
                                                            total18=gst18+mul19;
                                                            cout<<"\nBill after gst ="<<total18<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product = "<<pr19<<" $"<<"\n";
                                                                            mul19=pr19*tp2;
                                                                            cout<<"\nRate ="<<mul19<<" $"<<"\n";
                                                                            float gst18=(mul19*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst18<<" $"<<"\n";
                                                                            total18=gst18+mul19;
                                                                            cout<<"\nBill after gst ="<<total18<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total18;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product = "<<pr19<<" $"<<"\n";
                                                                            mul19=pr19*tp2;
                                                                            cout<<"\nRate ="<<mul19<<" $"<<"\n";
                                                                            float gst18=(mul19*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst18<<" $"<<"\n";
                                                                            total18=gst18+mul19;
                                                                            cout<<"\nBill after gst ="<<total18<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total18;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product = "<<pr19<<" $"<<"\n";
                                                                            mul19=pr19*tp2;
                                                                            cout<<"\nRate ="<<mul19<<" $"<<"\n";
                                                                            float gst18=(mul19*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst18<<" $"<<"\n";
                                                                            total18=gst18+mul19;
                                                                            cout<<"\nBill after gst ="<<total18<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total18;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                 
                                                            }
                                                            
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product = "<<pr19<<" $"<<"\n";
                                                                mul19=pr19*tp2;
                                                                cout<<"\nRate ="<<mul19<<" $"<<"\n";
                                                                float gst18=(mul19*5)/100;
                                                                cout<<"\nGST Amount ="<<gst18<<" $"<<"\n";
                                                                total18=gst18+mul19;
                                                                cout<<"\nBill after gst ="<<total18<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                        case 5:
                                                        {
                                                            if (balance1==0)
                                                            {
                                                                cout<<"\n❌ ERROR :  ";
                                                                cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product = "<<pr19<<" $"<<"\n";
                                                                    mul19=pr19*tp2;
                                                                    cout<<"\nRate ="<<mul19<<" $"<<"\n";
                                                                    float gst18=(mul19*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst18<<" $"<<"\n";
                                                                    total18=gst18+mul19;
                                                                    cout<<"\nBill after gst ="<<total18<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total18;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                            }
                                                        }
                                                            break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_20){
                                                    bool22=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr20=p1.prize20;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                                cout<<"\nRate per product ="<<pr20<<" $"<<"\n";
                                                                mul20=pr20*tp2;
                                                                cout<<"\nRate ="<<mul20<<" $"<<"\n";
                                                                float gst19=(mul20*5)/100;
                                                                cout<<"\nGST Amount = "<<gst19<<" $"<<"\n";
                                                                total19=gst19+mul20;
                                                                cout<<"\nBill after gst = "<<total19<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                            
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                                    cout<<"\nRate per product ="<<pr20<<" $"<<"\n";
                                                                    mul20=pr20*tp2;
                                                                    cout<<"\nRate ="<<mul20<<" $"<<"\n";
                                                                    float gst19=(mul20*5)/100;
                                                                    cout<<"\nGST Amount = "<<gst19<<" $"<<"\n";
                                                                    total19=gst19+mul20;
                                                                    cout<<"\nBill after gst = "<<total19<<" $"<<"\n";
                                                                    cout<<"____________________________________________________________________________________";
                                                                    cout<<"\n                                Card details                                    \n";
                                                                    cout<<"------------------------------------------------------------------------------------";
                                                                    fflush(stdin);
                                                                    cout<<"\n1)CARD HOLDER NAME: ";
                                                                    getline(cin, card_holder_name);
                                                                    fflush(stdin);
                                                                    cout<<"\n2) CARD NUMBER : ";
                                                                    cin>>Card_number;
                                                                    cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                    cin>>year;
                                                                    cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                    cin>>month;
                                                                    cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                    cout<<"\nCVV = ";
                                                                    cin>>cvv;
                                                                    cout<<"\nEnter your PIN = ";
                                                                    cin>>PIN;
                                                                
                                                                    cout<<"\n✅Payment suceessfully!!!";
                                                                    cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                
                                                            
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number() &&  PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr20<<" $"<<"\n";
                                                                            mul20=pr20*tp2;
                                                                            cout<<"\nRate ="<<mul20<<" $"<<"\n";
                                                                            float gst19=(mul20*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst19<<" $"<<"\n";
                                                                            total19=gst19+mul20;
                                                                            cout<<"\nBill after gst = "<<total19<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total19;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number() &&  PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr20<<" $"<<"\n";
                                                                            mul20=pr20*tp2;
                                                                            cout<<"\nRate ="<<mul20<<" $"<<"\n";
                                                                            float gst19=(mul20*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst19<<" $"<<"\n";
                                                                            total19=gst19+mul20;
                                                                            cout<<"\nBill after gst = "<<total19<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total19;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number() &&  PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr20<<" $"<<"\n";
                                                                            mul20=pr20*tp2;
                                                                            cout<<"\nRate ="<<mul20<<" $"<<"\n";
                                                                            float gst19=(mul20*5)/100;
                                                                            cout<<"\nGST Amount = "<<gst19<<" $"<<"\n";
                                                                            total19=gst19+mul20;
                                                                            cout<<"\nBill after gst = "<<total19<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total19;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr20<<" $"<<"\n";
                                                                mul20=pr20*tp2;
                                                                cout<<"\nRate ="<<mul20<<" $"<<"\n";
                                                                float gst19=(mul20*5)/100;
                                                                cout<<"\nGST Amount = "<<gst19<<" $"<<"\n";
                                                                total19=gst19+mul20;
                                                                cout<<"\nBill after gst = "<<total19<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                            case 5:
                                                            {
                                                                if (balance1==0)
                                                                {
                                                                        cout<<"\n❌ ERROR :  ";
                                                                        cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                }
                                                                else
                                                                {
                                                                    
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr20<<" $"<<"\n";
                                                                        mul20=pr20*tp2;
                                                                        cout<<"\nRate ="<<mul20<<" $"<<"\n";
                                                                        float gst19=(mul20*5)/100;
                                                                        cout<<"\nGST Amount = "<<gst19<<" $"<<"\n";
                                                                        total19=gst19+mul20;
                                                                        cout<<"\nBill after gst = "<<total19<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total19;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                                break;
                                                            
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_21){
                                                    bool23=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr21=p1.prize21;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr21<<" $"<<"\n";
                                                                mul21=pr21*tp2;
                                                                cout<<"\nRate ="<<mul21<<" $"<<"\n";
                                                                float gst20=(mul21*5)/100;
                                                                cout<<"\nGST Amount ="<<gst20<<" $"<<"\n";
                                                                total20=gst20+mul21;
                                                                cout<<"\nBill after gst ="<<total20<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr21<<" $"<<"\n";
                                                                mul21=pr21*tp2;
                                                                cout<<"\nRate ="<<mul21<<" $"<<"\n";
                                                                float gst20=(mul21*5)/100;
                                                                cout<<"\nGST Amount ="<<gst20<<" $"<<"\n";
                                                                total20=gst20+mul21;
                                                                cout<<"\nBill after gst ="<<total20<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr21<<" $"<<"\n";
                                                                            mul21=pr21*tp2;
                                                                            cout<<"\nRate ="<<mul21<<" $"<<"\n";
                                                                            float gst20=(mul21*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst20<<" $"<<"\n";
                                                                            total20=gst20+mul21;
                                                                            cout<<"\nBill after gst ="<<total20<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total20;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr21<<" $"<<"\n";
                                                                            mul21=pr21*tp2;
                                                                            cout<<"\nRate ="<<mul21<<" $"<<"\n";
                                                                            float gst20=(mul21*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst20<<" $"<<"\n";
                                                                            total20=gst20+mul21;
                                                                            cout<<"\nBill after gst ="<<total20<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total20;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr21<<" $"<<"\n";
                                                                            mul21=pr21*tp2;
                                                                            cout<<"\nRate ="<<mul21<<" $"<<"\n";
                                                                            float gst20=(mul21*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst20<<" $"<<"\n";
                                                                            total20=gst20+mul21;
                                                                            cout<<"\nBill after gst ="<<total20<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total20;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                 
                                                            }
                                                            
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr21<<" $"<<"\n";
                                                                mul21=pr21*tp2;
                                                                cout<<"\nRate ="<<mul21<<" $"<<"\n";
                                                                float gst20=(mul21*5)/100;
                                                                cout<<"\nGST Amount ="<<gst20<<" $"<<"\n";
                                                                total20=gst20+mul21;
                                                                cout<<"\nBill after gst ="<<total20<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                            case 5:
                                                            {
                                                                if(balance1==0)
                                                                {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                    
                                                                }
                                                                else
                                                                {
                                                                    
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr21<<" $"<<"\n";
                                                                        mul21=pr21*tp2;
                                                                        cout<<"\nRate ="<<mul21<<" $"<<"\n";
                                                                        float gst20=(mul21*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst20<<" $"<<"\n";
                                                                        total20=gst20+mul21;
                                                                        cout<<"\nBill after gst ="<<total20<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total20;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                                }
                                                               
                                                            }
                                                                break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==b_22){
                                                    bool24=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr22=p1.prize22;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"___________________________________________________cas____";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr22<<" $"<<"\n";
                                                                mul22=pr22*tp2;
                                                                cout<<"\nRate ="<<mul22<<" $"<<"\n";
                                                                float gst21=(mul22*5)/100;
                                                                cout<<"\nGST Amount ="<<gst21<<" $"<<"\n";
                                                                total21=gst21+mul22;
                                                                cout<<"\nBill after gst ="<<total21<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr22<<" $"<<"\n";
                                                            mul22=pr22*tp2;
                                                            cout<<"\nRate ="<<mul22<<" $"<<"\n";
                                                            float gst21=(mul22*5)/100;
                                                            cout<<"\nGST Amount ="<<gst21<<" $"<<"\n";
                                                            total21=gst21+mul22;
                                                            cout<<"\nBill after gst ="<<total21<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr22<<" $"<<"\n";
                                                                            mul22=pr22*tp2;
                                                                            cout<<"\nRate ="<<mul22<<" $"<<"\n";
                                                                            float gst21=(mul22*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst21<<" $"<<"\n";
                                                                            total21=gst21+mul22;
                                                                            cout<<"\nBill after gst ="<<total21<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total21;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s3.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s3.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr22<<" $"<<"\n";
                                                                            mul22=pr22*tp2;
                                                                            cout<<"\nRate ="<<mul22<<" $"<<"\n";
                                                                            float gst21=(mul22*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst21<<" $"<<"\n";
                                                                            total21=gst21+mul22;
                                                                            cout<<"\nBill after gst ="<<total21<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total21;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s3.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s3.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr22<<" $"<<"\n";
                                                                            mul22=pr22*tp2;
                                                                            cout<<"\nRate ="<<mul22<<" $"<<"\n";
                                                                            float gst21=(mul22*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst21<<" $"<<"\n";
                                                                            total21=gst21+mul22;
                                                                            cout<<"\nBill after gst ="<<total21<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total21;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr22<<" $"<<"\n";
                                                                mul22=pr22*tp2;
                                                                cout<<"\nRate ="<<mul22<<" $"<<"\n";
                                                                float gst21=(mul22*5)/100;
                                                                cout<<"\nGST Amount ="<<gst21<<" $"<<"\n";
                                                                total21=gst21+mul22;
                                                                cout<<"\nBill after gst ="<<total21<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                            case 5:
                                                            {
                                                                if (balance1==0)
                                                                {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                            
                                                                }
                                                                else
                                                                {
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr22<<" $"<<"\n";
                                                                        mul22=pr22*tp2;
                                                                        cout<<"\nRate ="<<mul22<<" $"<<"\n";
                                                                        float gst21=(mul22*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst21<<" $"<<"\n";
                                                                        total21=gst21+mul22;
                                                                        cout<<"\nBill after gst ="<<total21<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total21;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                                }
                                                                
                                                            }
                                                                break;
                                                        }
                                                    
                                                }
                                                else if(tp1[i]==b_23){
                                                    bool25=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr23=p1.prize23;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr23<<" $"<<"\n";
                                                                mul23=pr23*tp2;
                                                                cout<<"\nRate ="<<mul23<<" $"<<"\n";
                                                                float gst22=(mul23*5)/100;
                                                                cout<<"\nGST Amount ="<<gst22<<" $"<<"\n";
                                                                total22=mul23+gst22;
                                                                cout<<"\nBill after gst ="<<total22<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr23<<" $"<<"\n";
                                                                mul23=pr23*tp2;
                                                                cout<<"\nRate ="<<mul23<<" $"<<"\n";
                                                                float gst22=(mul23*5)/100;
                                                                cout<<"\nGST Amount ="<<gst22<<" $"<<"\n";
                                                                total22=mul23+gst22;
                                                                cout<<"\nBill after gst ="<<total22<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if(balance2==0)
                                                            {
                                                                    cout<<"\n❌  ERROR : ";
                                                                    cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr23<<" $"<<"\n";
                                                                            mul23=pr23*tp2;
                                                                            cout<<"\nRate ="<<mul23<<" $"<<"\n";
                                                                            float gst22=(mul23*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst22<<" $"<<"\n";
                                                                            total22=mul23+gst22;
                                                                            cout<<"\nBill after gst ="<<total22<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                
                                                                                    balance3 = balance2;
                                                                                    Remaining_balance1=balance3-total22;
                                                                                    cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
                
                                                                                    cout<<"\n✅Payment suceessfully!!!";
                                                                                    cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                                
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr23<<" $"<<"\n";
                                                                            mul23=pr23*tp2;
                                                                            cout<<"\nRate ="<<mul23<<" $"<<"\n";
                                                                            float gst22=(mul23*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst22<<" $"<<"\n";
                                                                            total22=mul23+gst22;
                                                                            cout<<"\nBill after gst ="<<total22<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total22;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr23<<" $"<<"\n";
                                                                            mul23=pr23*tp2;
                                                                            cout<<"\nRate ="<<mul23<<" $"<<"\n";
                                                                            float gst22=(mul23*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst22<<" $"<<"\n";
                                                                            total22=mul23+gst22;
                                                                            cout<<"\nBill after gst ="<<total22<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total22;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                            
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr23<<" $"<<"\n";
                                                                mul23=pr23*tp2;
                                                                cout<<"\nRate ="<<mul23<<" $"<<"\n";
                                                                float gst22=(mul23*5)/100;
                                                                cout<<"\nGST Amount ="<<gst22<<" $"<<"\n";
                                                                total22=mul23+gst22;
                                                                cout<<"\nBill after gst ="<<total22<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                            case 5:
                                                            {
                                                                if(balance1==0)
                                                                {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                }
                                                                else
                                                                {
                                                                    
                                                                stu s3;
                                                                s3.input_name_stu();
                                                                s3.input_pin();
                                                                if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                {
                                                                    cout<<"\nRate per product ="<<pr23<<" $"<<"\n";
                                                                    mul23=pr23*tp2;
                                                                    cout<<"\nRate ="<<mul23<<" $"<<"\n";
                                                                    float gst22=(mul23*5)/100;
                                                                    cout<<"\nGST Amount ="<<gst22<<" $"<<"\n";
                                                                    total22=mul23+gst22;
                                                                    cout<<"\nBill after gst ="<<total22<<" $"<<"\n";
                                                                    fflush(stdin);
                                                                    cout<<"Can you Place your order ?";
                                                                    getline(cin, boolean4);
                                                                    fflush(stdin);
                                                                    if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                    {
                                                                        balance = balance1;
                                                                        Remaining_balance=balance-total22;
                                                                        cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                        cout<<"\n✅Payment suceessfully!!!";
                                                                        cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                    }
                                                                }
                                                                }
                                                                
                                                            }
                                                                break;
                                                        }
                                            }
                                            
                                                else if (tp1[i]==b_24){
                                                    bool26=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr24=p1.prize24;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr24<<" $"<<"\n";
                                                                mul24=pr24*tp2;
                                                                cout<<"\nRate ="<<mul24<<" $"<<"\n";
                                                                float gst23=(mul24*5)/100;
                                                                cout<<"\nGST Amount ="<<gst23<<" $"<<"\n";
                                                                total23=mul24+gst23;
                                                                cout<<"\nBill after gst ="<<total23<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr24<<" $"<<"\n";
                                                                mul24=pr24*tp2;
                                                                cout<<"\nRate ="<<mul24<<" $"<<"\n";
                                                                float gst23=(mul24*5)/100;
                                                                cout<<"\nGST Amount ="<<gst23<<" $"<<"\n";
                                                                total23=mul24+gst23;
                                                                cout<<"\nBill after gst ="<<total23<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                cout<<"\\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr24<<" $"<<"\n";
                                                                            mul24=pr24*tp2;
                                                                            cout<<"\nRate ="<<mul24<<" $"<<"\n";
                                                                            float gst23=(mul24*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst23<<" $"<<"\n";
                                                                            total23=mul24+gst23;
                                                                            cout<<"\nBill after gst ="<<total23<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total23;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr24<<" $"<<"\n";
                                                                            mul24=pr24*tp2;
                                                                            cout<<"\nRate ="<<mul24<<" $"<<"\n";
                                                                            float gst23=(mul24*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst23<<" $"<<"\n";
                                                                            total23=mul24+gst23;
                                                                            cout<<"\nBill after gst ="<<total23<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total23;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            cout<<"\nRate per product ="<<pr24<<" $"<<"\n";
                                                                            mul24=pr24*tp2;
                                                                            cout<<"\nRate ="<<mul24<<" $"<<"\n";
                                                                            float gst23=(mul24*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst23<<" $"<<"\n";
                                                                            total23=mul24+gst23;
                                                                            cout<<"\nBill after gst ="<<total23<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total23;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                               
                                                            }
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr24<<" $"<<"\n";
                                                                mul24=pr24*tp2;
                                                                cout<<"\nRate ="<<mul24<<" $"<<"\n";
                                                                float gst23=(mul24*5)/100;
                                                                cout<<"\nGST Amount ="<<gst23<<" $"<<"\n";
                                                                total23=mul24+gst23;
                                                                cout<<"\nBill after gst ="<<total23<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                            case 5:
                                                            {
                                                                if (balance1==0)
                                                                {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                }
                                                                else
                                                                {
                                                                    
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        cout<<"\nRate per product ="<<pr24<<" $"<<"\n";
                                                                        mul24=pr24*tp2;
                                                                        cout<<"\nRate ="<<mul24<<" $"<<"\n";
                                                                        float gst23=(mul24*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst23<<" $"<<"\n";
                                                                        total23=mul24+gst23;
                                                                        cout<<"\nBill after gst ="<<total23<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total23;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                                }
                                                                
                                                            }
                                                                break;
                                                        }
                                                    
                                                }
                                                else if(tp1[i]==b_25){
                                                    bool27=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr25=p1.prize25;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr25<<" $"<<"\n";
                                                                mul25=pr25*tp2;
                                                                cout<<"\nRate ="<<mul25<<" $"<<"\n";
                                                                float gst24=(mul25*5)/100;
                                                                cout<<"\nGST Amount ="<<gst24<<" $"<<"\n";
                                                                total24=mul25+gst24;
                                                                cout<<"\nbill after gst ="<<total24<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr25<<" $"<<"\n";
                                                            mul25=pr25*tp2;
                                                            cout<<"\nRate ="<<mul25<<" $"<<"\n";
                                                            float gst24=(mul25*5)/100;
                                                            cout<<"\nGST Amount ="<<gst24<<" $"<<"\n";
                                                            total24=mul25+gst24;
                                                            cout<<"\nbill after gst ="<<total24<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr25<<" $"<<"\n";
                                                                            mul25=pr25*tp2;
                                                                            cout<<"\nRate ="<<mul25<<" $"<<"\n";
                                                                            float gst24=(mul25*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst24<<" $"<<"\n";
                                                                            total24=mul25+gst24;
                                                                            cout<<"\nbill after gst ="<<total24<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total24;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr25<<" $"<<"\n";
                                                                            mul25=pr25*tp2;
                                                                            cout<<"\nRate ="<<mul25<<" $"<<"\n";
                                                                            float gst24=(mul25*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst24<<" $"<<"\n";
                                                                            total24=mul25+gst24;
                                                                            cout<<"\nbill after gst ="<<total24<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total24;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                     
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr25<<" $"<<"\n";
                                                                            mul25=pr25*tp2;
                                                                            cout<<"\nRate ="<<mul25<<" $"<<"\n";
                                                                            float gst24=(mul25*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst24<<" $"<<"\n";
                                                                            total24=mul25+gst24;
                                                                            cout<<"\nbill after gst ="<<total24<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total24;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                            }
                                                            
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr25<<" $"<<"\n";
                                                                mul25=pr25*tp2;
                                                                cout<<"\nRate ="<<mul25<<" $"<<"\n";
                                                                float gst24=(mul25*5)/100;
                                                                cout<<"\nGST Amount ="<<gst24<<" $"<<"\n";
                                                                total24=mul25+gst24;
                                                                cout<<"\nbill after gst ="<<total24<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                            case 5:
                                                            {
                                                                if (balance1==0)
                                                                {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                
                                                                }
                                                                else
                                                                {
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        
                                                                        cout<<"\nRate per product ="<<pr25<<" $"<<"\n";
                                                                        mul25=pr25*tp2;
                                                                        cout<<"\nRate ="<<mul25<<" $"<<"\n";
                                                                        float gst24=(mul25*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst24<<" $"<<"\n";
                                                                        total24=mul25+gst24;
                                                                        cout<<"\nbill after gst ="<<total24<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total24;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                                }
                                                                
                                                            }
                                                                break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==book1)
                                                {
                                                    bool28=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr26=prize26;
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr26<<" $"<<"\n";
                                                                mul26=pr26*tp2;
                                                                cout<<"\nRate ="<<mul26<<" $"<<"\n";
                                                                float gst25=(mul26*5)/100;
                                                                cout<<"\nGST Amount ="<<gst25<<" $"<<"\n";
                                                                total25=mul26+gst25;
                                                                cout<<"\nBill after gst ="<<total25<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            cout<<"\nRate per product ="<<pr26<<" $"<<"\n";
                                                            mul26=pr26*tp2;
                                                            cout<<"\nRate ="<<mul26<<" $"<<"\n";
                                                            float gst25=(mul26*5)/100;
                                                            cout<<"\nGST Amount ="<<gst25<<" $"<<"\n";
                                                            total25=mul26+gst25;
                                                            cout<<"\nBill after gst ="<<total25<<" $"<<"\n";
                                                            cout<<"____________________________________________________________________________________";
                                                            cout<<"\n                                Card details                                    \n";
                                                            cout<<"------------------------------------------------------------------------------------";
                                                            fflush(stdin);
                                                            cout<<"\n1)CARD HOLDER NAME: ";
                                                            getline(cin, card_holder_name);
                                                            fflush(stdin);
                                                            cout<<"\n2) CARD NUMBER : ";
                                                            cin>>Card_number;
                                                            cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                            cin>>year;
                                                            cout<<"\nENTER A MONTH OF EXPIRY :";
                                                            cin>>month;
                                                            cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                            cout<<"\nCVV = ";
                                                            cin>>cvv;
                                                            cout<<"\nEnter your PIN = ";
                                                            cin>>PIN;
                                                        
                                                            cout<<"\n✅Payment suceessfully!!!";
                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                    
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            
                                                            }
                                                            else
                                                            {
                                                                
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr26<<" $"<<"\n";
                                                                            mul26=pr26*tp2;
                                                                            cout<<"\nRate ="<<mul26<<" $"<<"\n";
                                                                            float gst25=(mul26*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst25<<" $"<<"\n";
                                                                            total25=mul26+gst25;
                                                                            cout<<"\nBill after gst ="<<total25<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total25;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr26<<" $"<<"\n";
                                                                            mul26=pr26*tp2;
                                                                            cout<<"\nRate ="<<mul26<<" $"<<"\n";
                                                                            float gst25=(mul26*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst25<<" $"<<"\n";
                                                                            total25=mul26+gst25;
                                                                            cout<<"\nBill after gst ="<<total25<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total25;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr26<<" $"<<"\n";
                                                                            mul26=pr26*tp2;
                                                                            cout<<"\nRate ="<<mul26<<" $"<<"\n";
                                                                            float gst25=(mul26*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst25<<" $"<<"\n";
                                                                            total25=mul26+gst25;
                                                                            cout<<"\nBill after gst ="<<total25<<" $"<<"\n";
                                                                            fflush(stdin);
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean4);
                                                                            fflush(stdin);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total25;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                 
                                                            }
                                                            
                                                        }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr26<<" $"<<"\n";
                                                                mul26=pr26*tp2;
                                                                cout<<"\nRate ="<<mul26<<" $"<<"\n";
                                                                float gst25=(mul26*5)/100;
                                                                cout<<"\nGST Amount ="<<gst25<<" $"<<"\n";
                                                                total25=mul26+gst25;
                                                                cout<<"\nBill after gst ="<<total25<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                           
                                                            }
                                                                break;
                                                            case 5:
                                                            {
                                                                if (balance1==0)
                                                                {
                                                                    cout<<"\n❌ ERROR :  ";
                                                                    cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                
                                                                }
                                                                else
                                                                {
                                                                    
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        
                                                                        cout<<"\nRate per product ="<<pr26<<" $"<<"\n";
                                                                        mul26=pr26*tp2;
                                                                        cout<<"\nRate ="<<mul26<<" $"<<"\n";
                                                                        float gst25=(mul26*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst25<<" $"<<"\n";
                                                                        total25=mul26+gst25;
                                                                        cout<<"\nBill after gst ="<<total25<<" $"<<"\n";
                                                                        fflush(stdin);
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean4);
                                                                        fflush(stdin);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            balance = balance1;
                                                                            Remaining_balance=balance-total25;
                                                                            cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                            cout<<"\n✅Payment suceessfully!!!";
                                                                            cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                                }
                                                                
                                                            }
                                                                break;
                                                        }
                                                    
                                                }
                                                else if (tp1[i]==book2[i])
                                                {
                                                    bool29=true;
                                                    tp2=s3.input_quantity_of_book_stu();
                                                    pr27[i]=prize27[i];
                                                    cout<<"_________________________________________________";
                                                    cout<<"\n                  billing Address          \n";
                                                    cout<<"-------------------------------------------------";
                                                    fflush(stdin);
                                                    cout<<"\nEnter your Delivary address : ";
                                                    getline(cin, Address);
                                                    fflush(stdin);
                                                    cout<<"\nEnter pin code of your area : ";
                                                    cin>>pincode;
                                                    cout<<"_______________________________________________________";
                                                    cout<<"\n                  Payment method           \n";
                                                    cout<<"-------------------------------------------------------";
                                                    int choice6;
                                                    cout<<"\n1) Pay by using cradit card";
                                                    cout<<"\n2) Pay by using debit card";
                                                    cout<<"\n3) Pay by using UPI";
                                                    cout<<"\n4) Cash on delivary";
                                                    cout<<"\n5) Pay by using Amazon card";
                                                    cout<<"\nPlease,enter your choice : ";
                                                    cin>>choice6;
                                                    switch (choice6)
                                                    {
                                                        case 1:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr27[i]<<" $"<<"\n";
                                                                mul27=pr27[i]*tp2;
                                                                cout<<"\nRate ="<<mul27<<" $"<<"\n";
                                                                float gst26=(mul27*5)/100;
                                                                cout<<"\nGST Amount ="<<gst26<<" $"<<"\n";
                                                                total26=mul27+gst26;
                                                                cout<<"\nBill after gst ="<<total26<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        }
                                                            break;
                                                        case 2:
                                                        {
                                                            
                                                                cout<<"\nRate per product ="<<pr27[i]<<" $"<<"\n";
                                                                mul27=pr27[i]*tp2;
                                                                cout<<"\nRate ="<<mul27<<" $"<<"\n";
                                                                float gst26=(mul27*5)/100;
                                                                cout<<"\nGST Amount ="<<gst26<<" $"<<"\n";
                                                                total26=mul27+gst26;
                                                                cout<<"\nBill after gst ="<<total26<<" $"<<"\n";
                                                                cout<<"____________________________________________________________________________________";
                                                                cout<<"\n                                Card details                                    \n";
                                                                cout<<"------------------------------------------------------------------------------------";
                                                                fflush(stdin);
                                                                cout<<"\n1)CARD HOLDER NAME: ";
                                                                getline(cin, card_holder_name);
                                                                fflush(stdin);
                                                                cout<<"\n2) CARD NUMBER : ";
                                                                cin>>Card_number;
                                                                cout<<"\nENTER A YEAR OF EXPIRY : ";
                                                                cin>>year;
                                                                cout<<"\nENTER A MONTH OF EXPIRY :";
                                                                cin>>month;
                                                                cout<<"\nEXP DATE = "<<month<<"/"<<year;
                                                                cout<<"\nCVV = ";
                                                                cin>>cvv;
                                                                cout<<"\nEnter your PIN = ";
                                                                cin>>PIN;
                                                            
                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                        
                                                        }
                                                            break;
                                                        case 3:
                                                        {
                                                            int choice7;
                                                            cout<<"\n1) Pay using google pay ";
                                                            cout<<"\n2) Pay using paytm";
                                                            cout<<"\n3) pay using phonePay ";
                                                            cout<<"\nPlease,enter your choice : ";
                                                            cin>>choice7;
                                                            if (balance2==0)
                                                            {
                                                                cout<<"\n❌  ERROR : ";
                                                                cout<<"Your wallet is empty so,please first create your wallet and add some money in it for buy this book\n";
                                                            
                                                            }
                                                            else
                                                            {
                                                                switch (choice7)
                                                                {
                                                                    case 1:
                                                                    {
                                                                        stu s;
                                                                        s.input_name_stu();
                                                                        s.input_phone_number();
                                                                        s.input_pin();
                                                                        if(name1==s.input_name_stu() &&phone_number1==s.input_phone_number()&& PIN2==s.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr27[i]<<" $"<<"\n";
                                                                            mul27=pr27[i]*tp2;
                                                                            cout<<"\nRate ="<<mul27<<" $"<<"\n";
                                                                            float gst26=(mul27*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst26<<" $"<<"\n";
                                                                            total26=mul27+gst26;
                                                                            cout<<"\nBill after gst ="<<total26<<" $"<<"\n";
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total26;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 2:
                                                                    {
                                                                        stu s1;
                                                                        
                                                                        s1.input_name_stu();
                                                                        s1.input_phone_number();
                                                                        s1.input_pin();
                                                                        if(name1==s1.input_name_stu() &&phone_number1==s1.input_phone_number()&& PIN2==s1.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr27[i]<<" $"<<"\n";
                                                                            mul27=pr27[i]*tp2;
                                                                            cout<<"\nRate ="<<mul27<<" $"<<"\n";
                                                                            float gst26=(mul27*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst26<<" $"<<"\n";
                                                                            total26=mul27+gst26;
                                                                            cout<<"\nBill after gst ="<<total26<<" $"<<"\n";
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total26;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                        break;
                                                                    case 3:
                                                                    {
                                                                        stu s2;
                                                                        s2.input_name_stu();
                                                                        s2.input_phone_number();
                                                                        s2.input_pin();
                                                                        if(name1==s2.input_name_stu() &&phone_number1==s2.input_phone_number()&& PIN2==s2.input_pin())
                                                                        {
                                                                            
                                                                            cout<<"\nRate per product ="<<pr27[i]<<" $"<<"\n";
                                                                            mul27=pr27[i]*tp2;
                                                                            cout<<"\nRate ="<<mul27<<" $"<<"\n";
                                                                            float gst26=(mul27*5)/100;
                                                                            cout<<"\nGST Amount ="<<gst26<<" $"<<"\n";
                                                                            total26=mul27+gst26;
                                                                            cout<<"\nBill after gst ="<<total26<<" $"<<"\n";
                                                                            cout<<"Can you Place your order ?";
                                                                            getline(cin, boolean);
                                                                            if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                            {
                                                                                balance3 = balance2;
                                                                                Remaining_balance1=balance3-total26;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance1<<" $"<<"\n";
            
                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                    break;
                                                            }
                                                        }
                                                                break;
                                                            case 4:
                                                            {
                                                                
                                                                cout<<"\nRate per product ="<<pr27[i]<<" $"<<"\n";
                                                                mul27=pr27[i]*tp2;
                                                                cout<<"\nRate ="<<mul27<<" $"<<"\n";
                                                                float gst26=(mul27*5)/100;
                                                                cout<<"\nGST Amount ="<<gst26<<" $"<<"\n";
                                                                total26=mul27+gst26;
                                                                cout<<"\nBill after gst ="<<total26<<" $"<<"\n";
                                                                fflush(stdin);
                                                                cout<<"\nCan you Placed your order ? : ";
                                                                getline(cin, boolean4);
                                                                fflush(stdin);
                                                                if (boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                {
                                                                    cout<<"\n✅ your order is successfully placed!!!";
                                                                    cout<<"\nThank you for shopping!!!\n";
                                                                }
                                                            }
                                                                break;
                                                            case 5:
                                                            {
                                                                if (balance1==0)
                                                                {
                                                                        cout<<"\n❌ ERROR :  ";
                                                                        cout<<"Your amazon card is empty so,please first create your amazon and add some money in it for buy this book\n";
                                                                }
                                                                else
                                                                {
                                                                    stu s3;
                                                                    s3.input_name_stu();
                                                                    s3.input_pin();
                                                                    if(name==s3.input_name_stu() && PIN1==s3.input_pin())
                                                                    {
                                                                        
                                                                        cout<<"\nRate per product ="<<pr27[i]<<" $"<<"\n";
                                                                        mul27=pr27[i]*tp2;
                                                                        cout<<"\nRate ="<<mul27<<" $"<<"\n";
                                                                        float gst26=(mul27*5)/100;
                                                                        cout<<"\nGST Amount ="<<gst26<<" $"<<"\n";
                                                                        total26=mul27+gst26;
                                                                        cout<<"\nBill after gst ="<<total26<<" $"<<"\n";
                                                                        cout<<"Can you Place your order ?";
                                                                        getline(cin, boolean);
                                                                        if(boolean4==boolean || boolean4==boolean1 || boolean4==boolean2)
                                                                        {
                                                                            
                                                                                balance = balance1;
                                                                                Remaining_balance=balance-total26;
                                                                                cout<<"\n"<<"👉🏻"<<name<<" your Remaining balance is = "<<Remaining_balance<<" $"<<"\n";

                                                                                cout<<"\n✅Payment suceessfully!!!";
                                                                                cout<<"\n                            🙏  Thank you for shopping!!!  🙏                        \n";
                                                                        }
                                                                    }
                                                                    
                                                                }
                                                                
                                                            }
                                                                break;
                                                        }
                                                    
                                                }
                                                else
                                                {
                                                    cout<<"\nsorry😔,This book is not available yet😔\n";
                                                    cout<<"\nCan you request for that book ? :";
                                                    getline(cin,boolean4);
                                                    if (boolean==boolean4 || boolean2==boolean4 || boolean1==boolean4)
                                                    {
                                                        cout<<"\n✅ Request for that boook is accepted.\n";
                                                        book1=tp1[i];
                                                        break;
                                                    }
                                                    else
                                                    {
                                                        break;
                                                    }
                                                }
                                                    
                                            } //end of for loop
                                            
                                        }//end of if
                                        else{
                                            cout<<"\nsorry😔,This type of books are not available yet😔\n";
                                        }
                                            
                                    
                                }//end of case 1
                                    break;
                                case 2:
                                {
                                    
                                        bool1 = true;
                                        cout<<"\nHow many books do you want to return :";
                                        cin>>h_book;
                                                fflush(stdin);
                                                cout<<"\nWhich type of books do you want to return : ";
                                                getline(cin,book3);
                                                book4=book3;
                                    
                                        fflush(stdin);
                                        for(int i=0;i<h_book;i++)
                                        {
                                            fflush(stdin);
                                            cout<<"\nWhich book do you want to return : ";
                                            getline(cin,book2[i]);
                                            fflush(stdin);
                                            cout<<"\nWhat is a prize of each book : ";
                                            cin>>prize27[i];
                                        }//end of for loop
                                        
                                    }//end of case 2
                                    break;
                        default:
                            cout<<"\n❌ ERROR : Invalid choice please,try again!!!";
                                    break;
                }//end of if
                
            }//end of second if
            else{
                cout<<"❌ ERROR : Incorrect password or E-mail"<<"\n"<<"Please,try again!!!";
                }
       
        } //end of for loop
    }//end of case 4
                break;
            case 5:
            {
                stu s;
                name = s.input_name_stu();
                s.input_address();
                balance1 = s.input_balance();
                PIN1=s.input_pin();
                cout<<"\n✅ your Amazon card is successfully created!!!\n";
            }
                break;
            case 6:
            {
                stu s1;
                name1=s1.input_name_stu();
                s1.input_address();
                balance2=s1.input_balance();
                PIN2=s1.input_pin();
                phone_number1=s1.input_phone_number();
                cout<<"\n✅ your wallet is successfully created!!!";
                
            }
                break;
            default:
                cout<<"\n❌ ERROR : Invalid choice please,try again!!!";
                break;
 
     }//end of main switch
        
  }//end of while loop
            
    
    
    return 0;
}//end of main
    
