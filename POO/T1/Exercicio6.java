
import java.util.Scanner;

public class Exercicio6 {

     public static void main(String[] args) {

        int numero;
        int invertido = 0;
        int ultimo;
        


        Scanner sc = new Scanner(System.in);
        System.out.println("Digite o valor a ser invertido");
        numero = sc.nextInt();
        sc.close();

        while(numero != 0){
            ultimo = numero % 10;                      //pega o ultimo valor
            invertido = invertido * 10 + ultimo;        //coloca o ultimo na posição certa
            numero = numero / 10;                      //remove o ultimo do numero inicial e repete
        }

        System.out.println("Numero invertido: " + invertido);

     }
}
