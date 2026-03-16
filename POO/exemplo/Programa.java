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




    }
    
}
