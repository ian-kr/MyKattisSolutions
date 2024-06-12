/**
 * @Author: Ian Kristona
 * Date: 6/12/2024
 * Problem: Hitting the Targets
 * Link: https://open.kattis.com/problems/hittingtargets
 */

#include <bits/stdc++.h>

using namespace std;

int main(){

	cin.tie(0)->sync_with_stdio(0);

	int m; cin >> m;
	
	vector<vector<int>> shapes;

	while(m--){

		vector<int> dummy;
		string shape; cin >> shape;

		if(shape == "circle"){
			int x,y,r; cin >> x >> y >> r;
			dummy.push_back(x);
			dummy.push_back(y);
			dummy.push_back(r);
		}
		if(shape == "rectangle"){
			int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
			dummy.push_back(x1);
			dummy.push_back(y1);
			dummy.push_back(x2);
			dummy.push_back(y2);
		}

		shapes.push_back(dummy);
	}

	int points; cin >> points;

	while(points--){

		int res = 0;

		int x,y; cin >> x >> y;

		for(int i = 0; i < shapes.size(); i++){
			 
			if(shapes[i].size() == 3){
				// Distance Formula
				double dist = sqrt( (pow((double)(x-shapes[i][0]),2.0)) +  (pow((double)(y-shapes[i][1]),2.0)) );
				if( dist <= (double)shapes[i][2]) res++;
			}
			if(shapes[i].size() == 4){
				if( x >= shapes[i][0] && x <= shapes[i][2] && y >= shapes[i][1] && y <= shapes[i][3]) res++; 
			}
		}

		cout << res << '\n';
	}	


	return 0;

}

