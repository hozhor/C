public class lianxi02 {
public static void main(String[] args) {
    int count = 0;
    for(int i=101; i<200; i+=2) {
     boolean b = false;
     for(int j=2; j<=Math.sqrt(i); j++) 
     {
        if(i % j == 0) { b = false; break; } 
         else           { b = true; }
     }
        if(b == true) {count ++;System.out.println(i );}
                                  }
    System.out.println( "素数个数是: " + count);
}
}
