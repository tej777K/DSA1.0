    #include<iostream>
    #include<vector>
    using namespace std;


    void printAllSub(vector<int>&nums , int start , int end ){
    //base case 
    if(end ==  nums.size()){
        return;
    }

    // one cassse sol 

    for(int  i = start ;  i <= end  ; i++){
        cout<<nums[i];
    }
    cout<<endl;

    printAllSub(nums , start , end+1);

    }

    int main(){


    vector<int>nums ={ 1 ,2 ,3 ,4 ,5};
    int n =  nums.size() -1 ;

    int start  =  0 ;
    int end  = start;

    // printAllSub(nums , start , end );

    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            printAllSub(nums, start, end);
        }
    }

        return 0 ;
    }