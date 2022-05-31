#include <iostream>
#include <vector>
#define PB push_back

using namespace std;
typedef vector<int> vi;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int k;
        cin >> n >> k;

        vi a;
        vi result;

        for (int i = 0; i < n; i++)
        {
            int input;
            cin >> input;
            a.PB(input);
        }

        int index = n - (k % n);
        for(int i = index; i < n; i++){
            result.PB(a[i]);
        }

        for(int i = 0; i < index; i++){
            result.PB(a[i]);
        }

        for(int i = 0; i < n; i++){
            cout << result[i] << " ";
        }

        cout << "\n";
        
    }
    return 0;
}