#include <iostream>
#include <windows.h>
using namespace std;
HANDLE o = GetStdHandle(STD_OUTPUT_HANDLE);
char arr[40][200];
int width, height, base, shapetype, pos_x, pos_y, nos, colour;

class Shape
{
    public:
    virtual void move() = 0;
};

void specifications()  //Specifies co-ordinates, distance & colour by taking input
{
    cout << "Enter values of X and Y for specifying (X,Y) direction respectively: ";
    cin>>pos_x >>pos_y;
    cout << "Enter number of iterations (distance) the object should move for: ";
    cin >> nos;
    cout << "Colour Correspondence List:\n1 -> Blue\n2 -> Green\n3 -> Cyan\n4 -> Red\n5 -> Pink\n6 -> Yellow\n";
    cout << "Enter your choice for colour: ";
    cin >> colour;
    SetConsoleTextAttribute(o, colour);
}

class ComplexShape : public Shape
{
    public:
    void move() {}
    void setDirection()
    {
        int i, ii = 97, jj = 104, j, k = 1,a = 18, b = 22, c = 19, d = 21, e = 20,f = 95, g = 98, h = 94, l = 93, m = 99;
        for (i = 0; i < 40; i++) //Creating the hexagon
        {
            if (i == a || i == b)
            {
                for (int j = f; j < g; j++)
                     arr[i][j] = '*';
            }
            if(i == c || i == d)
            {
                for (int j = 0; j < 200; j++)
                {
                    if (j == h || j == g)
                        arr[i][j] = '*';
                }
            }
            if (i == e)
            {
                for (int j = 0; j < 200; j++)
                {
                    if (j == l || j == m)
                        arr[i][j] = '*';
                }
            }
        }
        specifications();
        if (pos_x == 1 && pos_y == 0)
        {
            for (int k = 0; k < nos; k++)
            {
                for (int i = 0; i < 40; i++)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        cout << arr[i][j];
                    }
                    cout << "\n";
                }
                system("CLS");
                for (i = 0; i < 40; i++)
                {
                    for (j = 0; j < 200; j++)
                        arr[i][j] = ' ';
                }
                for (i = 0; i < 40; i++)
                {
                    if (i == a || i == b)
                    {
                        for (int j = f; j < g; j++)
                            arr[i][j] = '*';
                    }
                    if (i == c || i == d)
                    {
                        for (int j = 0; j < 200; j++)
                        {
                            if (j == h || j == g)
                                arr[i][j] = '*';
                        }
                    }
                    if (i == e)
                    {
                        for (int j = 0; j < 200; j++)
                        {
                            if (j == l || j == m)
                                arr[i][j] = '*';
                        }
                    }
                }
                f += 3; g += 3; h += 3; l += 3; m += 3;
            }
        }
        else if (pos_x == -1 &&pos_y == 0)
        {
            for (int k = 0; k < nos; k++)
            {
                for (int i = 0; i < 40; i++)
                {
                    for (int j = 0; j < 200; j++)
                        cout << arr[i][j];
                    cout << "\n";
                }
                system("CLS");
                for (i = 0; i < 40; i++)
                {
                    for (j = 0; j < 200; j++)
                        arr[i][j] = ' ';
                }
                for (i = 0; i < 40; i++)
                {
                    if (i == a || i == b)
                    {
                        for (int j = f; j < g; j++)
                            arr[i][j] = '*';
                    }
                    if (i == c || i == d)
                    {
                        for (int j = 0; j < 200; j++)
                        {
                            if (j == h || j == g)
                                arr[i][j] = '*';
                        }
                    }
                    if (i == e)
                    {
                        for (int j = 0; j < 200; j++)
                        {
                            if (j == l || j == m)
                                arr[i][j] = '*';
                        }
                    }
                }
                f -= 3; g -= 3; h -= 3; l -= 3; m -= 3;
            }
        }
        else if (pos_x == 0 &&pos_y == 1)
        {
            for (int k = 0; k < nos; k++)
            {
                for (int i = 0; i < 40; i++)
                {
                    for (int j = 0; j < 200; j++)
                        cout << arr[i][j];
                    cout << "\n";
                }
                system("CLS");

                for (i = 0; i < 40; i++)
                {
                    for (j = 0; j < 200; j++)
                        arr[i][j] = ' ';
                }
                for (i = 0; i < 40; i++)
                {
                    if (i == a || i == b)
                    {
                        for (int j = f; j < g; j++)
                        arr[i][j] = '*';
                    }
                    if (i == c || i == d)
                    {
                        for (int j = 0; j < 200; j++)
                        {
                            if (j == h || j == g)
                                arr[i][j] = '*';
                        }
                    }
                    if (i == e)
                    {
                        for (int j = 0; j < 200; j++)
                        {
                            if (j == l || j == m)
                                arr[i][j] = '*';
                        }
                    }
                }
                a -= 1; b -= 1; c -= 1; d -= 1, e-=1;
            }
        }
    else if (pos_x == 0 &&pos_y == -1)
    {
        for (int k = 0; k < nos; k++)
        {
            for (int i = 0; i < 40; i++)
            {
                for (int j = 0; j < 200; j++)
                    cout << arr[i][j];
                cout << "\n";
            }
            system("CLS");
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 200; j++)
                    arr[i][j] = ' ';
            }
            for (i = 0; i < 40; i++)
            {
                if (i == a || i == b)
                {
                    for (int j = f; j < g; j++)
                        arr[i][j] = '*';
                }
                if (i == c || i == d)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == h || j == g)
                            arr[i][j] = '*';
                    }
                }
                if (i == e)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == l || j == m)
                            arr[i][j] = '*';
                    }
                }
            }
            a += 1; b += 1; c += 1; d += 1; e+=1;
         }
    }
    else if (pos_x == 1 && pos_y == 1)   //DIAGONAL DIRECTION
    {
        for (int k = 0; k < nos; k++)
        {
            for (int i = 0; i < 40; i++)
            {
                for (int j = 0; j < 200; j++)
                    cout << arr[i][j];
                cout << "\n";
            }
            system("CLS");
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 200; j++)
                    arr[i][j] = ' ';
            }
            for (i = 0; i < 40; i++)
            {
                if (i == a || i == b)
                {
                    for (int j = f; j < g; j++)
                        arr[i][j] = '*';
                }
                if (i == c || i == d)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == h || j == g)
                            arr[i][j] = '*';
                    }
                }
                if (i == e)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == l || j == m)
                            arr[i][j] = '*';
                    }
                }
            }
            a -= 1; b -= 1; c -= 1; d -= 1; e -= 1; f += 3; g += 3; h += 3; l += 3; m += 3;
         }
    }
    else if (pos_x == -1 && pos_y == -1)
    {
        for (int k = 0; k < nos; k++)
        {
            for (int i = 0; i < 40; i++)
            {
                for (int j = 0; j < 200; j++)
                    cout << arr[i][j];
                cout << "\n";
            }
            system("CLS");
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 200; j++)
                    arr[i][j] = ' ';
            }
            for (i = 0; i < 40; i++)
            {
                if (i == a || i == b)
                {
                    for (int j = f; j < g; j++)
                        arr[i][j] = '*';
                }
                if (i == c || i == d)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == h || j == g)
                            arr[i][j] = '*';
                    }
                }
                if (i == e)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == l || j == m)
                            arr[i][j] = '*';
                    }
                }
            }
            a += 1; b += 1; c += 1; d += 1; e += 1; f -= 3; g -= 3; h -= 3; l -= 3; m -= 3;
         }
    }
    else if (pos_x == -1 &&pos_y == 1)
    {
        for (int k = 0; k < nos; k++)
        {
            for (int i = 0; i < 40; i++)
            {
                for (int j = 0; j < 200; j++)
                    cout << arr[i][j];
                cout << "\n";
            }
            system("CLS");
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 200; j++)
                    arr[i][j] = ' ';
            }
            for (i = 0; i < 40; i++)
            {
                if (i == a || i == b)
                {
                    for (int j = f; j < g; j++)
                        arr[i][j] = '*';
                }
                if (i == c || i == d)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == h || j == g)
                            arr[i][j] = '*';
                    }
                }
                if (i == e)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == l || j == m)
                            arr[i][j] = '*';
                    }
                }
            }
            a -= 1; b -= 1; c -= 1; d -= 1; e -= 1; f -= 3; g -= 3; h -= 3; l -= 3; m -= 3;
        }
    }
    else if (pos_x == 1 &&pos_y == -1)
    {
        for (int k = 0; k < nos; k++)
        {
            for (int i = 0; i < 40; i++)
            {
                for (int j = 0; j < 200; j++)
                    cout << arr[i][j];
                cout << "\n";
            }
            system("CLS");
            for (i = 0; i < 40; i++)
            {
                for (j = 0; j < 200; j++)
                    arr[i][j] = ' ';
            }
            for (i = 0; i < 40; i++)
            {
                if (i == a || i == b)
                {
                    for (int j = f; j < g; j++)
                        arr[i][j] = '*';
                }
                if (i == c || i == d)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == h || j == g)
                            arr[i][j] = '*';
                    }
                }
                if (i == e)
                {
                    for (int j = 0; j < 200; j++)
                    {
                        if (j == l || j == m)
                            arr[i][j] = '*';   
                    }
                }
            }
            a += 1; b += 1; c += 1; d += 1; e += 1; f += 3; g += 3; h += 3; l += 3; m += 3;
         }
      }
    }
};
class SimpleShape : public Shape
{
    public:
    int x,y,k,i,j,i1,i2,j1,j2;
    virtual void draw() = 0;

    void move()
    {
        if(shapetype==1) //For Box
        {
            i1 = 20-(height/2);
            i2 = 20+(height/2);
            j1 = 100-(width/2);  
            j2 = 100+(width/2);
        }
        else //For Tent
        {   
            i1 = (20-(base/2));
            i2 = (20+(base/2));
            j1 = (100-(base/2)); 
        }
        specifications();
        if(pos_x==0 & pos_y==1)
        {
             for(k=1; k<=nos; k++)
            {
                x=0;
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        cout << arr[i][j];
                    cout << endl;
                }
                system("CLS");
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        arr[i][j] = ' ';
                }
                for(i=i1; i<=i2; i++)
                {
                    if(shapetype==0)
                    {
                        x++;
                        y=j1;
                        for(j=1; j<=x; j++)
                        {
                            y++;
                            arr[i][y] = '*';
                        }
                    }
                    else
                    {
                        for(j=j1; j<=j2; j++)
                            arr[i][j] = '*';
                    }
                }
                i1 -= 2; i2 -= 2;
            }
        }
        else if(pos_x==0 & pos_y==-1)
        {
            for(k=1; k<=nos; k++)
            {
                x=0;
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        cout << arr[i][j];
                    cout << endl;
                }
                system("CLS");
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        arr[i][j] = ' ';
                }
                for(i=i1; i<=i2; i++)
                {
                    if(shapetype==0)
                    {
                        x++;
                        y=j1;
                        for(j=1; j<=x; j++)
                        {
                            y++;
                            arr[i][y] = '*';
                        }
                    }
                    else
                    {
                        for(j=j1; j<=j2; j++)
                            arr[i][j] = '*';
                    }
                }
                i1 += 2; i2 += 2;
            }
        }
        else if(pos_x==1 & pos_y==0)
        {
            for(k=1; k<=nos; k++)
            {
                x=0;
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        cout << arr[i][j];
                    cout << endl;
                }
                system("CLS");
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        arr[i][j] = ' ';
                }
                for(i=i1; i<=i2; i++)
                {
                    if(shapetype==0)
                    {
                        x++;
                        y=j1;
                        for(j=1; j<=x; j++)
                        {
                            y++;
                            arr[i][y] = '*';
                        }
                    }
                    else
                    {
                        for(j=j1; j<=j2; j++)
                            arr[i][j] = '*';
                    }
                }
                j1 += 8; j2 += 8;
            }
        }
        else if(pos_x==1 & pos_y==1)
        {
            for(k=1; k<=nos; k++)
            {
                x=0;
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        cout << arr[i][j];
                    cout << endl;
                }
                system("CLS");
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        arr[i][j] = ' ';
                }
                for(i=i1; i<=i2; i++)
                {
                    if(shapetype==0)
                    {
                        x++;
                        y=j1;
                        for(j=1; j<=x; j++)
                        {
                            y++;
                            arr[i][y] = '*';
                        }
                    }
                    else
                    {
                        for(j=j1; j<=j2; j++)
                            arr[i][j] = '*';
                    }
                }
                i1 -= 2; i2 -= 2; j1 += 8; j2 += 8;
            }
        }
        else if(pos_x==1 & pos_y==-1)
        {
             for(k=1; k<=nos; k++)
            {
                x=0;
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        cout << arr[i][j];
                    cout << endl;
                }
                system("CLS");
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        arr[i][j] = ' ';
                }
                for(i=i1; i<=i2; i++)
                {
                   if(shapetype==0)
                    {
                        x++;
                        y=j1;
                        for(j=1; j<=x; j++)
                        {
                            y++;
                            arr[i][y] = '*';
                        }
                    }
                    else
                    {
                        for(j=j1; j<=j2; j++)
                            arr[i][j] = '*';
                    }
                }
                i1 += 2; i2 += 2; j1 += 8; j2 += 8;
            }
        }
        else if(pos_x==-1 & pos_y==0)
        {
            for(k=1; k<=nos; k++)
            {
                x=0;
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        cout << arr[i][j];
                    cout << endl;
                }
                system("CLS");
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        arr[i][j] = ' ';
                }
                for(i=i1; i<=i2; i++)
                {
                    if(shapetype==0)
                    {
                        x++;
                        y=j1;
                        for(j=1; j<=x; j++)
                        {
                            y++;
                            arr[i][y] = '*';
                        }
                    }
                    else
                    {
                        for(j=j1; j<=j2; j++)
                            arr[i][j] = '*';
                    }
                }
                j1 -= 8; j2 -= 8;
            }
        }
        else if(pos_x==-1 & pos_y==1)
        {
            for(k=1; k<=nos; k++)
            {
                x=0;
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        cout << arr[i][j];
                    cout << endl;
                }
                system("CLS");
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        arr[i][j] = ' ';
                }
                for(i=i1; i<=i2; i++)
                {
                    if(shapetype==0)
                    {
                        x++;
                        y=j1;
                        for(j=1; j<=x; j++)
                        {
                            y++;
                            arr[i][y] = '*';
                        }
                    }
                    else
                    {
                        for(j=j1; j<=j2; j++)
                            arr[i][j] = '*';
                    }
                }
                i1 -= 2; i2 -= 2; j1 -= 8; j2 -= 8;
            }
        }

        else if(pos_x==-1 & pos_y==-1)
        {
             for(k=1; k<=nos; k++)
            {
                x=0;
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        cout << arr[i][j];
                    cout << endl;
                }
                system("CLS");
                for(i=0; i<40; i++)
                {
                    for(j=0; j<200; j++)
                        arr[i][j] = ' ';
                }
                for(i=i1; i<=i2; i++)
                {
                    if(shapetype==0)
                    {
                        x++;
                        y=j1;
                        for(j=1; j<=x; j++)
                        {
                            y++;
                            arr[i][y] = '*';
                        }
                    }
                    else
                    {
                        for(j=j1; j<=j2; j++)
                            arr[i][j] = '*';
                    }
                }
                i1 += 2; i2 += 2; j1 -= 8; j2 -= 8;
            }
        }
        else
        {
            cout << "\nInvalid Choice!\n\n"; 
            specifications();
        }
    }
};
class Box : public SimpleShape
{
    public:
    int i,j;
    char ch='Y';
    void draw()
    {
        cout << "Enter width and height of the box: ";
        cin >> width >> height;

        for(i=(20-(height/2)); i<=(20+(height/2)); i++)
        {
            for(j=(100-(width/2)); j<=(100+(width/2)); j++)
                arr[i][j] =  '*';
        }
        shapetype = 1;
        while(ch=='Y' || ch == 'y')
        {
            SimpleShape::move();
            cout << "Do you want to demonstrate the movement of the object again? (Y/N): ";
            cin >> ch;
        }
    }
};
class Tent : public SimpleShape
{
    public:
    int i,j,x=0,y;
    char ch='Y';
    void draw()
    {
        cout << "Enter base of the tent: ";
        cin >> base;
        for(i=(20-(base/2)); i<=(20+(base/2)); i++)
        {
            x++;
            y=100-(base/2);
            for(j=1; j<=x; j++)
            {
                y++;
                arr[i][y] = '*';
            }
        }
        shapetype = 0;
        while(ch=='Y' || ch == 'y')
        {
            SimpleShape::move();
            cout << "Do you want to demonstrate the movement of the object again? (Y/N): ";
            cin >> ch;
        }
    }
};
int main()
{   
    Box B;
    Tent T;
    ComplexShape CS;
    int ch,i,j;
    for(i=0; i<40; i++) // Array elements filled with spaces
    {
        for(j=0; j<200; j++)
            arr[i][j] = ' ';   
    }
    a:
    cout << "\n~SHAPE MOVEMENT MENU~\n";
    cout << "Press 1 for creating a box.\nPress 2 for creating a tent.\nPress 3 for creating a complex shape.\nPress 4 to exit.\nEnter choice: ";
    cin >> ch;
    switch(ch)
    {
        case 1: B.draw(); goto a; break;
        case 2: T.draw(); goto a; break;
        case 3: CS.setDirection(); goto a; break;
        case 4: cout << "\nThank You!"; exit(0);
        default: cout << "\nInvalid Choice!\n\n"; goto a;
    }
    return 0;
}