package aula_6;

public class Circulo extends Forma {
    private int raio;

    public void imprimeMaisDireita(){
        System.out.println();
        System.out.println("ponto mais a direita:");
        System.out.println((this.x+this.raio));
        System.out.println(this.x);
        System.out.println(this.y);


        /*
        se o atributo da forma tiver privado

        System.out.println();
        System.out.println("ponto mais a direita:");
        System.out.println((this.getX()+this.raio));
        System.out.println(this.getX());
        System.out.println(this.getY());
        
        
        
        */
        
    }
}
