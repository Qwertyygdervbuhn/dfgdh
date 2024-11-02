#include <iostream>
using namespace std;

class Overcoat {
private:
    string type;
    double price;

public:
    Overcoat(string t = "Unknown", double p = 0.0) {
        type = t;
        price = p;
    }

    bool operator==(Overcoat& other) {
        return type == other.type;
    }

    Overcoat& operator=(Overcoat& other) {
        type = other.type;
        price = other.price;
        return *this;
    }

    bool operator>(Overcoat& other) {
        return price > other.price;
    }

    void show() {
        cout << "Type: " << type << ", Price: $" << price << endl;
    }
};

int main() {
    Overcoat coat1("Jacket", 100.0);
    Overcoat coat2("Jacket", 150.0);
    Overcoat coat3;

    if (coat1 == coat2) {
        cout << "coat1 and coat2 are of the same type." << endl;
    }

    coat3 = coat1;
    cout << "coat3 after assignment: ";
    coat3.show();

    if (coat2 > coat1) {
        cout << "coat2 is more expensive than coat1." << endl;
    }

}
