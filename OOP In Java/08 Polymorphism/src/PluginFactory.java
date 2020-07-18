public class PluginFactory {
    public static Plugin GetPlugin(String ext){
        if (ext == "pdf")
            return new PDFViewerPlugin();
        else if (ext == "txt")
            return new TextEditorPlugin();
        return null;
    }

}
