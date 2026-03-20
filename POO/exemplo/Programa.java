package exemplo;

public class Programa {

    public static void main(String [] args){
        

        Circulo c; //variavel q pode armazenar valores do tipo circulo

        c = new Circulo(); // novo objeto do tipo classe circulo armazenado na varaivel c

        System.out.println("valor de raio (circulo apontado por c): " + c.raio ); //nome da variavel q tem o objeto (c).nome da variavel(raio)


        c.raio = 3.0;

        c.imprimeArea();

        System.out.println("valor de raio (circulo apontado por c): " + c.raio );

        Circulo c2;

        c2 = c;

        c2.raio = 6.0;

        System.out.println("valor de raio (circulo apontado por c): " + c.raio );
        System.out.println("valor de raio (circulo apontado por c2): " + c2.raio );

        c.imprimeArea();




        Triangulo t1 = new Triangulo();
        Triangulo t2 = new Triangulo();

        t1.base = 2;
        t1.altura = 3;
        t2.base = 9;
        t2.altura = 6;
        System.out.println("tem dimensoes iguais: " + t1.temDimIguais(t2)); 

        System.out.println("base antes de somar: "+ t1.base);
        System.out.println("altura antes de somar: "+ t1.altura);
        t1.somaTriangulo(t2);
        System.out.println("base somada: "+ t1.base);
        System.out.println("altura somada: "+ t1.altura);

        System.out.println("base antes de somar: "+ t2.base);
        System.out.println("altura antes de somar: "+ t2.altura);
        t1.somaTriangulo2(t2);
        System.out.println("base somada: "+ t2.base);
        System.out.println("altura somada: "+ t2.altura);




    }
    
}
