package aula_27;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        
        Scanner sc = new Scanner(System.in);
        


        Data data1 = new Data(); //utiliza o construtor que nao pede parametros

        data1.imprime();
        /*System.out.println("Digite o dia:");
        data1.dia = sc.nextInt();
        System.out.println("Digite o mes:");
        data1.mes = sc.nextInt();
        System.out.println("Digite o ano:");
        data1.ano = sc.nextInt();
        
        data1.imprime();

        Data data2 = new Data(2, 2, 2026); //usa o construtor compativel com os 3 parametros passados
        data2.imprime(); 

        */

        //pessoa
        Pessoa.imprimeNumObjPessoa();

        Pessoa p = new Pessoa(); //o compativel é o primeiro da classe pessoa pois não tem parametro
        p.imprime();

        Pessoa.imprimeNumObjPessoa();

        Pessoa q = new Pessoa(9); //o compativel é o segundo da classe pessoa pois tem um int

        //Pessoa r = new Pessoa(2.0); nao tem construtor compativel no código

        
        
        q.imprime();
        Pessoa.imprimeNumObjPessoa();

        sc.close();
    }
}
