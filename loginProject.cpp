#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool IsloggedIn()
{
    string username, password, pw, un;
    cout<< "Enter Username"; cin >> username;
    cout <<" Enter password"; cim >> password;
    fstream read("/home" + myfile + ".txt");
    getline(read, un);
    getline(read, pw)

    if (un==username && pw=password)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int choice;
    cout << "1: Regestration\n2: Login\nYour choice: "; cin >> choice;
    if (choice==1)
    {
        string username, password;

        cout<< "select a username: "; cin>> username;
        cout << "select password: "; cin >> password; 

        ofstream file;
        file("/home"+ username+ ".txt");

        file << username << endl <<password;
        file.close();

        main();

    }
    else if(choice==2)
    {
        bool status =IsloggedIn();

        if(!status)
        {
            cout << "False Login" << endl;
            system("PAUSE");
            return 0;
        }
        else
        {
            cout << "succesfully  loged in" << endl;
            system("PAUSE");
            return 1;
        }
    }
}