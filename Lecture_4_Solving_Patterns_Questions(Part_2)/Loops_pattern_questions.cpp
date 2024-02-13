#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout << "Enter n : " ;
    // cin >> n;
    // int i = 1;
    //                  Pattern - 1
    //                  1 2 3 4
    //                  1 2 3 4
    //                  1 2 3 4

    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout << j << " " ;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    //                  Pattern - 2
    //                  4 3 2 1
    //                  4 3 2 1
    //                  4 3 2 1
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout << n-j+1 << " ";
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

     //                Pattern - 3
     //                  1 2 3 
     //                  4 5 6
     //                  7 8 9
    // int count = 1;
    // while (i<=n)
    // {
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout << count << " ";
    //         count = count + 1;
    //         j = j + 1;
    //     }
    //     cout << endl;
    //     i = i + 1;
    // }

    //              Pattern - 4
    //              *
    //              *  *
    //              *  *  *

    int n;
    cout << "Enter n : " ;
    cin >> n;

    int row = 1;

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << " * ";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    //              Pattern - 5
    //              1
    //              2   2
    //              3   3   3

    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << row << " ";
    //         col = col + 1;
    //     }
    //     cout << endl ;
    //     row = row + 1;
    // }

    //              Pattern - 6
    //              1
    //              2   3
    //              4   5   6
    //              7   8   9   10 

    // int count = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << count << " ";
    //         count = count + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    //              Pattern - 7
    //              1
    //              2   3
    //              3   4   5
    //              5   6   7   8

    // while (row<=n)
    // {
    //     int col = 1;
    //     int value = row;
    //     while (col <= row)
    //     {
    //         cout << value << " ";
    //         value = value + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    //              Pattern - 8
    //              1
    //              2   1
    //              3   2   1
    //              4   3   2   1

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << row - col + 1 << " ";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }


    //              Pattern - 9
    //              A   A   A   A
    //              B   B   B   B
    //              C   C   C   C
    //              D   D   D   D

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch << " " ;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    //              Pattern - 9
    //              A   B   C
    //              A   B   C
    //              A   B   C

    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col<=n)
    //     {
    //         char ch = 'A' + col - 1;
    //         cout << ch << " ";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    //              Pattern - 10
    //              A   B   C
    //              D   E   F
    //              G   H   I
    //  char start = 'A';
    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         cout << start << " ";
    //         start = start + 1;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    //              Pattern - 11
    
    //              A   B   C
    //              B   C   D
    //              C   D   E
    // while (row <= n)
    // {
    //     int col  = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row + col - 2;
    //         cout << ch << " ";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    
    //              Pattern - 12
    //              A
    //              B   B
    //              C   C   C
    //              D   D   D   D

    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         char ch = 'A' + row - 1;
    //         cout << ch << " ";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }

    //              Pattern - 13
    //              A
    //              B   C
    //              C   D   E
    //              D   E   F   G

    // while (row<=n)
    // {
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         char ch = 'A' + row + col - 2;
    //         cout << ch << " ";
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }
    
    //              Pattern - 14
    //              D
    //              C   D
    //              B   C   D
    //              A   B   C   D

    // while (row <= n)
    // {
    //     int col = 1;
    //     char ch = 'A' + n - row;
    //     while (col <= row)
    //     {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //         col = col + 1;
    //     }
    //     row = row + 1;
    //     cout << endl;
    // }

    //              Pattern - 15
    //                          *
    //                      *   *
    //                  *   *   *
    //              *   *   *   *

    // while (row<=n)
    // {
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space = space - 1;
    //     }
    //     int col = 1;
    //     while (col<=row)
    //     {
    //         cout << "*" ;
    //         col = col + 1;
    //     }
    //     cout << endl;
    //     row = row + 1;
    // }


    //              Pattern - 16
    //                      1
    //                  1   2   1
    //              1   2   3   2   1
    //          1   2   3   4   3   2   1

    // while (row <= n)
    // {
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " " ;
    //         space = space - 1;
    //     }

    //     int j = 1;
    //     while (j <= row)
    //     {
    //         cout << j ;
    //         j = j + 1;
    //     }

    //     int start = row - 1;
    //     while (start)
    //     {
    //         cout << start ;
    //         start = start - 1;
    //     }
        
    //     cout << endl;
    //     row = row + 1;
    // }


    //              Pattern - 17
    //      1   2   3   4   5   5   4   3   2   1
    //      1   2   3   4   *   *   4   3   2   1
    //      1   2   3   *   *   *   *   3   2   1
    //      1   2   *   *   *   *   *   *   2   1
    //      1   *   *   *   *   *   *   *   *   1

    int counter = 1;
    while (row <= n)
    {
        // Printing First triangle.
        int first = n - row + 1;
        int count = 1;
        while (first)
        {
            cout << count;
            count++;
            first--;
        }

        // Printing half stars
        int halfLeftStars = row - 1;
        while (halfLeftStars)
        {
            cout << "*";
            halfLeftStars--;
        }
        // Printing 2nd Half stars.
        int stars2 = row - 1;
        while (stars2)
        {
            cout << "*";
            stars2--;
        }
        // Printing 3rd Triangle
        int tri2 = n - row + 1;
        while (tri2)
        {
            cout << tri2;
            tri2--;
        }

        cout << endl;
        row++;
    }
       
    
    


     
}