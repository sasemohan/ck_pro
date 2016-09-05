import java.io.*;
import java.util.*;
class String
{
public String prefix(String[] str) {
    String Prefix1 = "";
    if(strs.length!=0){
        Prefix1 = str[0];
    }
    for(int i=1; i<str.length; i++){
        String compare = strs[i];
        int j=0;
        for(; j<Math.min(Prefix1.length(), strs[i].length()); j++){
            if(Prefix1.charAt(j) != compare.charAt(j)){
                break;
            }
        }
        Prefix1 = str[i].substring(0, j);
    }
    return Prefix1;
}
public ststic void main(string args[])
{
string s=new String();
s.prefix();
}
}
