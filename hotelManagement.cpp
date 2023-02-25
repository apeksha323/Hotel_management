#include <iostream>
using namespace std;

int main()
{
    int quant, choice, Total_rooms;
    // Available rooms
    int Arooms = 0, Afirst = 0, Asecond = 0, Athird = 0, Afourth = 0, Afifth = 0;
    // Sold rooms
    int Srooms = 0, Sfirst = 0, Ssecond = 0, Sthird = 0, Sfourth = 0, Sfifth = 0;
    // Manage rooms
    int Manage_rooms = 0, Manage_roomsfirst = 0, Manage_roomsecond = 0, Manage_roomthird = 0, Manage_roomfourth = 0, Manage_roomfifth = 0;

    // This has to be filled by the owner of the hotel
    cout << "\n\t Total rooms we have ";
    cout << "\n Total rooms:";
    cin >> Arooms;
    cout << "\n Available rooms in first floor :";
    cin >> Afirst;
    cout << "\n Available rooms in second floor :";
    cin >> Asecond;
    cout << "\n Available rooms in third floor :";
    cin >> Athird;
    cout << "\n Available rooms in fourth floor :";
    cin >> Afourth;
    cout << "\n Available rooms in fiveth floor :";
    cin >> Afifth;

    cout << "\n\n\t Sold rooms we have ";
    cout << "\n Sold rooms:";
    cin >> Srooms;
    cout << "\n Sold rooms in first floor :";
    cin >> Sfirst;
    cout << "\n Sold rooms in second floor :";
    cin >> Ssecond;
    cout << "\n Sold rooms in third floor :";
    cin >> Sthird;
    cout << "\n Sold rooms in fourth floor :";
    cin >> Sfourth;
    cout << "\n Sold rooms in fiveth floor :";
    cin >> Sfifth;

    // This has to be filled by the customers
    cout << "\n\t\t\t Please select the floor in which you want the room from the list ";
    cout << "\n\nPress 1 for first floor";
    cout << "\n\nPress 2 for second floor";
    cout << "\n\nPress 3 for third floor";
    cout << "\n\nPress 4 for fourth floor";
    cout << "\n\nPress 5 for fifth floor";

    cout << "\n\n Please Enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "\n\n Enter the no. of rooms you want in first floor:  ";
        cin >> quant;

        if (Afirst - Sfirst >= quant)
        {
            Sfirst = Sfirst + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
            cout << "\n\t\t\t Please select which service you want..??";
            cout << "\n\nPress 1 for AC - Rooms";
            cout << "\nPress 2 for Non-AC Rooms";
            cout << "\nPress 3 for Room Service";
            cout << "\nPress 4 for Hotel cab";
            cout << "\nPress 5 for Exit";

            cout << "\n\n Please Enter your choice ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\n\n AC rooms have been alloted to you!";
                break;
            case 2:
                cout << "\n\n Non-AC rooms have been alloted to you!";
                break;
            case 3:
                cout << "\n\n Room Service have been provided to you";
                break;
            case 4:
                cout << "\n\n Hotel cab have been provided to you";
                break;
            default:
                cout << "\n\n THANKYOU";
            }
            break;
        }
        else
        {
            cout << "\n\nWe prefer you to take room in the second floor..!!!";
            break;
        }
        break;
    case 2:
        cout << "\n\n Enter the no. of rooms you want in second floor:  ";
        cin >> quant;

        if (Asecond - Ssecond >= quant)
        {
            Ssecond = Ssecond + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
            cout << "\n\t\t\t Please select which service you want..??";
            cout << "\n\nPress 1 for AC - Rooms";
            cout << "\nPress 2 for Non-AC Rooms";
            cout << "\nPress 3 for Room Service";
            cout << "\nPress 4 for Hotel cab";
            cout << "\nPress 5 for Exit";

            cout << "\n\n Please Enter your choice ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\n\n AC rooms have been alloted to you!";
                break;
            case 2:
                cout << "\n\n Non-AC rooms have been alloted to you!";
                break;
            case 3:
                cout << "\n\n Room Service have been provided to you";
                break;
            case 4:
                cout << "\n\n Hotel cab have been provided to you";
                break;
            default:
                cout << "\n\n THANKYOU";
            }
            break;
        }
        else
        {
            cout << "\n\nWe prefer you to take room in the third floor..!!!";
            break;
        }
        break;
    case 3:
        cout << "\n\n Enter the no. of rooms you want in third floor:  ";
        cin >> quant;

        if (Athird - Sthird >= quant)
        {
            Sthird = Sthird + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
            cout << "\n\t\t\t Please select which service you want..??";
            cout << "\n\nPress 1 for AC - Rooms";
            cout << "\nPress 2 for Non-AC Rooms";
            cout << "\nPress 3 for Room Service";
            cout << "\nPress 4 for Hotel cab";
            cout << "\nPress 5 for Exit";

            cout << "\n\n Please Enter your choice ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\n\n AC rooms have been alloted to you!";
                break;
            case 2:
                cout << "\n\n Non-AC rooms have been alloted to you!";
                break;
            case 3:
                cout << "\n\n Room Service have been provided to you";
                break;
            case 4:
                cout << "\n\n Hotel cab have been provided to you";
                break;
            default:
                cout << "\n\n THANKYOU";
            }
            break;
        }
        else
        {
            cout << "\n\nWe prefer you to take room in the fourth floor..!!!";
            break;
        }
        break;
    case 4:
        cout << "\n\n Enter the no. of rooms you want in fourth floor:  ";
        cin >> quant;

        if (Afourth - Sfourth >= quant)
        {
            Sfourth = Sfourth + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
            cout << "\n\t\t\t Please select which service you want..??";
            cout << "\n\nPress 1 for AC - Rooms";
            cout << "\nPress 2 for Non-AC Rooms";
            cout << "\nPress 3 for Room Service";
            cout << "\nPress 4 for Hotel cab";
            cout << "\nPress 5 for Exit";

            cout << "\n\n Please Enter your choice ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\n\n AC rooms have been alloted to you!";
                break;
            case 2:
                cout << "\n\n Non-AC rooms have been alloted to you!";
                break;
            case 3:
                cout << "\n\n Room Service have been provided to you";
                break;
            case 4:
                cout << "\n\n Hotel cab have been provided to you";
                break;
            default:
                cout << "\n\n THANKYOU";
            }
            break;
        }
        else
        {
            cout << "\n\nWe prefer you to take room in the fourth floor..!!!";
            break;
        }
        break;
    case 5:
        cout << "\n\n Enter the no. of rooms you want in fifth floor:  ";
        cin >> quant;

        if (Afifth - Sfifth >= quant)
        {
            Sfifth = Sfifth + quant;
            Total_rooms = Total_rooms + quant * 1200;
            cout << "\n\n\t\t" << quant << "room/rooms have been alloted to you!";
            cout << "\n\t\t\t Please select which service you want..??";
            cout << "\n\nPress 1 for AC - Rooms";
            cout << "\nPress 2 for Non-AC Rooms";
            cout << "\nPress 3 for Room Service";
            cout << "\nPress 4 for Hotel cab";
            cout << "\nPress 5 for Exit";

            cout << "\n\n Please Enter your choice ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "\n\n AC rooms have been alloted to you!";
                break;
            case 2:
                cout << "\n\n Non-AC rooms have been alloted to you!";
                break;
            case 3:
                cout << "\n\n Room Service have been provided to you";
                break;
            case 4:
                cout << "\n\n Hotel cab have been provided to you";
                break;
            default:
                cout << "\n\n THANKYOU";
            }
            break;
        }
        else
        {
            cout << "\n\nSo Sorry!!!We don't have any rooms in our hotel";
            break;
        }
    
    }
    return 0;
}
