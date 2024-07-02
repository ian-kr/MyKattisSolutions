/**
* @Author: Ian Kristona
* Date: 7/2/2024
* Problem: Chugging
* Link: https://open.kattis.com/problems/chugging
*/

#include <bits/stdc++.h>

using namespace std;


int main(void){
  
  int bob = 0, alice = 0, n; cin >> n;
  int t1,d1,t2,d2; cin >> t1 >> d1 >> t2 >> d2;

  int bd=0,ad=0;

  for(int i = 0; i < n ; i++){
    bob += t1 + bd;
    alice += t2 + ad;
    bd += d1;
    ad += d2;
  }

  if(bob == alice) cout << '=';
  if(bob > alice) cout << "Bob";
  if(bob < alice) cout << "Alice";

  return 0;
}
