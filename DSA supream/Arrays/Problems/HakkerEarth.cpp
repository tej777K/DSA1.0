#include <iostream>
#include<vector>
#include <algorithm>
#include <set>

using namespace std;

int fun(vector<int>play ,int singer , int num){
	int count = 0;
	for (int i = 0; i < num; i++)
    {
        if(singer == play[i]){
            count++;
        }
    }

    return count;
    

}

int ct(vector<int>allcount , int max){
    int no_ofav_singers = 0;
   for(auto x :allcount){
     if(max == x){
       no_ofav_singers++;
     }
   }

   return no_ofav_singers;
}


int main() {
	int num;
	//number of songs in the playlist
	cin >> num;    //Reading input from STDIN
	cout << "Input number is " << num << endl;

	// Create a  song playlist 
cout<<"Enter singers song"<<endl;
	vector<int>play(num);
	for(int i =0 ; i<num ; i++){
		cin>>play[i];
	}

	
set<int> uniqueSet(play.begin(), play.end());

    // Converting the set back to a vector if needed
vector<int> singer(uniqueSet.begin(), uniqueSet.end());

	// //Creating the singer playlist  

	// int singer[] = { 1 ,2 ,3 ,4, 5};

  vector<int>allcount;

	for(int i=0 ; i<num ; i++){
        int temp = singer[i];
       allcount.push_back(fun(play , singer[i] , num));
	}

    for(auto x:allcount){
        cout<<x<<" "<<endl;
    }

int maxElement = *max_element(allcount.begin(), allcount.end());
cout<<"max:"<<maxElement<<endl;

int ans = ct(allcount , maxElement);

cout<<"NO of fav singers for bob : "<<ans<<endl;


		
}


