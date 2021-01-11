#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<int> a={10,2,5,1,8,20};
int x;
for(int p=0;p<a.size()-2;p++){
    for(int q=p+1;q<a.size()-1;q++){
        for(int r=q+1;r<a.size();r++){
            //cout<<p<<q<<r<<endl;
            if(a[p]+a[q]>a[r]&&a[p]+a[r]>a[q]&&a[q]+a[r]>a[p]){
                cout<<"jest dla "<<p<<q<<r<<endl;
                x=1;
            }
            else{
                //cout<<"nie ma"<<endl;
            }
        }
    }
}


if(x==1){
    return 1;
}
else{
    return 0;
}
}
