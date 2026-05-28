package prova2.p2015;

public abstract class Entidade implements Colidivel {
    private int x;
    private int y;
    private int z;
    private int vida;

    public Entidade(int x, int y, int z, int vida){
        this.x = x;
        this.y = y;
        this.z = z;
        this.vida = vida;
    }

    public abstract double calculaVolume(); //implementa nos filhos

    @Override
    public boolean colidiu(Colidivel outro){
        if (outro instanceof Entidade){
            Entidade outraEntidade = (Entidade) outro;
            if(
                this.x == outraEntidade.getX() &&
                this.y == outraEntidade.getY() &&
                this.z == outraEntidade.getZ()  
            ){
                return true;
            }
        }
        return false;
            
        
    }


    public int getX(){
        return this.x; 
    }
    public void setX(int x){
        this.x = x; 
    }

    public int getY(){
        return this.y;
    }
    public void setY(int y){ 
        this.y = y; 
    }

    public int getZ(){ 
        return this.z; 
    }
    public void setZ(int z){ 
        this.z = z; 
    }

    public int getVida(){ 
        return this.vida; 
    }
    public void setVida(int vida){ 
        this.vida = vida; 
    }

}
