import java.util.Scanner;
import java.util.Random;


public class Exercicio12 {
    public static void main(String[] var0){

        int sorteado;
        int palpite = 0;

        Random gerador = new Random();
        sorteado = gerador.nextInt(100)+1;
        Scanner sc = new Scanner(System.in);
        while(palpite != sorteado){
            
            System.out.print("Digite o valor: ");
            palpite = sc.nextInt();

            

            if(palpite > 100 || palpite < 0){
                System.out.println("Digite um numero valido");
            }

            else{
                if(palpite < sorteado){
                System.out.println("O palpite eh menor que o sorteado");
                }
                else if(palpite > sorteado){
                    System.out.println("O palpite eh maior que o sorteado");
                }
                else{
                    System.out.println("Parabens, voce acertou");
                    System.out.println("o numero sorteado foi:" + sorteado);
                }
            }
           

            
            
            
        }
         sc.close();
    }
}
