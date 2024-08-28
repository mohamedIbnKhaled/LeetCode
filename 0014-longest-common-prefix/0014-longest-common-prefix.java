class Solution {
    public String longestCommonPrefix(String[] strs) {
    String s1=strs[0];
        String valid="";
        if(strs.length==1)return s1;
        //for(int i=0;i<s1.length();i++)
        //{
            String valid2="";
           for(int j=1;j<strs.length;j++)
           {
               String ss=strs[j],sub="";
               int counter=0;
             for(int k=0;k<ss.length()&&counter<s1.length();k++)
             {
                if(ss.charAt(k)==s1.charAt(counter)){sub+=ss.charAt(k);counter++;}
                else break;
             }
            // System.out.println("sub is = " + sub);
             if(valid2.length()>sub.length()||j==1)valid2=sub;
           }
        //  System.out.println("test   "+valid2);
            if(valid.length()<valid2.length())valid=valid2;
        //}
        return valid;
    }
}