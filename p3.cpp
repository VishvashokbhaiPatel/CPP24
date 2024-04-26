#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class car
{
private:
    int mileage;
    char trans[7];
    int tank_cap;
    int seat_cap;
    char airbags[4];
public:
    char model[10];
    char fuel[6];
    float price;

    //for entring data from user.
    void getdata()
    {
        cout<<"Enter model name :";
        cin>>model;
        fflush(stdin);

        cout<<"Enter fuel type :";
        cin>>fuel;
        fflush(stdin);

        cout<<"Enter price :";
        cin>>price;
        fflush(stdin);

        cout<<"Enter mileage :";
        cin>>mileage;
        fflush(stdin);

        cout<<"Enter transmission :";
        cin>>trans;
        fflush(stdin);

        cout<<"Enter tank capacity :";
        cin>>tank_cap;
        fflush(stdin);

        cout<<"Enter seating capacity :";
        cin>>seat_cap;
        fflush(stdin);

        cout<<"Enter car have airbags or not :";
        cin>>airbags;
        fflush(stdin);
    }

    //for display all details.
    void display()
    {
        cout.width(8);
        cout<<left<<model;
        fflush(stdout);
        cout.width(6);
        cout<<left<<fuel;
        fflush(stdout);
        cout.width(7);
        cout<<left<<price;
        fflush(stdout);
        cout.width(9);
        cout<<left<<mileage;
        fflush(stdout);
        cout.width(14);
        cout<<left<<trans;
        fflush(stdout);
        cout.width(15);
        cout<<left<<tank_cap;
        fflush(stdout);
        cout.width(18);
        cout<<left<<seat_cap;
        fflush(stdout);
        cout.width(7);
        cout<<left<<airbags<<endl;
        fflush(stdout);
    }

};

int main()
{
    int num_car;
    cout<<"Enter number of car :";
    cin>>num_car;

    car cars[num_car];

    for(int i=0;i<num_car;i++)
    {
        cout<<"Enter detail of car :"<<i+1<<endl;
         cars[i].getdata();
    }
    //check car is avaliable or not, using 3 options.
    cout<<"WELCOME TO TATA MOTERS \n"<<endl;
    cout<<"GET THE CAR DETAILS AS PER YOUR PREFERENCE\n"<<endl;
    cout<<"1 model name"<<endl;
    cout<<"2 fuel type"<<endl;
    cout<<"3 price range\n"<<endl;

    int choice;

    cout<<"Enter your choice :";
    cin>>choice;
    cout<<"------------------------"<<endl;

    switch(choice)
    {
        //check using model name.
    case 1:
        {
            int modelnum;
            cout<<"TATA MOTERS ARE AVAILABLE OPTIONS :"<<endl;

            for(int i=0;i<num_car;i++)
            {
                 cout<<"("<<i+1<<")"<<cars[i].model<<"\t";
            }

            cout<<"CHOSE YOUR CAR TO GET DETAILS :";
            cin>>modelnum;

            cout<<"Model   Fuel  Price  Mileage Transmission  Tank capacity  Seating capacity  Airbags"<<endl;

            cars[modelnum-1].display();

        }
        break;


        //check using fuel type.
    case 2:
        {
           char fueltype[10];
           cout<<"TATA MOTORS ARE AVAILABLE WITH FUEL OPTIONS"<<endl;
           cout<<"(1)Petrol (2)Diesel (3)CNG (4)Electric"<<endl;
           cout<<"ENTER YOUR FUEL PREFRENCE :";
           cin>>fueltype;
           cout<<"Model   Fuel  Price  Mileage Transmission  Tank capacity  Seating capacity  Airbags"<<endl;

           for(int i=0;i<num_car;i++)
           {
               if(strcmp(cars[i].fuel,fueltype))
                cars[i].display();
           }

        }
        break;

        //check using price.

    case 3:
        {
            float max_price;

            cout<<"ENTER YOURE MAXIMUM AFFORDABLE RANGE IN LAKHS :";
            cin>>max_price;
            cout<<"Model   Fuel  Price  Mileage Transmission  Tank capacity  Seating capacity  Airbags"<<endl;

            for(int i=0;i<num_car;i++)
            {
                if(cars[i].price<=max_price)
                    cars[i].display();
            }
        }
        break;

    default:
        cout<<"invalid option ";

    }
}
