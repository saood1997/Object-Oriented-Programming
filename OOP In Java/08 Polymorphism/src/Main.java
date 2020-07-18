public class Main {
    public static void main(String args[]){
        Plugin p = PluginFactory.GetPlugin("pdf");
        p.save();
        p.show();
    }
}
