package interfaces;

class Cachorro extends Canino implements Pet {
    public void emiteSom(){
        System.out.println("som");
    }
    
    public void movimentaEmMatilha(){
        System.out.println("matilha");
    }

    public void brinca(){
        System.out.println("brinca");
    }
    
    public void rola(){
        System.out.println("rola");
    }
}
