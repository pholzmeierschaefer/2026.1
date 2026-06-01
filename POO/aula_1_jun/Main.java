package aula_1_jun;
//metodo 2 importando classe
import aula_1_jun.geometria.retas.Triangulo;

//metodo 3 importar com *
import aula_1_jun.geometria.curvas.*;

public class Main {
    //pode usar Classe1 e Classe2 sem problemas ou alterações

    public static void main(String[] args) {


        //metodo 1 nome completo
        aula_1_jun.geometria.retas.Quadrado q = new aula_1_jun.geometria.retas.Quadrado();
        System.out.println("classe q: " + q.getClass());


        //metodo 2 importando classe, com ela importada podemos usar o nome curto
        Triangulo t = new Triangulo();
        System.out.println("classe t: " + t.getClass());


        //metodo 3 3 importar com *, importa todas as classes de um pacote
        Circulo c = new Circulo();
        System.out.println("classe t: " + c.getClass());


    }
}
