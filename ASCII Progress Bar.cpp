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
#define Size int(1e7)


vector<ll> Prime;
int isprime(ll N){
    if(N<2 || (!(N&1) && N!=2))
        return -1;
    for(int i=3; i*i<= sqrt(N); i+=2){
        if(!(N%i))
            return -1;
    }
    return 1;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
    double x;
    cin >> x;
    int n = x;
    int y = n / 10;
    cout << "[";
    for (int i = 1; i <= y; i++){
        cout << "+";
    }
    for (int i = 1; i <= 10 - y;i++){
        cout << ".";
    }
    cout << "] " << n << "%\n";
}
//			 @@MD.Arafat Kabir@@	
///\/\/\/\/\**********@University of Asia Pacific@**********/\/\/\/\/\/
