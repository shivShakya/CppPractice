public class AmstrongNumber {
      
       public  AmstrongNumber(int number){
             int count = 0 ; 
             int temp = number;
             int sum = 0;
             while(temp >= 1){
                     temp = temp/10;
                     count++;
             }

             temp = number;
             while(temp >= 1){
                         int rem = temp%10;
                         int result = 1;
                         for(int i = 1; i <= count ; i++)
                               result *= rem;
                         
                        sum += result;
                        temp = temp/10;
                  } 
              if(sum == number){
                  System.out.println("armstrong");
              }else{
                 System.out.println("not armstrong");
              }  
       }


       public static void main(String[] args){
              AmstrongNumber arm = new AmstrongNumber(4);


       }
}
