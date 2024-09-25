#include <iostream>
#include <string>

using namespace std;

int main (){
    int cups;
    double pricePerCup, discountedPrice;

    float totalPrice;


    cout << "enter the number of tea cups \n";
    cin >> cups;

    cout << "enter the price per cup \n";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // given the 5% discount

    if (totalPrice >= 100){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Your Final Value after discounted " << discountedPrice << endl;
    } else{
        cout << "Your Final Value is  " << totalPrice << endl;

    }

    /*
     cout << "your amount is " << totalPrice << endl;
    
    if (totalPrice > 100)
    {
        cout << "20 se bada hai" << totalPrice << endl;
    } else{

        cout << "20 se chhota hai" << totalPrice << endl;
    }
    cout << totalPrice;
    */
    
    return 0;
};