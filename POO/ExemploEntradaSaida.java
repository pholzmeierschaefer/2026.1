
import java.util.Scanner;

public class ExemploEntradaSaida {
    public static void main(String[] args){
        //Entrada
        Scanner sc = new Scanner(System.in);

        System.out.print("Digite um numero: ");
        int al = sc.nextInt();
        System.out.println("numero digitado: " + al);
        sc.close();
    }
}
