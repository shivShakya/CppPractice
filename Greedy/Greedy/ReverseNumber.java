class RevNumber {
       
      public int reverse(int number){
           int temp = number;
           int reverseNumber = 0;
           while(temp > 0){
                 int rem = temp % 10 ;
                 reverseNumber = (reverseNumber * 10) + rem;
                 temp = temp / 10;
           };
           return reverseNumber;
      }
}

public class ReverseNumber{
         
       public static void main(String[] args){
                RevNumber rn = new RevNumber();
                int n = rn.reverse(1502);
       
                 System.out.print(n);
       }

}
