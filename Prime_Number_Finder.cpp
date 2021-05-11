#include <iostream>
using namespace std;

void Asal(){
        while (true)
        {
            int sayi;
            int sayac = 0;
            char c;
            cout << "\n\n Random Atamayı Başlatmak İstiyorsanız herhangi bir tuşa, istemiyorsanız herhangi bir noktalama işareti tuşuna basınız :" << endl;
            cin >> c;
            int x = int(c);

            if ((x > 32 && 48 > x) || (57 < x && 97 > x) || (122 < x && 127 > x)) {
                cout << "\n\n**" << endl;
                cout << "      Noktalama işareti girildi kapatılıyor..." << endl;
                cout << "**" << endl;
                break;
            }
            else {
                srand(time(0));
                for (int j = 0; j < 2; j++) {
                    sayi = rand() % 1000;
                }
                cout << "\n Otomatik Gönderilen Sayı : " << sayi << endl;

                for (int i = 2; i < sayi; i++)
                {
                    if (sayi % i == 0)
                    {
                        sayac++;
                        break;
                    }
                }
                if (sayac == 0)
                {
                    cout << "Bu Sayı Asal Bir Sayıdır." << endl;
                    continue;
                }
                else {
                    cout << "Bu Sayı Asal Bir Sayı Değildir." << endl;
                    continue;
                }
                break;
            }
            continue;

        }
    }
int main(){

    Asal();

}

