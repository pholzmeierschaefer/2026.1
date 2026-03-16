package Autor;

import java.util.Scanner;



public class Programa_autor {
    public static void main(String [] args){
        Autor a;

        a = new Autor();

        Scanner sc = new Scanner(System.in);
        System.out.print("nome: ");
        a.nome = sc.nextLine();
        System.out.print("id: ");
        a.id = sc.nextInt();

        System.out.println("foi digitado pelo usuario: ");
        System.out.print("nome: " + a.nome);
        System.out.println();
        System.out.print("id: " + a.id);
    
        
        sc.close();
}
}