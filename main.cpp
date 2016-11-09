#include <iostream>
#include <fstream>
#include "naplo.h"

using namespace std;

void teszt2();
/*void teszt3();
void teszt4();
void teszt5();*/

int main()
{
    cout << "OAF ZH 2016" << endl;
    char c;
    teszt2();
    /*cout<<"A folytatashoz usson le egy karaktert!\n"; cin>>c;
    teszt3();
    cout<<"A folytatashoz usson le egy karaktert!\n"; cin>>c;
    teszt4();
    cout<<"A folytatashoz usson le egy karaktert!\n"; cin>>c;
    teszt5();*/
    return 0;
}
void teszt2()
{
    cout<<"\n*** 2-es teszt ***\n";
    Naplo naplo1("I.a"),naplo2("I.b");
    string fname="input1.txt";
    ifstream inp;
    inp.open(fname.c_str());
    if(inp.fail())
    {
        cout<<"*** Nem sikerult "<<fname<<" fajlt megnyitni!\n";
        return;
    }
    inp>>naplo1;
    inp.close();
    cout<<"*** input1.txt tartalma:\n"<<naplo1<<endl;
    cout<<"*** ures lista tartalma\n"<<naplo2<<endl;
    cout<<"\n*** 2-es teszt lefutott\n";
}
/*void teszt3()
{
    cout<<"\n*** 3-as teszt ***\n";
    Naplo naplo1("I.a"),naplo2("I.b");
    string fname="input1.txt";
    ifstream inp;
    inp.open(fname.c_str());
    if(inp.fail())
    {
        cout<<"*** Nem sikerult "<<fname<<" fajlt megnyitni!\n";
        return;
    }
    inp>>naplo1;
    inp.close();
    naplo1.Beszur("A005","biosz",5);
    naplo1.Beszur("A001","biosz",3);
    naplo1.Beszur("BBBB","biosz",4);
    naplo1.Beszur("GGGG","biosz",1);
    naplo1.Beszur("HHHH","biosz",2);
    naplo1.Beszur("MMMM","biosz",5);
    naplo1.Beszur("XXXX","biosz",4);
    cout<<"*** naplo1 tartalma:\n"<<naplo1<<endl;

    naplo2.Torol("AAAA");
    naplo1.Torol("AAAA");
    naplo1.Torol("ZZZZ");
    naplo1.Torol("A001");
    naplo1.Torol("XXXX");
    naplo1.Torol("A001");
    naplo1.Torol("HHHH");
    naplo2.Beszur("AAAA","matek",5);
    naplo2.Torol("AAAA");
    naplo2.Beszur("BBBB","matek",5);
    naplo2.Beszur("BBBB","angol",5);
    naplo2.Beszur("AAAA","angol",5);
    cout<<"*** naplo1 tartalma:\n"<<naplo1<<endl;
    cout<<"*** naplo2 tartalma:\n"<<naplo2<<endl;
    try{naplo1.Beszur("AAAA","matek",6);
    }catch(...)
    {
        cout<<"*** Hibas osztalyzat!\n";
    }
    cout<<"\n*** 3-as teszt lefutott\n";
}
void teszt4()
{
    cout<<"\n*** 4-es teszt ***\n";
    Naplo naplo1("I.a"),naplo2("I.b");
    string fname="input1.txt";
    ifstream inp;
    inp.open(fname.c_str());
    if(inp.fail())
    {
        cout<<"*** Nem sikerult "<<fname<<" fajlt megnyitni!\n";
        return;
    }
    inp>>naplo1;
    inp.close();
    naplo1.Fordit();
    naplo2.Fordit();
    cout<<"*** naplo1 forditva:\n"<<naplo1<<endl;
    cout<<"*** naplo2 forditva:\n"<<naplo2<<endl;

    naplo1.Fordit();
    naplo2.Fordit();
    cout<<"*** naplo1 visszaforditva:\n"<<naplo1<<endl;
    cout<<"*** naplo2 visszaforditva:\n"<<naplo2<<endl;
    Naplo naplo3(naplo1);
    Naplo naplo4(naplo2);
    naplo1.Torol("BBBB");
    naplo1.Torol("MMMM");
    naplo3.Torol("GGGG");
    naplo3.Torol("DDDD");
    cout<<"*** naplo1 (BBBB, MMMM torolve):\n"<<naplo1<<endl;
    cout<<"*** naplo1 masolat (DDDD,GGGG torolve) :\n"<<naplo3<<endl;
    naplo4.Beszur("AAAA","info",5);
    naplo2.Beszur("BBBB","info",5);
    cout<<"*** naplo2 (BBBB beszurva) :\n"<<naplo2<<endl;
    cout<<"*** naplo2 masolat (AAAA beszurva) :\n"<<naplo4<<endl;
    cout<<"\n*** 4-es teszt lefutott\n";
}
void teszt5()
{
    cout<<"\n*** 5-os teszt ***\n";
    Naplo naplo1("I.a"),naplo2("tori_doga");
    string fname="input1.txt";
    ifstream inp;
    inp.open(fname.c_str());
    if(inp.fail())
    {
        cout<<"*** Nem sikerult "<<fname<<" fajlt megnyitni!\n";
        return;
    }
    inp>>naplo1;
    inp.close();
    fname="input2.txt";
    inp.open(fname.c_str());
    if(inp.fail())
    {
        cout<<"*** Nem sikerult "<<fname<<" fajlt megnyitni!\n";
        return;
    }
    inp>>naplo2;
    inp.close();
    cout<<"*** naplo2 (tori doga) :\n"<<naplo2<<endl;
    naplo1.Dolgozat(naplo2);
    cout<<"*** naplo1 tori doga utan:\n"<<naplo1<<endl;
    Naplo naplo3(naplo2);
    naplo3.Dolgozat(naplo2);
    cout<<"*** naplo2 masolata tori doga utan:\n"<<naplo3<<endl;
    Naplo naplo4("I.c");
    cout<<"*** Dolgozat ures naplora meghivva: \n";
    naplo4.Dolgozat(naplo2);
    cout<<naplo4<<endl;
    cout<<"\n*** 5-os teszt lefutott\n";
}*/
