
#include <iostream>
#include <string>
using namespace std;

class LoyaltyCard {
private:
string customerName;
int stamps;
int totalFreeCofffees;

public:
// Constructor
LoyaltyCard(string customerName) {
this->customerName = customerName;
this->stamps = 0;
this->totalFreeCofffees = 0;
}

// Getter
int getStamps() {
return stamps;
}

void addStamp() {
stamps++;
cout << "Stamp added! [" << stamps << "/10] for " 
<< customerName << endl;

if (stamps == 10) {
totalFreeCofffees++;
cout<< "Congratulations ^_^" << customerName <<endl;
cout<< " You earned a free coffee! \n"; 
cout<< " (Total rewards earned: " << totalFreeCofffees << ")" << endl;
stamps = 0;
}
}
};

int main() {
LoyaltyCard card("Adiba");

cout << "=== Coffee Shop Loyalty Card ===" << endl;
cout << "Customer : " << "Adiba" << endl;
cout << "Stamps : " << card.getStamps() << "\n" << endl;

//1st cycle
cout << "--- First Card ---" << endl;
for (int i = 0; i < 10; i++) {
card.addStamp();
}
//2nd cycle
cout << "\n--- Second Card ---" << endl;
for (int i = 0; i < 10; i++) {
card.addStamp();
}

// Partial third cycle
cout << "\n--- Partial Third Card ---" << endl;
for (int i = 0; i < 4; i++) {
card.addStamp();
}

cout << "\nStamps currently on card: " << card.getStamps() << "/10" << endl;

return 0;
}
