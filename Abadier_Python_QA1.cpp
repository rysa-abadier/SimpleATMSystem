#include <iostream>

using namespace std;

void headings(int opt);

int main()

{
    int sel, opt;
    string userID, pw, check_userID, check_pw;
    char c_up;
    bool menu1, menu2, retry, acc;
    float bal = 1000.00, dep, wit;

    headings(1);

    cout << "   Welcome, dear customer!" << endl;
    cout << "\n   Please enter the number of your selection." << endl;
    cout << "        (1) Register an account\n        (2) Login to your account\n        (3) Exit program" << endl;
    cout << "   You have selected: ";
    cin >> sel;

        switch (sel){
            case 1:
                system("cls");
                headings(1);

                cout << "\n--- Register an account ---" << endl;

                cout << "\nGreetings to our new customer! Thank you for choosing our bank." << endl;

                do{
                    cout << "\nPlease enter your details below." << endl;
                    cout << "     User ID: ";
                    getline(cin >> ws, userID);
                    cout << "     Password: ";
                    cin >> pw;

                    cout << "\nAre the details below correct?" << endl;
                    cout << "     User ID: " << userID <<endl;
                    cout << "     Password: " << pw << endl;

                    cout << "\nConfirm User ID and Password?" <<endl;
                    cout << "[Enter 'Y' to confirm | Enter 'N' to input another User ID] -> ";
                    cin >> c_up;

                    if (c_up == 'y' || c_up == 'Y'){
                        cout << "\nYou have successfully made an account! Proceed to login.\n" << endl;
                        menu1 = true;
                        acc = true;
                    }
                } while (c_up == 'n' || c_up == 'N');

                if (menu1){
                    cout << "Proceed to:" << endl;
                    cout << "     (2) Login to your account\n     (3) Exit program" << endl;
                    cout << "You have selected: ";
                    cin >> sel;
                }
            break;
        }

        switch (sel){
            case 2:
                if (acc){
                cout << "\n--- Login ---" << endl;

                do {
                    cout << "\nPlease input your details below." << endl;
                    cout << "     User ID: ";
                    cin >> check_userID;
                    cout << "     Password: ";
                    cin >> check_pw;

                    if (check_userID == userID && check_pw == pw){
                        retry = false;
                        cout << "\nYou have successfully logged in!" << endl;

                        cout << "\nWhat would you like to do? Please enter the number of your selection." << endl;
                        cout << "     (1) Check balance\n     (2) Deposit money\n     (3) Withdraw money\n     (4) Logout account" << endl;
                        cout << "You have selected: ";
                        cin >> opt;

                        switch (opt){
                            case 1:
                                cout << "\n--- Balance ---" << endl;

                                cout << "\nYou currently have " << bal << " Jewels." << endl;

                                cout << "\nWhat would you like to do next?" << endl;
                                menu2 = true;

                                if (menu2){
                                    cout << "\nWhat would you like to do? Please enter the number of your selection." << endl;
                                    cout << "     (1) Check balance\n     (2) Deposit money\n     (3) Withdraw money\n     (4) Logout account" << endl;
                                    cout << "You have selected: ";
                                    cin >> opt;
                                }

                            break;
                        }

                        switch (opt){
                            case 2:
                                cout << "\n--- Deposit ---" << endl;

                                cout << "\nHow much Jewels do you wish to deposit?" << endl;

                                cout << "\nDeposited money: ";
                                cin >> dep;

                                bal = bal + dep;
                                cout << "Current balance: " << bal << " Jewels." << endl;

                                cout << "\nWhat would you like to do next?" << endl;
                                menu2 = true;

                                if (menu2){
                                    cout << "\nWhat would you like to do? Please enter the number of your selection." << endl;
                                    cout << "     (1) Check balance\n     (2) Deposit money\n     (3) Withdraw money\n     (4) Logout account" << endl;
                                    cout << "You have selected: ";
                                    cin >> opt;
                                }

                            break;
                        }

                        switch (opt){
                            case 3:
                                cout << "\n--- Withdrawal ---" << endl;

                                cout << "\nHow much Jewels do you wish to withdraw?" << endl;

                                cout << "Withdrawn money: ";
                                cin >> wit;

                                bal = bal - wit;

                                if (bal < bal - wit){
                                    cout << "\nI'm sorry but you don't have enough Jewels to withdraw." << endl;
                                } else {
                                    cout << "\nCurrent balance: " << bal << " Jewels." << endl;
                                }

                                cout << "\nWhat would you like to do next?" << endl;
                                menu2 = true;

                                if (menu2){
                                    cout << "\nWhat would you like to do? Please enter the number of your selection." << endl;
                                    cout << "     (1) Check balance\n     (2) Deposit money\n     (3) Withdraw money\n     (4) Logout account" << endl;
                                    cout << "You have selected: ";
                                    cin >> opt;
                                }

                            break;
                        }

                        switch (opt){
                            case 4:
                                cout << "\n--- Logout ---" << endl;

                                cout << "\nYou have successfully logged out of your account. Thank you for using CIIT SHS | ARC Bankings!" << endl;

                            break;

                            default:
                                cout << "\nPlease choose among the given numbers only. Thank you!" << endl;
                                menu2 = true;

                            break;
                        }
                    } else {
                        cout << "\nPlease try again." << endl;
                        retry = true;
                    }
                } while (retry);
                } else {
                    cout << "\nPlease create an account first." << endl;

                    break;
                }

            break;

            case 3:
                cout << "\n--- Exit ---" << endl;

                cout << "\nExiting the program. Thank you for choosing CIIT SHS | ARC Bankings!" << endl;

            break;

            default:
                cout << "\nPlease choose among the given numbers only. Thank you!\n" << endl;
            break;
        }

    return 0;
}

void headings(int opt){
    switch(opt){
        case 1:
            cout << "\t\t\t\t\t        ---------------------------" << endl;
            cout << "\t\t\t\t\t       |   CIIT SHS ARC BANKINGS   |" << endl;
            cout << "\t\t\t\t\t        ---------------------------" << endl;
            cout << "\t\t\t\t       --- 'The rise of a new era of banking.' ---" << endl;
        break;

        case 2:

        break;
    }
}
