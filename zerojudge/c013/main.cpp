#include <iostream>
using namespace std;

int main() {
    int test_case, A,F;
    cin>>test_case;
    for (int i = 0; i<=test_case; i++){
        // 此測資有test_case組數據
        cin>>A>>F;
        for (int time = 0; time < F; time++){
            for (int n = 1;n<=A; n++){
                for (int t = 1; t<=n;t++){
                    cout<<n;
                }
                cout<<endl;
            }
            for (int n = A-1; n>=1;n--){
                for (int t = 1; t<=n; t++){
                    cout<<n;
                }
                cout<<endl;
            }
            cout<<endl;
        }
        A = F = 0;
    }
    return 0;
}