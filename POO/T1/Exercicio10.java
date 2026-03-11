import java.util.Scanner;

public class Exercicio10 {
     public static void main(String[] args){
        int valor;
        int sobra;

        Scanner sc = new Scanner(System.in);
        System.out.print("Digite o valor(inteiro): ");
        valor = sc.nextInt();
        sc.close();

        int n100 = valor / 100;
        valor = valor % 100; 

        int n50 = valor / 50;
        valor = valor % 50;

        int n20 = valor / 20;
        valor = valor % 20;

        int n10 = valor / 10;
        valor = valor % 10;

        int n5 = valor / 5;
        valor = valor % 5;

        int n2 = valor / 2;
        valor = valor % 2;

        int n1 = valor / 1;
        

        System.out.println(n100 + " notas de 100");
        System.out.println(n50 + " notas de 50");
        System.out.println(n20 + " notas de 20");
        System.out.println(n10 + " notas de 10");
        System.out.println(n5 + " notas de 5");
        System.out.println(n2 + " notas de 2");
        System.out.println(n1 + " notas de 1");



     }
    }
    

