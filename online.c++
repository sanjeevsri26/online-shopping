#include <iostream>
using namespace std;

float onlineShopping(); // Function declaration

int main() {
    char startvalue;
    char choiceAgain;

    startLevel:
    cout << "Please press s to start shopping" << endl;

    start:
    cin >> startvalue;

    if (startvalue == 's' || startvalue == 'S') {
        float totalAmount = onlineShopping();
        cout << "Total bill amount: " << totalAmount << endl;

        shoppingAgain:
        cout << "Do you want to shop again? (y/n)" << endl;
        cin >> choiceAgain;

        if (choiceAgain == 'Y' || choiceAgain == 'y') {
            goto startLevel;
        } else if (choiceAgain == 'N' || choiceAgain == 'n') {
            cout << "Thanks for shopping!";
        } else {
            cout << "You have entered a wrong option, please try again." << endl;
            goto shoppingAgain;
        }

    } else {
        cout << "You have entered a wrong option, please press s." << endl;
        goto start;
    }

    return 0;
}

float onlineShopping() {
    char choice;
    char item;
    float billAmount = 0;
    int quantity;

    cout << "<============WELCOME TO ONLINE SHOPPING=============>" << endl;
    cout << "<===========PLEASE FOLLOW THE INSTRUCTION============>" << endl;
    cout << "<===================================================>" << endl;
    cout << "| (1) PLEASE ENTER M TO ORDER MOBILE               |" << endl;
    cout << "| (2) PLEASE ENTER L TO ORDER LAPTOP               |" << endl;
    cout << "| (3) PLEASE ENTER H TO ORDER HEADPHONE            |" << endl;
    cout << "| (4) PLEASE ENTER P TO ORDER BOOKS                |" << endl;
    cout << "| (5) PLEASE ENTER B TO ORDER BAGS                 |" << endl;
    cout << "<===================================================>" << endl;

    cin >> choice;

    if (choice == 'm' || choice == 'M') {
        mobileLevel:
        cout << "Mobile Details" << endl;
        cout << "<=================================>" << endl;
        cout << "| (1) Redmi -> price: 1000        |" << endl;
        cout << "| (2) Vivo -> price: 2000         |" << endl;
        cout << "| (3) Realme -> price: 3000       |" << endl;
        cout << "| (4) Apple -> price: 4000        |" << endl;
        cout << "| (5) Oppo -> price: 5000         |" << endl;
        cout << "<=================================>" << endl;

        cin >> item;

        // Set price based on selected mobile
        float price = 0;
        switch (item) {
            case '1': price = 1000; break;
            case '2': price = 2000; break;
            case '3': price = 3000; break;
            case '4': price = 4000; break;
            case '5': price = 5000; break;
            default:
                cout << "You have entered a wrong option, try again." << endl;
                goto mobileLevel;
        }

        cout << "Enter quantity: ";
        cin >> quantity;
        billAmount += (quantity * price);
    } 
    else if (choice == 'l' || choice == 'L') {
        laptopLevel:
        cout << "Laptop Details" << endl;
        cout << "<=================================>" << endl;
        cout << "| (1) HP -> price: 20000         |" << endl;
        cout << "| (2) Dell -> price: 30000       |" << endl;
        cout << "| (3) Lenovo -> price: 25000     |" << endl;
        cout << "| (4) Apple -> price: 50000      |" << endl;
        cout << "| (5) Asus -> price: 27000       |" << endl;
        cout << "<=================================>" << endl;

        cin >> item;

        // Set price based on selected laptop
        float price = 0;
        switch (item) {
            case '1': price = 20000; break;
            case '2': price = 30000; break;
            case '3': price = 25000; break;
            case '4': price = 50000; break;
            case '5': price = 27000; break;
            default:
                cout << "You have entered a wrong option, try again." << endl;
                goto laptopLevel;
        }

        cout << "Enter quantity: ";
        cin >> quantity;
        billAmount += (quantity * price);
    } 
    else if (choice == 'h' || choice == 'H') {
        headphoneLevel:
        cout << "Headphone Details" << endl;
        cout << "<=================================>" << endl;
        cout << "| (1) Boat -> price: 1500        |" << endl;
        cout << "| (2) JBL -> price: 2000         |" << endl;
        cout << "| (3) Sony -> price: 3500        |" << endl;
        cout << "| (4) Bose -> price: 5000        |" << endl;
        cout << "| (5) Sennheiser -> price: 4500  |" << endl;
        cout << "<=================================>" << endl;

        cin >> item;

        // Set price based on selected headphone
        float price = 0;
        switch (item) {
            case '1': price = 1500; break;
            case '2': price = 2000; break;
            case '3': price = 3500; break;
            case '4': price = 5000; break;
            case '5': price = 4500; break;
            default:
                cout << "You have entered a wrong option, try again." << endl;
                goto headphoneLevel;
        }

        cout << "Enter quantity: ";
        cin >> quantity;
        billAmount += (quantity * price);
    } 
    else if (choice == 'p' || choice == 'P') {
        bookLevel:
        cout << "Book Details" << endl;
        cout << "<=================================>" << endl;
        cout << "| (1) Fiction -> price: 500      |" << endl;
        cout << "| (2) Non-Fiction -> price: 700  |" << endl;
        cout << "| (3) Educational -> price: 1000 |" << endl;
        cout << "| (4) Mystery -> price: 600      |" << endl;
        cout << "| (5) Fantasy -> price: 800      |" << endl;
        cout << "<=================================>" << endl;

        cin >> item;

        // Set price based on selected book
        float price = 0;
        switch (item) {
            case '1': price = 500; break;
            case '2': price = 700; break;
            case '3': price = 1000; break;
            case '4': price = 600; break;
            case '5': price = 800; break;
            default:
                cout << "You have entered a wrong option, try again." << endl;
                goto bookLevel;
        }

        cout << "Enter quantity: ";
        cin >> quantity;
        billAmount += (quantity * price);
    } 
    else if (choice == 'b' || choice == 'B') {
        bagLevel:
        cout << "Bag Details" << endl;
        cout << "<=================================>" << endl;
        cout << "| (1) Backpack -> price: 1500    |" << endl;
        cout << "| (2) Handbag -> price: 2000     |" << endl;
        cout << "| (3) Suitcase -> price: 3000    |" << endl;
        cout << "| (4) Laptop Bag -> price: 2500  |" << endl;
        cout << "| (5) Travel Bag -> price: 3500  |" << endl;
        cout << "<=================================>" << endl;

        cin >> item;

        // Set price based on selected bag
        float price = 0;
        switch (item) {
            case '1': price = 1500; break;
            case '2': price = 2000; break;
            case '3': price = 3000; break;
            case '4': price = 2500; break;
            case '5': price = 3500; break;
            default:
                cout << "You have entered a wrong option, try again." << endl;
                goto bagLevel;
        }

        cout << "Enter quantity: ";
        cin >> quantity;
        billAmount += (quantity * price);
    }

    return billAmount;
}
