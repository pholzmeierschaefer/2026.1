package aula_6;

public class Forma {
    protected int x;
    protected int y;

    public void imprimePosicao() {
        System.out.println();
        System.out.println("A posição da forma é:");
        System.out.println(this.x);
        System.out.println(this.y);
    }

    public int getX() {
        return this.x;
    }

    public int getY() {
        return this.y;
    }

    public void setX(int x) {
        this.x = x;
        
    }

    public void setY(int y) {
        this.y = y;
   
    }

}
