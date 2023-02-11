class Details
{
    public:
        static std::string name, gender;
        int phoneNo;
        int age;
        std::string add;
        static int cId;
        char arr[100];



    public:
        void information()
        {
            std::cout<<"\nEnter the customer ID : ";
            std::cin>>cId;

            std::cout<<"\nName of the customer : ";
            std::cin.ignore();
            std::getline(std::cin,name);

            std::cout<<"\nAge : ";
            std::cin>>age;

            std::cout<<"\nAddress :";
            std::cin.ignore();
            std::getline(std::cin,add);
            
            std::cout<<"\nGender : ";
            std::cin>>gender;

            std::cout<<"Your details are saved with us\n"<<std::endl;
        }

};