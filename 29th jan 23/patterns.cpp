#include<iostream>
using namespace std;
int main()
{
    //solid rectangle
        // * * * * *
        // * * * * *
        // * * * * *
    cout << "SOLID REACTANGLE" << endl;    
    int cols = 5 , rows = 3;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    //square
    // * * * *
    // * * * *
    // * * * *
    cout << "SQUARE" << endl; 
    int length = 4;
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    //hollow rectangle
    // * * * * *
    // *       *
    // * * * * *
    cout << "HOLLOW RECTANGLE" << endl;
    rows = 4;
    cols = 5;
    for(int i=0;i<rows;i++){
        if(i == 0 || i == rows-1){
            for(int j=0;j<cols;j++){
                cout << "* ";
            }
        }
        else{
            cout << "* ";
            for(int i=1;i<cols-1;i++){
                cout << "  ";
            }
            cout << "* ";

        } 
        cout << endl;   
    }
    cout << endl;
    //half pyramid
    // *
    // **
    // ***
    // ****
    // *****
    cout << "HALF PYRAMID" << endl;
    rows = 6;
    for(int i=0;i<rows;i++){
        for(int j=0;j<i+1;j++){
            cout <<"* "; 
        }
        cout << endl;
    }
    cout << endl;
    // inverted half pyramid
    // * * * * *
    // * * * *
    // * * *
    // * *
    // * 
    cout << "INVERTED HALF PYRAMID" << endl;
    rows = 5;
    for(int i=rows;i>0;i--){
        for(int j=0;j<i;j++){
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    // numeric hapf pyramid
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    cout << "NUMERIC HALF PYRAMID" << endl;
    rows = 4;
    for(int i=0;i<rows;i++){
        for(int j=0;j<i+1;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    //inverted numeric pyramid
    // 1 2 3 4 5
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    cout << "INVERTED NUMERIC PYRAMID" << endl;
    rows = 5;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows-i;j++){
            cout << j+1 << " ";
        }
        cout << endl;
    }
    cout << endl;
    // full pyramid
    //     *
    //    * *
    //   * * *
    // * * * * *
    cout << "FULL PYRAMID" << endl;
    rows = 5;
    for(int i=0;i<rows;i++){
        for(int k=0;k<rows-i-1;k++){
            cout << " ";
        }
        for(int j=0;j<i+1;j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
