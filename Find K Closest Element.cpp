#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class solution{
	public:
		int closestElement(vector<int>& nums,int k,int x){
		priority_queue<pair<int,int>>pq;
		for(int i=0;i<nums.size();i++){
			pq.push(make_pair(abs(x-i),i));
				if(pq.size()>k){
			     pq.pop()
		         }
		}
		vector<int> ans;
		while(!pq.empty()){
			ans.push_back(pq.top().second);
		}	
		sort(ans.begin(),ans.end());
		return ans;
		}
};
int main(){
		Solution obj;
	int n,arr[n];
	int k=4;
	int x=3;
	cout<<"Enter the Size of Array:";
	cin>>n;
	cout<<"Enter the Element of the array";
	{
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}	
	}
	cout<<closestElement(arr,k,x);	
}
