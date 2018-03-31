import java.math.*;
public class Main {
    public static void main(String args[]) {
         BigInteger res=new BigInteger("0");
        for(int i=1;i<=1e3;i++){
            res=res.add(new BigInteger(i+"").pow(i));
        }
        System.out.println(res);
    }
}