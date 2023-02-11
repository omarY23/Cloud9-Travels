#include<iostream>
#include<fstream>
#include<iomanip>
#include "Details.h"
#include "Registration.h"
#include "string.h"
#include<string>

using namespace std;

void mainMenu();

class Management
{
    public:

        Management ()
        {
            mainMenu();
        }

};

int Details::cId;
string Details::name;
string Details::gender;


float Registration::charges;
string Registration::timings;
int Registration::choice;

class ticket : public Registration, Details
    {
        public:
            void Bill()
            {
                string destination="";
                ofstream outf("records.txt");
                {
                    outf<<"_______________Cloud9 Travels_______________"<<endl;
                    outf<<"__________________Ticket____________________"<<endl;
                    outf<<"____________________________________________"<<endl;
                    
                    outf<<" Customer ID: "<<Details::cId<<endl;
                    outf<<" Customer Name: "<<Details::name<<endl;
                    outf<<" Customer Gender: "<<Details::gender<<endl<<endl;
                    outf<<"\tDescription"<<endl<<endl;

                    if(Registration::choice==1)
                    {
                    destination="Abu Dhabi";
                    }

                    else if (Registration::choice==2)
                    {
                    destination="Toronto";
                    }

                    else if (Registration::choice==3)
                    {
                    destination="Perth";
                    }

                    else if (Registration::choice==4)
                    {
                    destination="New York";
                    }

                    else if (Registration::choice==5)
                    {
                    destination="Munich";
                    }

                    else if (Registration::choice==6)
                    {
                    destination="New Delhi";
                    }

                    outf<<" Destination :\t"<<destination<<endl;
                    outf<<" Flight timings :"<<" "<<Registration::timings<<endl;
                    outf<<" Flight charges including taxes : "<<"Rs."<<Registration::charges<<endl;

                }
                
                outf.close();

            }

        void dispBill(){
            ifstream ifs("records.txt");{
                if(!ifs){
                    cout<<"File error!"<<endl;
                }
                while(!ifs.eof()){
                    ifs.getline(arr,100);
                    cout<<arr<<endl;
                }
            }
            ifs.close();
        }

    };


void mainMenu()
{
    int lchoice;
    int schoice;
    int back;
    cout<<"\t\t\t\t\tCloud9 AirTravels \n"<<endl;
    cout<<"\t\t\t\t\t   Main Menu"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t Press 1 to add the Customer Details \t"<<endl;
    cout<<"\t\t\t\t Press 2 for Flight Registration \t"<<endl;
    cout<<"\t\t\t\t Press 3 for Ticket and Charges \t"<<endl;
    cout<<"\t\t\t\t Press 4 to Exit \t"<<endl;
    cout<<"\t\t\t\t\t\t\t"<<endl;
    cout<<"\t     -----------------------------------------------------------------------------------\t"<<endl;
    cout<<"Enter the choice: ";
    cin>>lchoice;

    Details d;
    Registration r;
    ticket t;

    switch (lchoice)
        {

        case 1:
        {
            cout<<"\nCustomers Credentials"<<endl;
            d.information();
            cout<<"Press any key to go back to Main menu ";
            cin>>back;

            if (back==1)
            {
            mainMenu();
            }

            else
            {
                mainMenu();
            }

            break;
        }

        case 2:
        {
            cout<<"\nBook a flight using this system \n"<<endl;
            r.flights();
            break;
        }

        case 3:
        {
            cout<<"GET YOUR TICKET \n"<<endl;
            t.Bill();

            cout<<"Your ticket is printed, you can collect it \n"<<endl;
            cout<<"Press 1 to display your ticket\n ";
            cin>>back;

            if (back==1)
            {
                t.dispBill();
                cout<<"Press any number to go back to main menu: ";
                cin>>back;

                if (back==1)
                {
                    mainMenu();
                }

                else{
                    mainMenu();
                }
            }

            else{
                mainMenu();
            }

            break;
        }

        case 4:
        {
            cout<<"\n\n\t_ Thank-you "<<endl;
            break;
        }


        default:
        {
            cout<<"Invalid input, Please try again!\n"<<endl;
            mainMenu();
            break;
        }
    }

}

int main()
{
    Management Mobj;
    return 0;
}