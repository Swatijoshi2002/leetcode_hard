class Solution {
    public String orderlyQueue(String s, int k) {
        char a[]=s.toCharArray();
         String str=s;
        if(k>1)
        {
            Arrays.sort(a);
            String ans=String.valueOf(a);
            return ans; 
        }
        else{
           
            for(int i=1;i<s.length();i++)
            {
                String temp=s.substring(i)+s.substring(0,i);
                if(str.compareTo(temp)>0)
                {
                    str=temp;
                }
            }
        }
        return str;
    }
}
