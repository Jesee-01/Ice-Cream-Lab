// Lab 3 icecream.cpp 
//This program will determine the set amount of  icecream cones sold for each
//type and how much money that perticular set made in dollars.It also calculates
//total cones sold and total money made from all three icecream cones

// Aramis Artiga
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{  
    // A mix between constant variables and necessary variable declarations
    double deLightful = 1.49, //Constant Variable
    num1,
    doubleDelightful = 2.49, // Constant Variable
    num2,
    tripleDelightful = 3.49, // Constant Variable
    num3,
    totalDelightful,
    totalDoubleDelightful,
    totalTripleDelightful,
    totalNumber,
    total;
    
    
 // The following tells the user the cost of each perticular cone
   cout << "The DeLIGHTful icecream is a single scoop with a $1.49 cost"<<endl;
   
   cout << "The double DeLIGHTful icecream is a double scoop with a $2.49 cost"
   << endl;
   
   cout << "The  triple DeLIGHTful icecream is a triple scoop with a $3.49 cost"
   << endl; 
   
   // The following asks the user to input total amount of cones sold for each
   //coresponding cone
   cout << "Enter the total number of single scoop cones sold today: "<<endl;
   cin >> num1;
   
   cout << "Enter the total number of double scoop cones sold today: "<<endl;
   cin >> num2;
   
   cout << "Enter the total number of triple scoop cones sold today: "<<endl;
   cin >> num3;
   
   // The following are all necessary formulas 
   totalDelightful = (num1 * deLightful);
   // Tracks cost of single scoop cone
   totalDoubleDelightful = ( num2 * doubleDelightful);
   //Tracks cost of double scoop cone
   totalTripleDelightful = ( num3 * tripleDelightful);
   // Tracks cost of triple scoop cone
 total=(totalDelightful + totalDoubleDelightful + totalTripleDelightful);
   // Tracks cost of all three cones sold combined
   totalNumber = ( num1 + num2 +num3);
   // Tracks number of total cones sold
   
   // Displays number of coresponding cones sold
   cout << "total number of single scoop cones sold: " << num1 << endl; 
   cout << "total number of double scoop cones sold: " << num2 << endl; 
   cout << "total number of triple scoop cones sold: " << num3 << endl; 
   
   // Displays number of coresponding cones sold and its fixed cost to the 
   // hundreth place
    
   cout << " DeLIGHTful cones " << num1 <<" $ "<< fixed 
   << setprecision(2) << totalDelightful << endl;
   
   cout << " Double DeLIGHTful cones " << num2 << " $ "<< fixed 
   << setprecision(2) << totalDoubleDelightful
   <<endl; 
   
   cout << " Triple DeLIGHTful cones " << num3 << " $ "<< fixed 
   << setprecision(2) << totalTripleDelightful <<endl;
   
   // Displays Total cones sold and total profit made to the hundreth's place
   cout << "Total " << totalNumber << " $ "<<fixed 
   << setprecision(2) << total << endl;
   
 
     
   return 0;
}
