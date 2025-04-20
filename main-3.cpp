// Programmer  : Isack Chane
// Lab Section :
// Description :


#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;


//
int main()
{
    double Whig = 27.50;        ///prices for items...
    double Elephant = 53.50;
    double Donkey = 89.00;
    double Teapot = 15.00;
    double Liberty = 9.50;

    double total = 1992.38;                 /// amount due
    double tax_total = 0.0;
    string inputFileName ="V1one";

    string firstname, lastname;
    char politcal_party;
    double num;
    double totalcost1;
    double totalcost2;
    double totalcost3;
    double totalcost4;
    double totalcost5;
    double avgcost;
    double cost;

    // Print the lab heading.


   //Start do-while loop


    ifstream inFileItems;

    cout << "Enter file name" << endl;
    cin >> inputFileName;

    inFileItems.open(inputFileName.c_str());
    if(!inFileItems){
        cout<<"\nProject 1 ERROR Opening Input File!! Exiting!\n\n"<<endl<<endl;
        return 0;
    }


       inFileItems >> firstname >> lastname>>politcal_party>>num; // read the next line of data


       while(!inFileItems.eof())             //while we havent reached end-of-file
       {


if (politcal_party == 'W'){

    cost = num*Whig;

    totalcost1 = num*Whig;
}


if (politcal_party == 'E'){

    totalcost2 = num*Elephant;
    cost = num*Elephant;


}

if (politcal_party == 'D'){

    totalcost3 = num*Donkey;
    cost = num*Donkey;

}

if (politcal_party == 'T'){

    totalcost4 = num*Teapot;
    cost = num*Teapot;

}

if (politcal_party == 'L'){

    totalcost5 = num*Liberty;
    cost = num*Liberty;

}


   cout << setw(10) << left <<firstname << setw(10) << left << lastname << setw(10) << left << setw (10) <<politcal_party << left << setw(10) <<num<< left << setw(10) <<cost<<endl; // read the next line of data



        inFileItems >> firstname >> lastname>>politcal_party>>num; // read the next line of data



       }




        avgcost = (cost)/5;
        cout <<"Average cost is: " << avgcost;



   return 0;

}





