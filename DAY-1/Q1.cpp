# include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for (int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    cout << "The minimum element is "<< v.front() << endl;
    cout << "The maximum element is "<< v.back() << endl;

}
