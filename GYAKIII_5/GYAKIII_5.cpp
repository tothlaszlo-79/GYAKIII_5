
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;
void Feltolt(int[], int n);// feltöltés
void Kiir (int[], int ); // kiíratás
int Max(int[], int);//legjobb jegy értéke

int main()
{
    srand((unsigned int)time( NULL));
    int db;
    do
    {
        cout <<"Hany tanulo jar a csoportba ?" ;
        cin >> db;
        if (db < 1 || db>10)
            cout << "Nem megfelelo letszam ! (1 10)" << endl;
    } while (db < 1 || db>10);
   
    int *jegy = new int[db];
    Feltolt(jegy, db);
    Kiir(jegy, db);
    cout << "\nA legjobb dolgozat erteke : " << Max(jegy,db) << endl;
    delete [] jegy;
    return 0;
}

void Feltolt(int tmb[], int n)
{
    for (int i = 0; i < n; i++) tmb[i] = (rand() % 100) + 1;
}
void Kiir(int tmb[], int n)
{
    	cout << "\nA csoport jegyei : \n";
        for (int i = 0; i < n; i++) cout << setw(4) << tmb[i];
        cout << endl;
}

int Max(int tmb[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++) 
        if (tmb[i] > tmb[max]) max = i;
   return tmb[max];
}