
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int [] arr=new int [nums.length];
        for(int i=0;i<nums.length;i++)arr[i]=nums[i];
        Arrays.sort(arr);
        int l=0,r=nums.length-1;
        while(arr[l]+arr[r]!=target){
            if(arr[l]+arr[r]>target)r--;
            else l++;
        }
        int ans[]= new int[2];
        boolean foundl=false,foundr=false;
      for(int i=0;i<nums.length;i++){
            System.out.println(arr[l]+"\n"+arr[r]);
            if(arr[l]==nums[i]&&!foundl){ans[0]=i;foundl=true;}
            else if(arr[r]==nums[i]&&!foundr){ans[1]=i;foundr=true;}
        } 
        return ans;

    }
}