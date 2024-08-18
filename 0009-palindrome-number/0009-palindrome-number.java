class Solution {
    public boolean isPalindrome(int x) {
        if(x<0)return false;
        boolean ans=true;
        int digits=(int)(Math.log10(x));
        int powr=(int)(Math.pow(10, digits));
        while(x!=0){
            int firstdig=x/powr;
            if(firstdig!=x%10){ans=false;break;}
            x%=powr;
            x/=10;
            powr/=100; 
        }
        return ans;
    }
}