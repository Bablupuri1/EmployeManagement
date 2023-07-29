#include <iostream>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <string.h>
#include <iomanip>
#include <process.h>

using namespace std;

class employe
{
private:
    char name[20];
    int eid;
    char desi[20];
    int exp;
    int age;

public:
    // employe(char n[20], int id, char d[20], int e, int a)
    //{
    //    strcpy(name, n);
    //    eid=id;
    //    strcpy(desi, d);
    //    exp = e;
    //    age = a;
    // }
    // employe()
    // {
    //  strcpy(name, "noname");
    //  eid = 0;
    //  strcpy(desi, "d");
    //  exp = 0;
    // age = 0;
    // }
    char *getname()
    {
        return name;
    }
    char *getdes()
    {
        return desi;
    }
    int getexp()
    {
        return exp;
    }
    int gateage()
    {
        return age;
    }

    int geteid()
    {
        return eid;
    }
    // void setid(int eiid)
    // {
    //  eid = eiid;
    //}
    void setname(char *n)
    {
        strcpy(name, n);
    }

    // This function is use to read he data and accept all data following in member data//

    void getdata()
    {
        cout << "Enter student detauls:\n";
        cout << "Name Emp.     :  ";
        cin >> name;
        cout << "Emp ID.       :      ";
        cin >> eid;
        cout << "Emp DESI.     :  ";
        cin >> desi;
        cout << "EXP of EMP.   :  ";
        cin >> exp;
        cout << "Age EMP       :  ";
        cin >> age;
    }

    // The member function for using show search time 1 record at atime//

    void showinfo()
    {
        cout << "INFORMATION OF EMPLOYE\n";
        cout << "E_NAME   : " << name << endl;
        cout << "E_ID     : " << eid << endl;
        cout << "EMP_DESI : " << desi << endl;
        cout << "EMP_EXP  : " << exp << endl;
        cout << "EMP_AGE  : " << age << endl;
    }
    // The member function use to tabule from display record at all data in insert//

    void datalist()
    {
        cout << setw(10) << name;
        cout << setw(14) << eid;
        cout << setw(10) << desi;
        cout << setw(10) << exp;
        cout << setw(10) << age;
        cout << endl;
    }

    // The modify data into the table databse like emp id ,enp name//
    void modify()
    {
        cout << "\nEnter new data from employe;" << endl;
        cout << "...................................\n";
        cout << "EMP-ID:" << eid << endl;
        cout << "Name Emp.     :  ";
        cin >> name;
        cout << "Emp DESI.     :  ";
        cin >> desi;
        cout << "EXP of EMP.   :  ";
        cin >> exp;
        cout << "Age EMP       :  ";
        cin >> age;
    }
};

// function decelaration of prototype//

void menu();
void tableform();

// This function are decelared in the out of class of reason is //
// This function are not a need any value access of data member//
// then we will declare out of the class //
// and use directly normal functoin these//
// are not use object through acccess//

void menu()
{
    cout << "****************EMPLOYE MANAGEMENT SYSTEM*********\n";
    cout << "===============\n";
    cout << "===============\n\n";
    cout << "_PLEASE SELECT FROM OPTION ACCORDING TO YOUR NEED_\n\n\n";

    cout << "1.Insert new employe\n";
    cout << "2.Show all employe\n";
    cout << "3.search employe by EID\n";
    cout << "4.Search by EMP-NAME:\n";
    cout << "5.MODIFY THE RECORD THE DATA IN TABLE:" << endl;
    cout << "6. Exit program to the terminal to vs home page\n";
    cout << "7. Sorting employe details using by emp\n";
    cout << "Enter your choice:";
}

// This function are decelared in the out of class of reason is //
// This function are not a need any value access of data member//
// then we will declare out of the class //
// and use directly normal functoin these//
// are not use object through acccess//

void tableform()
{
    cout << "EMPLOYE RECORD\n";
    cout << ".........................................................\n";
    cout << setw(10) << "E_NAME";
    cout << setw(15) << "E_CODE";
    cout << setw(10) << "E_DESI";
    cout << setw(10) << "E_EXP";
    cout << setw(10) << "E_AGE\n";
    cout << "..........................................................\n";
}

//*****************************MAIN FUNCTION CODING AND ACCESS ALL MMEBER FUNCTION OF CLASS AND DATA MEMBER*******//

int main()
{

    // code for create user naame and pasword if user name and pasword then access all task perform//

    system("cls");
    string username;
    string pasword;
    string user;
    string pas;

    cout << "\n\n\tSign-up:" << endl;

    // input of user name and pasword//

    cout << "Enter user name:" << endl;
    cin >> username;
    cout << "Enter pasword:" << endl;
    cin >> pasword;

    // end take input of user name and pasword at create user//

    cout << "Your userid created please wait";
    for (int i = 0; i < 2; i++)
    {
        cout << ".";
        sleep(2);
    }
    cout << "\n\nYour id created successfully";

    system("cls");
start: // using strat for jumb goto//
    cout << "\n\n\n\t\t   LOGIN" << endl;

    //.........................................................
    // for input becouse matching the create time username and pasword then sucessfully
    // and access all task perform//

    cout << "\t\tEnter username: ";

    cin >> user;

    cout << "\t\tEnter password: ";

    cin >> pas;

    //.........................................................//

    if (user == username && pas == pasword)
    {
        cout << "\tyour userid matching please wait few second:" << endl;
        sleep(3);
        cout << "\t\tlogin successfully:";
        system("cls");
    }
    //.............................................................//

    else if (user != username)
    {
        cout << "Incorrect username";
        system("cls");
        goto start;
    }

    //.............................................................//
    else if (pas != pasword)
    {
        cout << "Incorect pasword:";
        system("cls");
        goto start;
    }
    //.............................................................//

    //**********************MENU DRIVE WORK FOR EMPLOYE MANAGEMENT**********//

    int size = 0;
    // int i;
    int id;
    int c = 0;
    char ename[20];
    employe s[10];
    employe temp;
    int i;
    int ch;
    do
    {
        system("cls");
        menu();
        cin >> ch;
        switch (ch)
        {
        case 1:
            s[size].getdata();
            size++;
            cout << "\nREcord saved sucessfully:";
            break;

        case 2:
            if (size > 0)
            {
                tableform();
                for (i = 0; i < size; i++)
                {
                    s[i].datalist();
                    cout << "..........................................................\n";
                }
            }
            else
            {
                cout << "\n There are no any record of employe..\n";
            }
            getch();
            break;

        case 3:
            if (size >= 0)
            {
                cout << "Enter EID search:";
                cin >> id;
                for (i = 0; i < size; i++)
                {
                    if (id == s[i].geteid())
                    {
                        s[i].showinfo();
                        //c++;
                    }
                }
            }
            else
            {
                cout << "\nDATA NOT DISPLAY BECOUSE DATA NOT INSERT MY DATA\n";
            }
            getch();
            break;

        case 4:
            if (size >= 0)
            {
                cout << "Enter EMP-NAME search:";
                cin >> ename;
                for (i = 0; i < size; i++)
                {
                    if (strcmpi(ename, s[i].getname()) == 0)
                    {
                        s[i].showinfo();
                    }
                    else
                    {
                        cout << "\n NO EMP-Name not FOUND........\n";
                    }
                }
            }

            else
            {
                cout << "\n NO RECORD.........\n";
            }
            //  if (c == 0)
            // {
            //     cout << "\n NO EMP-ID FOUND........\n";
            // }

            getch();
            break;

        case 5:
            system("cls");
            if (size >= 0)
            {
                cout << "Enter EMP id to modify:";
                cin >> id;
                for (i = 0; i < size; i++)
                {
                    if (id == s[i].geteid())
                    {
                        cout << "Following old data in the databse\n";
                        s[i].showinfo();
                        cout << "\nEnter New data for employe\n";
                        s[i].modify();
                        c++;
                    }
                }
            }
            else
            {
                cout << "\nNothing display record....\n";
            }
            if (c == 0)
            {
                cout << "\nThe employe id in not found in my databse.....\n";
            }
            break;

        case 6:
            system("cls");
            exit(0);
            system("cls");
            break;

        case 7:
            if (size >= 0)
            {
                cout << "sorting using emp id\n";
                for (i = 0; i < size; i++)
                {
                    for (int j = 0; j < size; j++)
                    {
                        if (s[j].geteid() > s[j + 1].geteid())
                        {
                            temp = s[j];
                            s[j] = s[j + 1];
                            s[j + 1] = temp;
                        }
                        // tableform();
                        // for (i = 0; i < size; i++)

                        //   s[i].datalist();
                    }
                }
                tableform();
                for (int j = 0; j < size; j++)
                {

                    s[i].datalist();
                }
            }
            getch();
            break;

            int r;
            int pos;
        case 8:
            if (size >= 0)
            {
                // cout<<"Enter delte specific position \n";
                cout << "enter the eid to record delete\n";
                cin >> r;

                for (i = 0; i < size; i++)
                {
                    if (s[i].geteid() == r)
                    {
                        cout << "Following record is deleted\n";
                        s[i].showinfo();
                        c++;
                        pos = i;
                        break;
                    }
                }
                for (i = pos; i < size; i++)
                {
                    s[i] = s[i + 1];
                }
                size--;
            }
            else
            {
                cout << "No display\n";
            }
            if (c == 0)
            {
                
            }

            getch();
            break;

        case 9:
            if (size >= 0)
            {
                for (i = 0; i < size; i++)
                {
                    size = 0;
                    cout << "no recorded here\n";
                }
            }
            break;
        }
    } while (ch);
    getch();
    return 0;
}