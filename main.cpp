//Tower of Hanoi
#include <iostream>
using namespace std;

void TOH(int N, char source, char dest,char aux){
    if(N==1){
        cout<<"Move disk from"<<source<<"to"<<dest<<endl;
        return;
    }
    TOH(N-1,source,aux,dest);
    cout<<"Move disk"<<N<<"From"<<source<<"TO"<<dest<<endl;
    TOH(N-1,aux,dest,source);
}

int main(){
    int n;
    cin>>n;
    TOH(n, 'A','C','B');

    return 0;
}
