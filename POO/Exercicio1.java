
import java.util.Scanner;

public class Exercicio1{
    public static void main (String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um numero (n): ");
        int a = sc.nextInt();

        for (int i = 1; i <= a; i++){
            System.out.println("valores de 1 a n: " + i);
        }
        sc.close();
    }

    

    
}
