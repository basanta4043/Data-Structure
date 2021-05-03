class passByValue {
    public static void passByValue(int x, int y){
        int z=x;
        x=y;
        y=z;
    }
    public static void main(String[] args) {
        int a=5, b=6;
        System.out.println("before swapping a="+""+a+"b="+""+b);
        passByValue(a,b);
        System.out.println("after swapping a="+""+a+"b="+""+b);
    }
}
