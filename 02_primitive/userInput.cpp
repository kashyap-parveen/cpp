#include <iostream>
#include <string>

using namespace std;

int main (){
    
    string userTea;
    int teaQuantity;



    cout << "What would you like to order in tea ? \n";
    getline(cin, userTea);

    //ask for quantity

    cout << "How many cups required ? ";
    cin >> teaQuantity;

    cout << userTea;
    cout << teaQuantity;

return 0;
};