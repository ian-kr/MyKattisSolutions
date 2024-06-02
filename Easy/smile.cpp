// Ian Kristona
// 9/7/2023
// Solution to Kattis problem? SMILE
#include <bits/stdc++.h>
using namespace std;

int main(){

    // Take in  input
    string smiles;
    cin >> smiles;
    // traverse the string with a for loop
    for(int i = 0; i < smiles.size(); i++){
        // Handles : smiles
        if(smiles[i] ==  ':'){
            if(smiles[i+1] == ')'){
                cout << i << endl;
            }
            else if(smiles[i+1] ==  '-'){
                if(smiles[i+2] == ')'){
                    cout << i << endl;
                }
            }
        }
        // Handles ; smiles 
        else if(smiles[i] == ';'){
            if(smiles[i+1] == ')'){
                cout << i << endl;
            }
            else if(smiles[i+1] ==  '-'){
                if(smiles[i+2] == ')'){
                    cout << i << endl;
                }
            }
        }
    }


    return 0;
}