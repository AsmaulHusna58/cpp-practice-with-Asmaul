#include <iostream>
using namespace std;

int main()
{
    const int MAXN  = 100;
    int t, n, a[MAXN], cnt[MAXN];
    cin >> t;

    while (t--)
    {
        for(int i=0; i<10; i++){
            cnt[i] = 0;
        }
            cin >> n;
            bool f = false;
            for(int i=0; i<n; i++){
                cin >> a[i];
            }
                
                for(int i=0; i<n; i++){
                    cnt[a[i]] ++;
                }
                    if(((cnt[0] >= 3 && cnt[1] >=1) && (cnt[5] >=1 && cnt[2] >= 2)) && cnt[3] >=1){
                        f = true;
                        cout << i+1 << endl;
                        break;
                    }
                }
                if(!f){
                    cout << 0 << endl;
                }
            

        
    
    return 0;
}