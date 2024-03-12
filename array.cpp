#include <iostream>
#include <string>

using namespace std;

struct Product {
    string name;
    int quantity;
};

class InventoryManagementSystem {
private:
    static const int MAX_PRODUCTS = 100; // Maximum number of products
    Product inventory[MAX_PRODUCTS]; // Array to store products
    int numProducts; // Number of products currently in inventory

public:
    InventoryManagementSystem() : numProducts(0) {}

    void addProduct(const string& productName, int quantity) {
        if (numProducts < MAX_PRODUCTS) {
            inventory[numProducts++] ={productName, quantity};
        } else {
            cout << "Error: Maximum number of products reached." << endl;
        }
    }

    void updateQuantity(const string& productName, int newQuantity) {
        for (int i = 0; i < numProducts; ++i) {
            if (inventory[i].name == productName) {
                inventory[i].quantity = newQuantity;
                return;
            }
        }
        cout << "Product '" << productName << "' not found in inventory." << endl;
    }

    void displayInventory() {
        cout << "Current Inventory:" << endl;
        for (int i = 0; i < numProducts; ++i) {
            cout << inventory[i].name << ": " << inventory[i].quantity << endl;
        }
    }

    void alertLowStock(int threshold) {
        cout << "Alert: The following products are running low on stock:" << endl;
        for (int i = 0; i < numProducts; ++i) {
            if (inventory[i].quantity < threshold) {
                cout << inventory[i].name << endl;
            }
        }
    }
};

int main() {
    InventoryManagementSystem inventorySystem;

    inventorySystem.addProduct("Apple", 50);
    inventorySystem.addProduct("Banana", 30);
    inventorySystem.addProduct("Orange", 20);

    inventorySystem.displayInventory();

    inventorySystem.updateQuantity("Banana", 25);
    inventorySystem.updateQuantity("Grapes", 10); // This should print "Product 'Grapes' not found in inventory."

    inventorySystem.displayInventory();

    inventorySystem.alertLowStock(30);

    return 0;
}
