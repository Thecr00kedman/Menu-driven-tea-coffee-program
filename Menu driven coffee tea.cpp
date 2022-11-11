#include <iostream>
using namespace std;
int main()
{
    char ch;
    int choice;
    int gender;
    cout << "Please enter your choice" << endl << "1. Coffee" << endl << "2.tea" << endl;
    cin >> choice;
    {
        cout << "Please select your gender" << endl << "1.male" << endl << "2.female" << endl;
        cin >> gender;


        if (choice == 1)
        {

            {
                if (gender == 1) {
                    cout << "Please enjoy Your Coffee sir";
                }
                else if (gender == 2) {
                    cout << "Please Enjoy You coffee mam";
                }
                else
                {
                    cout << "please select the correct option";
                    cin >> gender;
                }

            }
        }
        else if (choice == 2)
        {

            if (gender == 1)
            {
                cout << "Please enjoy Your tea sir";
            }

            else if (gender == 2)
            {
                cout << "Please Enjoy You tea mam";

            }
            else
            {
                cout << "please select the correct option";
            }
        }
        else
        {
            cout << "Would you like to order something else?" << endl << endl << 'y' << endl << 'n';
            cin >> ch;

            if (ch == 'y')
            {
                cout << "Please enter your choice" << endl << "1. Coffee" << endl << "2.tea" << endl;
                cin >> choice;
                cout << "Please select your gender" << endl << "1.male" << endl << "2.female" << endl;
                cin >> gender;



            }
            else if (ch == 'n')
            {
                if (gender == 1)
                {
                    cout << "Thanks for choosing us sir.";

                }
                else if (gender == 2) {
                    cout << "thanks for choosing us mam.";
                }
                else {
                    cout << "Please select the correct option.";
                    cin >> gender;
                    return 0;
                }
            }

            else 
            {
                if (ch == 'n', 'y') {
                    cout << "Please select the correct option";
                    cin >> ch;
                 
                  
                }
              
            }
        }
    }
}

