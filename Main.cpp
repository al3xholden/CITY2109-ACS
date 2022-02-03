#include <conio.h>
#include <iostream>
#include <windows.h>
#include <vector>
#include <functional>
#include <fstream>
#include <mutex>
#include <stdio.h>
#include "stopwatch.cpp"
//#import md5.h

using namespace std;
using namespace chrono;

// Observers (also known as listeners), in this case, are objects that implement the observer interface
class observer
{
public:
    virtual void notify() = 0;
};

// The subject class contains a vector of references to observers
class subject
{
public:
    void register_observer(observer& o) // The register_observer function adds observers to the vector, which are later to be notified by the notify_observers function.
    {
        observers.push_back(o);
    }
    void notify_observers()
    {
        for (observer& o : observers) {
            o.notify();
        }
    }
private:
    vector<reference_wrapper<observer>> observers;
};


struct CollegePeople 
{
public:
    string name = "";
    string IDCard = "";
    string CardType = "";

    void setName(string newName) { name = newName; } //Set name of a person
    string getIDCard() { return IDCard; };

};


class Log 
{
   //ofstream swipeLog ("Log.txt");
};


struct student : public CollegePeople // Structure for student role, extends from person class.
{
    string name;
    
};


struct staff_member : public CollegePeople // Structure for staff member role, extends from person class.
{

};


struct guest : public CollegePeople // Structure for guest / visitor role, extends from person class.
{

};


struct cleaner : public CollegePeople // Structure for cleaner role, extends from person class.
{

};


struct manager : public CollegePeople // Structure for manager role, extends from person class.
{

};


struct security : public CollegePeople // Structure for security role, extends from person class.
{

};


struct emergency_responder : public CollegePeople // Structure for emergency_responder role, extends from person class.
{

};

struct room
{
    //ofstream RoomList("RoomList.txt");

    string roomName = "";
    string roomID = "";
    string building = "";
    string roomState = "";


public:
    string room_state1 = "EMERGENCY";
    string room_state2 = "NORMAL";

};

struct roomState 
{
    string roomState;

    string getRoomState() { return roomState; };
};

// Structure for lecture_hall, extends from base room class
struct lecture_hall : public room 
{

};

// Structure for teaching_room, extends from base room class
struct teaching_room : public room 
{

};

// Structure for staff_room, extends from base room class
struct staff_room : public room 
{

};

// Structure for secure_room, extends from base room class
struct secure_room : public room 
{


};

// Login / System Security - Add MD5 encryption here
int login() {
    string pass = "";
    char ch;
    cout << "\n\n\n\n\n\n\n\n\t\t\t     ACCESS CONTROL SYSTEM \n\n";
    cout << "\t\t\t------------------------------";
    cout << "\n\t\t\t\t     LOGIN \n";
    cout << "\t\t\t------------------------------\n\n";
    cout << "\t\t\tEnter Password: ";
    ch = _getch();

    while (ch != 13) {
        pass.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if (pass == "admin") {
        cout << "\n\n\n\t\t\tAccess Granted! \n";
        system("CLS");
    }
    else {
        cout << "\n\n\t\t\tAccess denied\n\t\t\tPlease Try Again\n\n";
        system("PAUSE");
        system("CLS");
        login();
    }

    return 0;
};

// Initiate login before Main so that I can return to main without having to re-login.
// login_BeforeMain is fully functional. Deactivated for now for development / testing purposes.
class login_BeforeMain {

public:
    // Constructor of the class
    login_BeforeMain()
    {

        // Call the other function
        func();
    }

    // Function to get executed before main()
    void func()
    {
       // int login(); //----------------------------------------- Fully functional. Deactivated for now for development / testing purposes.
       // login();     //----------------------------------------- Fully functional. Deactivated for now for development / testing purposes.
    }
}; 

// Global variable to declare - the object of class login_BeforeMain
login_BeforeMain obj;


// What happens after login? = Below

int main()
{

    // MENU //
    int inputchoice = 0; // Menu choice - Default = 0
    cout << endl;
    cout << " 1 view and manage rooms. \n";
    cout << " 2 view and manage ID cards. \n";
    cout << " 3 simulate a card swipe. \n";
    cout << " 4 put a room in or out of emergency state.\n";
    cout << " 5 view swipe log.\n";
    cout << " 6 manage preferences.\n";
    cout << " 7 Close program.\n";
    cout << endl;
    cout << " Choice : ";
    cin >> inputchoice;
    cout << endl;

    if (inputchoice == 1)
    {
        int choice1();
        choice1();
    }

    if (inputchoice == 2)
    {
        int choice2();
        choice2();
    }

    if (inputchoice == 3)
    {
        int choice3();
        choice3();
    }

    if (inputchoice == 4)
    {
        int choice4();
        choice4();
    }

    if (inputchoice == 5)
    {
        int choice5();
        choice5();
    }

    if (inputchoice == 6)
    {
        int choice6();
        choice6();
    }

    if (inputchoice == 7)
    {
        cout << "Program closed.";
        system("exit");
    }

    // Error handling - If the user inputs a a value that's not 1-7.
    /*
    else  
    {
        cout << " Error! Please choose an existing option Press any key to continue.";
        cout << "\n";
        system("CLS");
        return main();
    }
    */

};

// choice1 - view and manage rooms
int choice1() // view and manage rooms
{
    system("CLS");
    cout << " | BUILDING       | ROOM ID | ROOM NAME     | ROOM STATE   " << endl;
    cout << " +================+=========+===============+=============\n";

    int inputchoice = 0; // Menu choice - Default = 0
    cout << endl;
    cout << " 1 Add a room. \n";
    cout << " 2 Edit or delete a room. \n";
    cout << " 3 Save room data. \n";
    cout << " 4 Reload rooms file.\n";
    cout << endl;
    cout << " Choice : ";
    cin >> inputchoice;
    cout << endl;

    //1 Add a room
    if(inputchoice==1) 
    {
        string buildingname;
        string roomname;
        int roomid = rand() % 5; // Generates a random 5 digit ID for the new room
        room A;
        
        A.roomID = roomid;

        // Settting room name
        cout << "You're about to create a new room. \n";
        cout << "Room Name? \n";
        cout << "...  ";  cin >> roomname;
        A.roomName = roomname;

        // Displaying room name
        cout << endl;
        cout << "Room name : " << A.roomName << ".\n";
        cout << "Press any key to continue. \n";
        _getch();

        // Settting building name
        cout << endl;
        cout << "Building name? \n";
        cout << "...  ";  cin >> buildingname;
        A.building = buildingname;
        
        // Displaying building name
        cout << endl;
        cout << "Building : " << A.building << ".\n";

        // Displaying room ID
        cout << endl;
        cout << "Room ID = " << A.roomID << ".\n";

        cout << "Press any key to create a new room called '" << A.roomName << "' in building '" << A.building << "' with the room ID '" << A.roomID << "'\n";
        _getch();

        ofstream Log;
        Log.open("RoomList.txt", fstream::app);
        Log << "\n" << A.roomID << " | " << A.building << " | " << A.roomName << endl;
        Log.close();
        
 
        return choice1();


        
   
    
    }

    // 2 Edit or delete a room
    if (inputchoice == 2)
    {
        cout << "hellooo";

    }

    // 3 Save room data
    if (inputchoice == 3)
    {
        cout << "hellooo";

    }

    // 4 Reload rooms file
    if (inputchoice == 4)
    {
        cout << "hellooo";

    }

    return 0;
}

// choice2 - view and manage ID cards
int choice2() // view and manage rooms
{
    system("CLS");
    cout << " | CARD ID   | NAME          | CARD TYPE     " << endl;
    cout << " ============+===============+===============\n";



    return 0;
}

// choice3 - simulate a card swipe
int choice3() // view and manage rooms
{
    return 0;
}

// choice4 - put a room in or out of emergency state
int choice4() // view and manage rooms
{
    int buildingID;
    cout << "Please type in the building ID \n";
    cin >> buildingID;

    cout << "Please type in the building ID \n";

    int inputchoice = 0; // Menu choice - Default = 0
    cout << "Please choose a room mode. \n";
    cout << "1 = EMERGENCY \n";
    cout << "2 = NORMAL \n";
    cout << endl;
    cout << " Choice : ";
    cin >> inputchoice;
    cout << endl;

    if (inputchoice == 1) {  }

    return 0;
}

// choice5 - view swipe log
int choice5() // view and manage rooms
{
    return 0;
}

// choice6 - manage preferences
int choice6() // view and manage rooms
{
    return 0;
}

