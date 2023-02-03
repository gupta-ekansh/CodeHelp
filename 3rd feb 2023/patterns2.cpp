#include<bits/stdc++.h>
using namespace std;
int main()
{
    //    *
    //   * *
    //  * * *
    // * * * * 
    cout << "FULL PYRAMID" << endl;
    int n = 6;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "INVERTED FULL PYRAMID" << endl;
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout <<  " ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "SOlID DIAMOND" << endl;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout  << " ";
        }
        for(int j=1;j<=i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout << " ";
        }
        for(int j=1;j<=n-i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl << "HOLLOW PYRAMID" << endl;
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout << " ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            if(j == 1 || j == (2*i)-1){
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout << " ";
        }
        for(int j=1;j<=2*(n-i)+1;j++){
            if(j == 1 || j == 2*(n-i)+1){
                cout << "*";
            }
            else{
                cout <<  " ";
            }
        }
        cout << endl;
    }
    cout << endl << "Flipped Solid Diamond" << endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout << "*";
        }
        for(int k=1;k<=i;k++){
            cout << "  ";
        }
        for(int l=1;l<=n-i+1;l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << "*";
        }
        for(int k=1;k<=n-i+1;k++){
            cout << "  ";
        }
        for(int l=1;l<=i;l++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl << "Fancy Pattern" << endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j == i){
                cout << i;
            }
            else{
                cout << i << "*";
            }
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            if(j == n-i+1){
                cout << n-i+1;
            }
            else{
                cout << n-i+1 << "*";
            }
        }
        cout << endl;
    }
    cout << endl << "Alphabet Pattern" <<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            char c = 'A' + j-1;
            cout << c << " ";
        }
        for(int k=i-1;k>=1;k--){
            char c = 'A' + k - 1;
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}