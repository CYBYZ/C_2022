#include <iostream>
#include "Bucket.h"

using namespace std;

int main()
{
    int v;
    int i;
    int c=0;
    cout << "Введите объем ведра: ";
    cin >> v;
    cout << "Введите использованный объем ведра: ";
    cin >> i;
    Bucket bucket(v,i);
    while (c != 3) {

        cout << "Ведро : \n Объем: " << bucket.volume << " л.\n Занято: " << bucket.used << " л.\n Что сделать? \n1)Опустошить ведро\n2)Наполнить ведро\n3)Выход\nВвод: ";
        cin >> c;
        if(c > 3 or c < 1) {
        while (c > 3 or c < 1) {
            cout << "Введите доступное число(1-3) :";
            cin >> c;
        }
        }
        if (c == 1) {
            bucket.flush();
            cout << "Ведро теперь пустое \n";
        }
        else if (c == 2) {
            cout << "Введите объем для заполнения :";
            cin >> v;
            cout << "Ведро заполнено, не вошло :" << bucket.fill(v)  <<" л.\n";
        }
        
    }

}
