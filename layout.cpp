#include <iostream>
#include <stdlib.h>
using namespace std;

class origin{
public:
    friend inline void ground_floor();
    static inline void first_floor(){
        cout<<"                                                First Floor:-       "<<endl;
        cout<<"                                      ______________________________ "<<endl;
        cout<<"                                     /\\                             \\"<<endl;
        cout<<"                                    /  \\        Crossword            \\"<<endl;
        cout<<"                                   /    \\_______________________      \\   "<<endl;
        cout<<"                                  /     / _____________________ \\      \\    "<<endl;
        cout<<"                                 /  C  / /                     \\ \\      \\     "<<endl;
        cout<<"                                /  R  / /                       \\ \\______\\     "<<endl;
        cout<<"                                \\  O  \\ \\                       / /      /      "<<endl;
        cout<<"                                 \\  M  \\ \\_____________________/ /      /      "<<endl;
        cout<<"                                  \\  A  \\_______________________/      /     "<<endl;
        cout<<"                                   \\    /                             /    "<<endl;
        cout<<"                                    \\  /            Nike             /   "<<endl;
        cout<<"                                     \\/_____________________________/  "<<endl;
    }
    inline void second_floor(){
        cout<<"                                               Second Floor:-       "<<endl;
        cout<<"                                      _____________________________ "<<endl;
        cout<<"                                     /                            /\\"<<endl;
        cout<<"                                    /          Arcade            /  \\"<<endl;
        cout<<"                                   /     _______________________/    \\   "<<endl;
        cout<<"                                  /  A  / _____________________ \\  H  \\    "<<endl;
        cout<<"                                 /  R  / /                     \\ \\  a  \\     "<<endl;
        cout<<"                                /  C  / /                       \\ \\  m  \\     "<<endl;
        cout<<"                                \\  A  \\ \\                       / /  l  /      "<<endl;
        cout<<"                                 \\  D  \\ \\_____________________/ /  e  /      "<<endl;
        cout<<"                                  \\  E  \\_______________________/  y' /     "<<endl;
        cout<<"                                   \\                            \\ s  /    "<<endl;
        cout<<"                                    \\          Arcade            \\  /   "<<endl;
        cout<<"                                     \\____________________________\\/  "<<endl;
    }
    friend inline void third_floor();
};

inline void ground_floor(){
    cout<<"                                                 Groud Floor:-           "<<endl;
    cout<<"                                      _________________________________"<<endl;
    cout<<"                                     /\\           Lenskart            /\\"<<endl;
    cout<<"                                    /  \\-----------------------------/  \\"<<endl;
    cout<<"                                   /    \\                                \\"<<endl;
    cout<<"                                  /      \\                                \\"<<endl;
    cout<<"                                 /  M     \\                                ----------- "<<endl;
    cout<<"                                /    A     \\                                Security   "<<endl;
    cout<<"                                \\     X    /                                Check-in   "<<endl;
    cout<<"                                 \\     X  /                                ------------"<<endl;
    cout<<"                                  \\      /                                /            "<<endl;
    cout<<"                                   \\    /________________________________/"<<endl;
    cout<<"                                    \\  /         World of Watches       /"<<endl;
    cout<<"                                     \\/________________________________/"<<endl;
}

inline void third_floor(){
    cout<<"                                                Third Floor:-        "<<endl;
    cout<<"                                      _____________________________ "<<endl;
    cout<<"                                     /\\                           /\\"<<endl;
    cout<<"                                    /  \\           4             /  \\"<<endl;
    cout<<"                                   /    \\_______________________/    \\   "<<endl;
    cout<<"                                  /  C  / _____________________ \\  3  \\    "<<endl;
    cout<<"                                 /  I  / /                     \\ \\     \\     "<<endl;
    cout<<"                                /  N  / /                       \\ \\_____\\     "<<endl;
    cout<<"                                \\  E  \\ \\                       / /     /      "<<endl;
    cout<<"                                 \\  M  \\ \\_____________________/ /     /      "<<endl;
    cout<<"                                  \\  A  \\_______________________/  2  /     "<<endl;
    cout<<"                                   \\    /                       \\    /    "<<endl;
    cout<<"                                    \\  /           1             \\  /   "<<endl;
    cout<<"                                     \\/___________________________\\/  "<<endl;
    cout<<"                                                  "<<endl;

    cout<<"                                      _____________________________ "<<endl;
    cout<<"                                     /                            /\\"<<endl;
    cout<<"                                    /        Mc Donald's         /  \\"<<endl;
    cout<<"                                   /     _______________________/    \\   "<<endl;
    cout<<"                                  /     / _____________________ \\     \\    "<<endl;
    cout<<"                                 /     / /                     \\ \\     \\     "<<endl;
    cout<<"                                /_____/ /                       \\ \\  K  \\     "<<endl;
    cout<<"                                \\     \\ \\                       / / F   /      "<<endl;
    cout<<"                                 \\     \\ \\_____________________/ / C   /      "<<endl;
    cout<<"                                  \\     \\_______________________/     /     "<<endl;
    cout<<"                                   \\                            \\    /    "<<endl;
    cout<<"                                    \\          Keventers         \\  /   "<<endl;
    cout<<"                                     \\____________________________\\/  "<<endl;
    cout<<"                                                  "<<endl;
}

int main(void){
    origin lemon; cout<<endl;
    ground_floor(); cout<<endl;
    origin::first_floor(); cout<<endl;
    lemon.second_floor(); cout<<endl;
    third_floor(); cout<<endl;
}
