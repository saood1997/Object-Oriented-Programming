public class TextEditorPlugin implements Plugin{
    @Override
    public void show() {
        System.out.println("Showing txt");
    }

    @Override
    public void save() {
        System.out.println("Saving txt");
    }
}
