class Solution {
public:
    int tribonacci(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        if(n==0) return n;
        else if(n==1 || n==2){
            return 1;
        }
        int a=0,b=1,c=1;
        int next;
        for(int i = 3;i<=n;i++){
            next = a+b+c;
            a=b;
            b=c;
            c=next;
        }
        return c;
    }
};