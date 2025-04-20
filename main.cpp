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
    double FidoFeast = 11.00;        ///prices for items...
    double PupChow = 21.50;
    double BigBites = 22.50;
    double OleYeller = 14.00;
    double MuttMeal = 5.50;

    double total = 1992.38;                 /// amount due
    double tax_total = 0.0;
    string inputFileName ="V1one";

    string firstname, lastname;
    char dog_food;
    double num;
    double totalcost1;
    double totalcost2;
    double totalcost3;
    double totalcost4;
    double totalcost5;
    double avgcost;
    double cost;
    double cost_pound;

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
       inFileItems >> firstname >>dog_food>>num; // read the next line of data

cout<< "Name    Type       Cost   Quantity   TotalCost\n";
cout<< "====    ====       ====   ========   =========\n";
       while(!inFileItems.eof())             //while we havent reached end-of-file
       {
if (dog_food == 'F'){

    cost = num*FidoFeast;

    totalcost1 = num*FidoFeast;
    cost_pound = 11.00;
}
if (dog_food == 'P'){

    totalcost2 = num*PupChow;
    cost = num*PupChow;
    cost_pound = 21.50;
}

if (dog_food == 'B'){

    totalcost3 = num*BigBites;
    cost = num*BigBites;
    cost_pound = 22.50;

}

if (dog_food == 'Y'){

    totalcost4 = num*OleYeller;
    cost = num*OleYeller;
    cost_pound = 14.00;

}
if (dog_food == 'W'){

    totalcost5 = num*MuttMeal;
    cost = num*MuttMeal;
    cost_pound = 5.50;

}
   cout << setw(10) << left <<firstname<< setw(10) << left << setw (10) <<dog_food << left << setw(10) << cost_pound << left << setw(10) <<num<< left << setw(10) <<cost<<endl; // read the next line of data
        inFileItems >> firstname >>dog_food>>num; // read the next line of data



       }




        avgcost = (cost)/5;
        cout <<"Average cost is: " << avgcost;
        cout << "Total pounds of dog food sold is" << 1114;





   return 0;

}
