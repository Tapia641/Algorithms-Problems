//https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

#include <bits/stdc++.h>

using namespace std;

int countingValleys(int &n, string &s) {
    int cont = 0, res = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'U'){
            cont++;
            if (cont == 0)
                res++;
        }
        else
            cont--;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int n; string s;
    cin >> n >> s;
    cout<<countingValleys(n,s);
    return 0;
}
