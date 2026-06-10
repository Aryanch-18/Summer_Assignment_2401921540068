 public int strStr(String haystack, String needle) {
        int n = haystack.length();
        int n1=needle.length();
        for(int i=0;i<n-n1+1;i++){
            if(haystack.charAt(i)==needle.charAt(0)){
                if(haystack.substring(i,n1+i).equals(needle)){
                    return i;
                }
            }
        }
        return -1;
    }
}
