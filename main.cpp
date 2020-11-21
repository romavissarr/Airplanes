#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;


void golireMatrice(char a[8][8])
{
    for(int i = 0; i<8; i++)
    {
        for(int j = 0; j<8; j++)
        {
            a[i][j] = 0;
        }
    }
}

void tabelJoc(char a[8][8])
{

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "| " << a[0][0] << " | " << a[0][1] << " | " << a[0][2] << " | " << a[0][3] << " | " << a[0][4] << " | " << a[0][5] << " | " << a[0][6] << " | " << a[0][7] << " |\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "| " << a[1][0] << " | " << a[1][1] << " | " << a[1][2] << " | " << a[1][3] << " | " << a[1][4] << " | " << a[1][5] << " | " << a[1][6] << " | " << a[1][7] << " |\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "| " << a[2][0] << " | " << a[2][1] << " | " << a[2][2] << " | " << a[2][3] << " | " << a[2][4] << " | " << a[2][5] << " | " << a[2][6] << " | " << a[2][7] << " |\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "| " << a[3][0] << " | " << a[3][1] << " | " << a[3][2] << " | " << a[3][3] << " | " << a[3][4] << " | " << a[3][5] << " | " << a[3][6] << " | " << a[3][7] << " |\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "| " << a[4][0] << " | " << a[4][1] << " | " << a[4][2] << " | " << a[4][3] << " | " << a[4][4] << " | " << a[4][5] << " | " << a[4][6] << " | " << a[4][7] << " |\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "| " << a[5][0] << " | " << a[5][1] << " | " << a[5][2] << " | " << a[5][3] << " | " << a[5][4] << " | " << a[5][5] << " | " << a[5][6] << " | " << a[5][7] << " |\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "| " << a[6][0] << " | " << a[6][1] << " | " << a[6][2] << " | " << a[6][3] << " | " << a[6][4] << " | " << a[6][5] << " | " << a[6][6] << " | " << a[6][7] << " |\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "| " << a[7][0] << " | " << a[7][1] << " | " << a[7][2] << " | " << a[7][3] << " | " << a[7][4] << " | " << a[7][5] << " | " << a[7][6] << " | " << a[7][7] << " |\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

void alegeAvion(char a[8][8], int juc)
{
    golireMatrice(a);

    int v[17];
    int v1[17];
    int s=0,d=0,sus = 0,jos=0;
    bool continua=true;

    while(continua)
    {
        system("CLS");
        cout << "\nJucator " << juc << "\n";
        tabelJoc(a);

        char comanda;
        cout<<"Apasa q entru a alege forma avionului\n";

        cout<<"Apasa a daca vrei sa muti avionul la stanga\n";
        cout<<"Apasa d daca vrei sa muti avionul la dreapta\n";
        cout << "Apasa w daca vrei sa muti avionul in sus\n";
        cout << "Apasa s daca vrei sa muti avionul in jos\n";
        cout<<"Apasa l pentru a valida pozitria avionului\n";

        cin >> comanda;

        switch(comanda)
        {

        case 'a':
            system("CLS");

            golireMatrice(a);

            s=1;
            a[v[1]][v[2]-=s] = 'x';  // a[0][1] = 'X';
            a[v[3]][v[4]-=s] = 'x'; // a[0+1][1] = 'x';
            a[v[5]][v[6]-=s] = 'x'; // a[0+1][1+1] = 'x';
            a[v[7]][v[8]-=s] = 'x'; // a[0+1][1-1] = 'x';
            a[v[9]][v[10]-=s] = 'x'; // a[0+2][1] = 'x';
            a[v[11]][v[12]-=s] = 'x'; // a[0+3][1] = 'x';
            a[v[13]][v[14]-=s] = 'x'; // a[0+3][1+1] = 'x';
            a[v[15]][v[16]-=s] = 'x'; // a[0+3][1-1] = 'x';

            //tabelJoc(a);

            break;
        case 'd':
            system("CLS");
            golireMatrice(a);

            d=1;
            a[v[1]][v[2]+=d] = 'x';  // a[0][1] = 'X';
            a[v[3]][v[4]+=d] = 'x'; // a[0+1][1] = 'x';
            a[v[5]][v[6]+=d] = 'x'; // a[0+1][1+1] = 'x';
            a[v[7]][v[8]+=d] = 'x'; // a[0+1][1-1] = 'x';
            a[v[9]][v[10]+=d] = 'x'; // a[0+2][1] = 'x';
            a[v[11]][v[12]+=d] = 'x'; // a[0+3][1] = 'x';
            a[v[13]][v[14]+=d] = 'x'; // a[0+3][1+1] = 'x';
            a[v[15]][v[16]+=d] = 'x'; // a[0+3][1-1] = 'x';


            break;
        case 'w':
            system("CLS");
            golireMatrice(a);
            sus=1;
            a[v[1]-=sus][v[2]] = 'x';  // a[0][1] = 'X';
            a[v[3]-=sus][v[4]] = 'x'; // a[0+1][1] = 'x';
            a[v[5]-=sus][v[6]] = 'x'; // a[0+1][1+1] = 'x';
            a[v[7]-=sus][v[8]] = 'x'; // a[0+1][1-1] = 'x';
            a[v[9]-=sus][v[10]] = 'x'; // a[0+2][1] = 'x';
            a[v[11]-=sus][v[12]] = 'x'; // a[0+3][1] = 'x';
            a[v[13]-=sus][v[14]] = 'x'; // a[0+3][1+1] = 'x';
            a[v[15]-=sus][v[16]] = 'x'; // a[0+3][1-1] = 'x';

            break;
        case 's':
            system("CLS");
            golireMatrice(a);

            jos=1;
            a[v[1]+=jos][v[2]] = 'x';  // a[0][1] = 'X';
            a[v[3]+=jos][v[4]] = 'x'; // a[0+1][1] = 'x';
            a[v[5]+=jos][v[6]] = 'x'; // a[0+1][1+1] = 'x';
            a[v[7]+=jos][v[8]] = 'x'; // a[0+1][1-1] = 'x';
            a[v[9]+=jos][v[10]] = 'x'; // a[0+2][1] = 'x';
            a[v[11]+=jos][v[12]] = 'x'; // a[0+3][1] = 'x';
            a[v[13]+=jos][v[14]] = 'x'; // a[0+3][1+1] = 'x';
            a[v[15]+=jos][v[16]] = 'x'; // a[0+3][1-1] = 'x';
            break;
        case 'l':
            cout << "Avionul este salvat!\n";
            continua=false;

            break;
        case 'q':
            system("CLS");
            golireMatrice(a);

            tabelJoc(a);

            int foma;
            cout<<"Apasa 1 pentru forma cu capul in sus\n";
            cout<<"Apasa 2 pentru forma cu capul in jos\n";
            cout<<"Apasa 3 pentru forma cu capul in stanga\n";
            cout<<"Apasa 4 pentru forma cu capul in dreapta\n";

            cin>>foma;

            switch(foma)
            {

            case 1:
                sus=0;
                jos=0;
                d=0;
                s=0;

                v[1]=0;
                v[2]=1;

                v[3]=1;
                v[4]=0;

                v[5]=1;
                v[6]=1;

                v[7]=1;
                v[8]=2;

                v[9]=2;
                v[10]=1;


                v[11]=3;
                v[12]=0;

                v[13]=3;
                v[14]=1;

                v[15]=3;
                v[16]=2;

                break;
            case 2:
                d=0;
                s=0;
                sus = 0;
                jos = 0;


                v[1]=0;
                v[2]=0;

                v[3]=0;
                v[4]=1;

                v[5]=0;
                v[6]=2;

                v[7]=1;
                v[8]=1;

                v[9]=2;
                v[10]=0;


                v[11]=2;
                v[12]=1;

                v[13]=2;
                v[14]=2;

                v[15]=3;
                v[16]=1;

                break;

            case 3:
                s = 0;
                d = 0;
                sus = 0;
                jos = 0;

                v[1] = 1;
                v[2] = 0;

                v[3] = 2;
                v[4] = 1;
                v[5] = 1;
                v[6] = 1;
                v[7] = 0;
                v[8] = 1;
                v[9] = 1;
                v[10] = 2;
                v[11] = 1;
                v[12] = 3;
                v[13] = 2;
                v[14] = 3;
                v[15] = 0;
                v[16] = 3;

                break;
            case 4:
                s = 0;
                d = 0;
                sus = 0;
                jos = 0;

                v[1] = 1;
                v[2] = 3;
                v[3] = 0;
                v[4] = 2;
                v[5] = 1;
                v[6] = 2;
                v[7] = 2;
                v[8] = 2;
                v[9] = 1;
                v[10] = 1;
                v[11] = 1;
                v[12] = 0;
                v[13] = 0;
                v[14] = 0;
                v[15] = 2;
                v[16] = 0;

                break;

            }


            a[v[1]][v[2]] = 'x';  // a[0][1] = 'X';
            a[v[3]][v[4]] = 'x'; // a[0+1][1] = 'x';
            a[v[5]][v[6]] = 'x'; // a[0+1][1+1] = 'x';
            a[v[7]][v[8]] = 'x'; // a[0+1][1-1] = 'x';
            a[v[9]][v[10]] = 'x'; // a[0+2][1] = 'x';
            a[v[11]][v[12]] = 'x'; // a[0+3][1] = 'x';
            a[v[13]][v[14]] = 'x'; // a[0+3][1+1] = 'x';
            a[v[15]][v[16]] = 'x'; // a[0+3][1-1] = 'x';


            system("CLS");
            tabelJoc(a);

            break;

        }
    }



}

bool verificaTable(char a[8][8],char b[8][8])
{

    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            if(a[i][j]!=b[i][j])
                return false;
    return true;
}

int main()

{
    char a[8][8];
    char b[8][8];

    char atacaA[8][8];
    char atacaB[8][8];
    golireMatrice(atacaA);
    golireMatrice(atacaB);

    alegeAvion(a,1);

    alegeAvion(b,2);
    int lnAtacJuc1;
    int colAtacJuc1;
    int lnAtacJuc2;
    int colAtacJuc2;

    int jucator;

    bool gasit=true;
    while(gasit)
    {
        system("CLS");


        tabelJoc(atacaA);
        cout<<endl;

        cout<<"\nJucator 1\n";
        cout << "Linie: ";
        cin>>lnAtacJuc1;
        cout<<"Coloana: ";
        cin>> colAtacJuc1;


        if(b[lnAtacJuc1][colAtacJuc1] == 'x') {
            atacaA[lnAtacJuc1][colAtacJuc1] = 'x';
        }

        if(verificaTable(b,atacaA))
        {
            gasit=false;
            jucator=1;
            break;
        }

        system("CLS");


        tabelJoc(atacaB);
        cout<<endl;
        cout<<"\nJucator 2\n";
        cout << "Linie: ";
        cin>>lnAtacJuc2;
        cout<<"Coloana: ";
        cin>> colAtacJuc2;

        if(a[lnAtacJuc2][colAtacJuc2] == 'x') {
            atacaB[lnAtacJuc2][colAtacJuc2] = 'x';
        }



        if(verificaTable(b,atacaA))
        {
            gasit=false;
            jucator=2;
            break;
        }
        system("CLS");


    }
    system("CLS");
    if(jucator==1)
        cout<<"\n A castigat jucatorul 1 \n";
    else
        cout<<"\n A castigat jucatorul 2\n";


    cout<<"\nAvion jucator 1\n";
    tabelJoc(a);
    cout<<"\nAvion jucator 2\n";
    tabelJoc(b);
    return 0;
}
