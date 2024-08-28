#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int arrayAmin[SIZE][SIZE];
    int ami = 0;
    int esas = 0;
    int eks = 0;
    int menfi = 0;
    int musbet = 0;
    int sifir = 0;
    int sira[SIZE] = { 0 };
    int sutun[SIZE] = { 0 };

    srand(time(0));

    /*cout << "Tapsiriq 1\n";

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            arrayAmin[i][j] = rand() % 21;
            ami += arrayAmin[i][j];
        }
    }

    cout << "Massiv:\n";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << arrayAmin[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Massivdeki ededlerin cemi: " << ami << endl;

    return 0;*/

    /*cout << "Tapsiriq 2\n";

    srand(time(0));

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            arrayAmin[i][j] = rand() % 21;


            if (i == j)
            {
                esas += arrayAmin[i][j];
            }


            if (i + j == SIZE - 1)
            {
                eks += arrayAmin[i][j];
            }
        }
    }

    cout << "Massiv:\n";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << arrayAmin[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Esas diaqnoldaki ededlerin cemi: " << esas << endl;
    cout << "Eks diaqnoldaki ededlerin cemi: " << eks << endl;

    return 0;*/

    /*cout << "Tapsiriq 4\n";

    srand(time(0));

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            arrayAmin[i][j] = rand() % 11 - 5;


            if (arrayAmin[i][j] < 0)
            {
                menfi++;
            }
            else if (arrayAmin[i][j] > 0)
            {
                musbet++;
            }
            else
            {
                sifir++;
            }
        }
    }

    cout << "Massiv:\n";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << arrayAmin[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "Menfilerin sayi: " << menfi << endl;
    cout << "Musbetlerin sayi: " << musbet << endl;
    cout << "Sifirlarin sayi: " << sifir << endl;

    return 0;*/

    /*cout << "Tapsiriq 5\n";

    srand(time(0));

    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            arrayAmin[i][j] = rand() % 21;
            sira[i] += arrayAmin[i][j];
        }
    }

    cout << "Massiv:\n";
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            std::cout << arrayAmin[i][j] << "\t";
        }
        cout << "Setir cem: " << sira[i] << endl;
    }

    return 0;*/

   /* cout << "Tapsiriq 6\n";
    
    srand(time(0));

    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            arrayAmin[i][j] = rand() % 21;\
        }
    }

    for (int j = 0; j < SIZE; j++) 
    {
        for (int i = 0; i < SIZE; i++) 
        {
            sutun[j] += arrayAmin[i][j];
        }
    }

        cout << "Massiv:\n";
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            cout << arrayAmin[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nHer bir sutundaki ededlerin cemi:\n";
    for (int j = 0; j < SIZE; j++) {
        cout << "Sutun " << j + 1 << ": " << sutun[j] << endl;
    }

    return 0;*/










}