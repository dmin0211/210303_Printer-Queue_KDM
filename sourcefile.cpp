#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int testCase=0;
    cin>>testCase;
    int n,m;
    for(int i=0;i<testCase;i++){
        int count=1;
        int target=0;
        cin>>n>>m;
        queue <pair<int,int> > valueQueue;
        for(int j=0;j<n;j++){
            int temp=0;
            cin>>temp;
            if(j==m) target=temp;
            valueQueue.push(pair<int,int> (temp,j));
        }
        for(int j=9;j>0;j--){
            int size=valueQueue.size();
            for(int tmp=0;tmp<size;tmp++){
                int temp=valueQueue.front().first;
                int index=valueQueue.front().second;
                //cout<<size<<" "<<j<<" "<<temp<<" "<<index<<endl;
                valueQueue.pop();
                if(temp<j){
                    valueQueue.push(pair<int,int> (temp,index));
                }else if(temp==j){
                    if(index==m){
                        cout<<count<<endl;
                        break;
                    }else if(target!=j){
            
                        tmp=size;
                    }
                       count++;
                } 
            }
        }
    }
}