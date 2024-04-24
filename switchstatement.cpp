#include <iostream>
#include <random> 
#include <ctime>   

using namespace std;

int main() {

    srand(time(0));
    
    int daysUntilExpiration = rand() % 12;

    switch(daysUntilExpiration) {
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        
        case 2:
            cout << "Your subscription expires in " << daysUntilExpiration << " days." << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
      case 3:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
    }
    
    return 0;
}
