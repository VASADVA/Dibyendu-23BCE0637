#include <iostream>
#include <time.h>
#include <ctime>

using namespace std;
string ask5="Yes";
class welcome
{
    public:
        void display_time(){
        cout<<"Welcome to WORLD OF WATCHES"<<endl;
        time_t currentTime = time(nullptr);
        tm* localTime = localtime(&currentTime);
        cout<< "Current time: "
        << localTime->tm_hour << ":"
        << localTime->tm_min << ":"
        << localTime->tm_sec <<endl;};
};
class watch
{
    public:
        string ask1,ask2;
        int sum=0;
        void bill()
        {
            cout<<"You Total Bill is:"<<sum<<endl;
        }
        void brands()
        {
            string table[5][5]={
            {"SR.No","\t","BRANDS","\t","    RANGE"},
            {" 1","\t","G-SHOCK","\t"," Rs. 2200-4200"},
            {" 2","\t","FOSSIL","\t"," Rs. 2700-6000"},
            {" 3","\t","TITAN","\t"," Rs. 1200-7200"},
            {" 4","\t","ROLEX","\t"," Rs. 4700-9200"}};
            cout<<"--------------ANALOG WATCHES--------------"<<endl;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }

            string table1[5][5]={
            {"SR.No","\t","BRANDS","\t","    RANGE"},
            {" 1","\t","G-SHOCK","\t"," Rs. 2000-4000"},
            {" 2","\t","FOSSIL","\t"," Rs. 2500-6000"},
            {" 3","\t","TITAN","\t"," Rs. 2000-8200"},
            {" 4","\t","ROLEX","\t"," Rs. 4000-8000"}};
            cout<<"--------------DIGITAL WATCHES--------------"<<endl;
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table1[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void price(string a)
        {
            if(a=="G855")
                sum+=2200;
            else if(a=="G625")
                sum+=4000;
            else if(a=="G230")
                sum+=3700;
            else if(a=="G450")
                sum+=4200;
            else if(a=="Master-1")
                sum+=5200;
            else if(a=="Master-2")
                sum+=6000;
            else if(a=="Oyester")
                sum+=4700;
            else if(a=="M1234")
                sum+=9200;
            else if(a=="Splash")
                sum+=1200;
            else if(a=="Ceramic")
                sum+=3200;
            else if(a=="Blue")
                sum+=5700;
            else if(a=="Regalia")
                sum+=7200;
            else if(a=="Blu")
                sum+=3200;
            else if(a=="Gold")
                sum+=4200;
            else if(a=="Towsman")
                sum+=2700;
            else if(a=="GM-6900")
                sum+=2200;
            else if(a=="GM-2343")
                sum+=4000;
            else if(a=="GM-3245")
                sum+=3700;
            else if(a=="GM-8660")
                sum+=4200;
            else if(a=="Fit-1")
                sum+=5200;
            else if(a=="Fit-2")
                sum+=6000;
            else if(a=="Speed")
                sum+=4700;
            else if(a=="Handex")
                sum+=9200;
            else if(a=="Galaxy")
                sum+=1200;
            else if(a=="Crest")
                sum+=3200;
            else if(a=="Zoop")
                sum+=5700;
            else if(a=="SmartFit")
                sum+=7200;
            else if(a=="Gen 6")
                sum+=3200;
            else if(a=="Sloan")
                sum+=4200;
            else if(a=="Everret-1")
                sum+=2700;
            else if(a=="Everret-2")
                sum+=6000;
        }
        void gshocka()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","G855 Watch","\t","Rs. 2,200"},
        {" 2","\t","G625 Casio ","\t","Rs. 4,000"},
        {" 3","\t","G230 Casio","\t","Rs. 3,700"},
        {" 4","\t","G450 Watch","\t","Rs. 4,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void rolexa()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Rolex Master-1","\t","Rs. 5,200"},
        {" 2","\t","Rolex Master-2","\t","Rs. 6,000"},
        {" 3","\t","Rolex Oyester","\t","Rs. 4,700"},
        {" 4","\t","Rolex M1234","\t","Rs. 9,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void titana()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Titan Neo Splash","\t","Rs. 1,200"},
        {" 2","\t","Titan Ceramic","\t","Rs. 3,200"},
        {" 3","\t","Titan Neo Blue","\t","Rs. 5,700"},
        {" 4","\t","Titan Regalia","\t","Rs. 7,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void fossila(){
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Fossil Blu","\t","Rs. 3,200"},
        {" 2","\t","Fossil Gold","\t","Rs. 4,200"},
        {" 3","\t","Fossil Townsman","\t","Rs. 2,700"},
        {" 4","\t","Fossil Grey","\t","Rs. 6,000"}};
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void gshockd()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","GM-6900 Watch","\t","Rs. 2,200"},
        {" 2","\t","GM-2343 Casio ","\t","Rs. 4,000"},
        {" 3","\t","GM-3245 Casio","\t","Rs. 3,700"},
        {" 4","\t","GM-866 Watch","\t","Rs. 4,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void rolexd()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Rolex Fit-1","\t","Rs. 5,200"},
        {" 2","\t","Rolex Fit-2","\t","Rs. 6,000"},
        {" 3","\t","Rolex Speed","\t","Rs. 4,700"},
        {" 4","\t","Rolex Handex","\t","Rs. 9,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void titand()
        {
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Titan Galaxy","\t","Rs. 1,200"},
        {" 2","\t","Titan Crest","\t","Rs. 3,200"},
        {" 3","\t","Titan Zoop","\t","Rs. 5,700"},
        {" 4","\t","Titan SmartFit","\t","Rs. 7,200"},
        };
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        void fossild(){
            string table[5][5]={
        {"SR.No","\t","PRODUCT NAME","\t","PRICE"},
        {" 1","\t","Fossil Gen 6","\t","Rs. 3,200"},
        {" 2","\t","Fossil Sloan","\t","Rs. 4,200"},
        {" 3","\t","Fossil Everett-1","\t","Rs. 2,700"},
        {" 4","\t","Fossil Everett-2","\t","Rs. 6,000"}};
        for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<table[i][j];
                }
                cout<<"\t"<<endl;
            }
        }
        string ask3,ask4;
        void ask()
        {
            cout<<"I would like to see a watch of ";cin>>ask2;
            cout<<"What type of watch do you prefer ";cin>>ask4;
            if (ask2=="G-Shock" && ask4=="Analog")
            {
                gshocka();
                cout<<"I would like to buy ";cin>>ask3;
            }
            else if(ask2=="G-shock" && ask4=="Digital")
            {
                gshockd();
                cout<<"I would like to buy ";cin>>ask3;

            }
            else if(ask2=="Fossil"&& ask4=="Analog")
            {
                fossila();
                cout<<"I would like to buy ";cin>>ask3;

            }
            else if(ask2=="fossil" && ask4=="Digital")
            {
                fossild();
                cout<<"I would like to buy ";cin>>ask3;

            }
            else if(ask2=="Titan" && ask4=="Analog")
            {
                titana();
                cout<<"I would like to buy ";cin>>ask3;
            }
            else if(ask2=="Titan" && ask4=="Digital")
            {
                titand();
                cout<<"I would like to buy ";cin>>ask3;
            }
            else if(ask2=="Rolex" && ask4=="Analog")
            {
                rolexa();
                cout<<"I would like to buy ";cin>>ask3;
            }
            else if(ask2=="Rolex" && ask4=="Digital")
            {
                rolexd();
                cout<<"I would like to buy ";cin>>ask3;
            }
            price(ask3);
            cout<<"Do you want to see any other watches ";cin>>ask5;
        }
};
int main()
{
    welcome w;
    watch g;
    w.display_time();
    cout<<"We have a range of watches for you what kind of watch do you prefer "<<endl;
    cout<<"Which all brands and types of watches do you have "<<"\n"<<endl;
    g.brands();
    g.ask();
    while(ask5=="Yes")
    {
        g.ask();
    }
    g.bill();
}