
import java.util.Scanner;

public class Exercicio2 {
  
       public static void main(String[] args) {
        int a = 0;
        int b = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Digite o numero n");
        int n = sc.nextInt();
        sc.close();

    
        for(int i = 1; i <= n; i++){
            System.out.println(a + " ");
            int proximo = a + b;
            a = b;
            b = proximo;
        }

    }
    
}
