public class Factorial {
    public int fact(int number){
           
          if(number == 0)
                return 1;
           return number*fact(number-1);
    }
     
     public static void main(String[] args){
              Factorial factorial = new Factorial();

              int x = factorial.fact(3);
              System.out.println(x);
     }
}
