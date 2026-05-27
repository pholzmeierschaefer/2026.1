// Classe Main
class Main {
    public static void main(String[] args) {
        Vinho vinho1 = new Vinho("Concha y Toro", 10, 35.0, 10.0);
        Cerveja cerveja1 = new Cerveja("Roleta Russa", 27, 21.0);

        System.out.println("Preço de venda do vinho " + vinho1.getNome() +
            ": " + vinho1.precoVenda());
        System.out.println("Preço de venda da cerveja " + cerveja1.getNome() +
            ": " + cerveja1.precoVenda());
    }
}

// Classe Bebida
class Bebida {
    private String nome;
    private int qtdEstoque;
    private double precoBase;

    public Bebida(String nome, int qtdEstoque, double precoBase) {
        this.nome = nome;
        this.qtdEstoque = qtdEstoque;
        this.precoBase = precoBase;
    }

    public String getNome() {
        return nome;
    }

    public int getQtdEstoque() {
        return qtdEstoque;
    }

    public double getPrecoBase() {
        return precoBase;
    }
}

// Classe Cerveja
class Cerveja extends Bebida {
    public Cerveja(String nome, int qtdEstoque, double precoBase) {
        super(nome, qtdEstoque, precoBase);
    }

    public double precoVenda() {
        return getPrecoBase();
    }
}

// Classe Vinho
class Vinho extends Bebida {
    private double taxaImportacao;

    public Vinho(String nome, int qtdEstoque, double precoBase,
        double taxaImportacao) {
        super(nome, qtdEstoque, precoBase);
        this.taxaImportacao = taxaImportacao;
    }

    public double precoVenda() {
        return (getPrecoBase() + taxaImportacao);
    }
}

// Classe LojaBebidas
/*class LojaBebidas {
    private Vinho[] vinhos;
    private Cerveja[] cerveja;
}*/

