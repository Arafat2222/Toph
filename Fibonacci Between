///\/\/\/\/\/***************الله أكبر***************/\/\/\/\/\/\/
//*********** حَسبنا الله و نعم الوکیل نعم المولی و نعم النصیر *************

//1. بِسْمِ اللَّهِ الرَّحْمَٰنِ الرَّحِيمِ
//2. الْحَمْدُ لِلَّهِ رَبِّ الْعَالَمِينَ
//3. الرَّحْمَٰنِ الرَّحِيمِ
//4. مَالِكِ يَوْمِ الدِّينِ
//5. إِيَّاكَ نَعْبُدُ وَإِيَّاكَ نَسْتَعِينُ
//6. اهْدِنَا الصِّرَاطَ الْمُسْتَقِيمَ
//7. صِرَاطَ الَّذِينَ أَنْعَمْتَ عَلَيْهِمْ غَيْرِ الْمَغْضُوبِ عَلَيْهِمْ وَلَا الضَّالِّينَ

								

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define STRTOLOWER(x) std::transform (x.begin(), x.end(), x.begin(), ::tolower)
#define loop(i, n) for (int i = 0; i < n; i++)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
#define isVolwel(ch ) (0x208222 >> (ch & 0x1f)) & 1
#define full(s) s.begin(), s.end()
#define mx int(1e7+123)
int dp[mx];
vector<ll> f;
void fibo(){
    f.push_back(0);
    f.push_back(1);
    f.push_back(2);
    int i = 2;
    while(f[i] <= 10000000){
        f.push_back(1LL * (f[i] + f[i - 1]));
        i++;
    }
    
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
    fibo();
    int l, r;
    cin >> l >> r;
    int p = lower_bound(f.begin(), f.end(), l ) - f.begin();
    if(f[p] != l){
        p--;
    }
    if(f[p] < l){
        p++;
    }
    while(f[p] <= r){
        if(f[p] > r){
            break;
        }
        cout << f[p] << "\n";
        p++;
    }
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
