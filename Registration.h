void mainMenu();

class Registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;
        static std::string timings;


    public:
        void flights()
        {
            std::string flightN[] = {"Abu Dhabi", "Toronto", "Perth", "New York", "Munich", "New Delhi"};
            for (int a=0; a<6; a++)
            {
            std::cout<<(a+1)<<". "<<flightN[a]<<std::endl;
            }
            std::cout<<"\nWelcome to the CLoud9 AirTravels!"<<std::endl;
            std::cout<<"Press the code of the country of which you want to book the flight: ";
            std::cin>>choice;

        switch(choice)
        {
            case 1:
            {
                std::cout<<"\nWelcome to Dubai Emirates"<<std::endl;
                std::cout<<"Your comfort is our priority. Enjoy the journey!"<<std::endl;
                std::cout<<"Following are the flights \n"<<std::endl;
                std::cout<<"1. DUB 498"<<std::endl;
                std::cout<<"\t08-01-2022 8:00AM 10hrs Rs. 14000"<<std::endl;
                std::cout<<"2. DUB - 658"<<std::endl;
                std::cout<<"\t09-01-2022 4:00AM 12hrs Rs. 10000"<<std::endl;
                std::cout<<"3. DUB - 508"<<std::endl;
                std::cout<<"\t11-01-2022 11:00AM 11hrs Rs. 9000"<<std::endl;
                std::cout<<"\nSelect the flight you want to book ";
                std::cin>>choice1;

                if (choice1 == 1)
                {
                    charges=14000;
                    timings="8:00AM 10hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB - 498"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==2)
                {
                    charges=10000;
                    timings="4:00AM 12hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB - 658"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==3)
                {
                    charges=9000;
                    timings = "11:00AM 11hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB 508"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else
                {
                    std::cout<<"Invalid input, shifting to the previous menu"<<std::endl;
                    flights();
                }

                std::cout<<"Press any key to go back to the main menu: "<<std::endl;
                std::cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
        
            case 2:
            {
                std::cout<<"Welcome to Air Canada"<<std::endl;
                std::cout<<"A Great way to Fly. We wish you a safe journey!"<<std::endl;
                std::cout<<"Following are the flights \n"<<std::endl;
                std::cout<<"1. CND 498"<<std::endl;
                std::cout<<"\t08-01-2022 1:00AM 10hrs Rs. 39000"<<std::endl;
                std::cout<<"2. CND - 658"<<std::endl;
                std::cout<<"\t09-01-2022 7:00AM 12hrs Rs. 56000"<<std::endl;
                std::cout<<"3. CND - 508"<<std::endl;
                std::cout<<"\t11-01-2022 11:00AM 11hrs Rs. 43000"<<std::endl;
                std::cout<<"\nSelect the flight you want to book ";
                std::cin>>choice1;

                if (choice1==1)
                {
                    charges=39000;
                    timings="1:00AM 10hrs";
                    std::cout<<"\nYou have successfully booked the flight CND - 498"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==2)
                {
                    charges=56000;
                    timings="7:00AM 12hrs";
                    std::cout<<"\nYou have successfully booked the flight CND - 658"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==3)
                {
                    charges=43000;
                    timings = "11:00AM 11hrs";
                    std::cout<<"\nYou have successfully booked the flight CND 508"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else
                {
                    std::cout<<"Invalid input, shifting to the previous menu"<<std::endl;
                    flights();
                }

                std::cout<<"Press any key to go back to the main menu: "<<std::endl;
                std::cin>>back;

                if (back==1)
                {
                    mainMenu();
                }
                    else
                {
                    mainMenu();
                }

            }


            case 3:
            {
                std::cout<<" Welcome to Australian Aviation"<<std::endl;
                std::cout<<"Traveling the globe, making dreams come true."<<std::endl;
                std::cout<<"Following are the flights \n"<<std::endl;
                std::cout<<"1. AUS - 498"<<std::endl;
                std::cout<<"\t08-01-2022 8:00AM 10hrs Rs. 25000"<<std::endl;
                std::cout<<"2. AUS - 658"<<std::endl;
                std::cout<<"\t09-01-2022 4:00AM 12hrs Rs. 23000"<<std::endl;
                std::cout<<"3. AUS - 508"<<std::endl;
                std::cout<<"\t11-01-2022 11:00AM 11hrs Rs. 40000"<<std::endl;
                std::cout<<"\nSelect the flight you want to book ";
                std::cin>>choice1;

                if (choice1==1)
                {
                    charges=25000;
                    timings = "8:00AM 10hrs";
                    std::cout<<"\nYou have successfully booked the flight AUS - 498"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==2)
                {
                    charges=23000;
                    timings = "4:00AM 12hrs";
                    std::cout<<"\nYou have successfully booked the flight AUS - 658"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==3)
                {
                    charges=40000;
                    timings ="11:00AM 11hrs"; 
                    std::cout<<"\nYou have successfully booked the flight AUS - 508"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else
                {
                    std::cout<<"Invalid input, shifting to the previous menu"<<std::endl;
                    flights();
                }

                std::cout<<"Press any key to go back to the main menu: "<<std::endl;
                std::cin>>back;

                if (back==1)
                {
                    mainMenu();
                }

                else
                {
                    mainMenu();
                }

            }


            case 4:
            {
                std::cout<<" Welcome to America Southern Airlines"<<std::endl;
                std::cout<<"Journeys of Inspiration. Excellence in Flight!"<<std::endl;
                std::cout<<"Following are the flights \n"<<std::endl;
                std::cout<<"1. USS - 498"<<std::endl;
                std::cout<<"\t08-01-2022 8:00AM 10hrs Rs. 80000"<<std::endl;
                std::cout<<"2. USS - 658"<<std::endl;
                std::cout<<"\t09-01-2022 4:00AM 12hrs Rs. 95000"<<std::endl;
                std::cout<<"3. USS - 508"<<std::endl;
                std::cout<<"\t11-01-2022 11:00AM 11hrs Rs. 78000"<<std::endl;
                std::cout<<"\nSelect the flight you want to book ";
                std::cin>>choice1;

                if (choice1==1)
                {
                    charges=80000;
                    timings = "8:00AM 10hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB - 498"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==2)
                {
                    charges=95000;
                    timings = "4:00AM 12hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB - 658"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==3)
                {
                    charges=78000;
                    timings = "11:00AM 11hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB 508"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else
                {
                    std::cout<<"Invalid input, shifting to the previous menu"<<std::endl;
                    flights();
                }

                std::cout<<"Press any key to go back to the main menu: "<<std::endl;
                std::cin>>back;

                if (back==1)
                {
                    mainMenu();
                }

                else
                {
                    mainMenu();
                }

            }

            
            case 5:
            {
                std::cout<<" Welcome to Germany JetWays"<<std::endl;
                std::cout<<"Fly the Friendly Skies. Pleasure to serve you!"<<std::endl;
                std::cout<<"Following are the flights \n"<<std::endl;
                std::cout<<"1. GRM - 498"<<std::endl;
                std::cout<<"\t08-01-2022 8:00AM 10hrs Rs. 50000"<<std::endl;
                std::cout<<"2. GRM - 658"<<std::endl;
                std::cout<<"\t09-01-2022 4:00AM 12hrs Rs. 55000"<<std::endl;
                std::cout<<"3. GRM - 508"<<std::endl;
                std::cout<<"\t11-01-2022 11:00AM 11hrs Rs. 46000"<<std::endl;
                std::cout<<"\nSelect the flight you want to book ";
                std::cin>>choice1;

                if (choice1==1)
                {
                    charges=50000;
                    timings="8:00AM 10hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB - 498"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==2)
                {
                    charges=55000;
                    timings="4:00AM 12hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB - 658"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==3)
                {
                    charges=46000;
                    timings = "11:00AM 11hrs";
                    std::cout<<"\nYou have successfully booked the flight DUB - 508"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else
                {
                    std::cout<<"Invalid input, shifting to the previous menu"<<std::endl;
                    flights();
                }

                std::cout<<"Press any key to go back to the main menu: "<<std::endl;
                std::cin>>back;

                if (back==1)
                {
                    mainMenu();
                }

                else
                {
                    mainMenu();
                }

            }

            
            case 6:
            {
                std::cout<<" Welcome to Air India"<<std::endl;
                std::cout<<"Your comfort is our priority. Enjoy the journey!"<<std::endl;
                std::cout<<"Following are the flights \n"<<std::endl;
                std::cout<<"1. AI - 498"<<std::endl;
                std::cout<<"\t08-01-2022 8:00AM 3hrs Rs. 6000"<<std::endl;
                std::cout<<"2. AI - 658"<<std::endl;
                std::cout<<"\t09-01-2022 4:00AM 5hrs Rs. 8000"<<std::endl;
                std::cout<<"3. AI - 508"<<std::endl;
                std::cout<<"\t11-01-2022 11:00AM 2hrs Rs. 3000"<<std::endl;
                std::cout<<"\nSelect the flight you want to book ";
                std::cin>>choice1;

                if (choice1==1)
                {
                    charges=6000;
                    timings="8:00AM 3hrs";
                    std::cout<<"\nYou have successfully booked the flight AI - 498"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==2)
                {
                    charges=8000;
                    timings="4:00AM 5hrs";
                    std::cout<<"\nYou have successfully booked the flight AI - 658"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else if (choice1==3)
                {
                    charges=3000;
                    timings="11:00AM 2hrs";
                    std::cout<<"\nYou have successfully booked the flight AI - 508"<<std::endl;
                    std::cout<<"You can go back to menu and take the ticket"<<std::endl;
                }

                else
                {
                    std::cout<<"Invalid input, shifting to the previous menu"<<std::endl;
                    flights();
                }

                std::cout<<"Press any key to gso back to the main menu: "<<std::endl;
                std::cin>>back;

                if (back==1)
                {
                    mainMenu();
                }

                else
                {
                    mainMenu();
                }

            }


            default: 
            {
                std::cout<<"Invalid input"<<std::endl;
                mainMenu();
                break;
            }

        }

    }   
};