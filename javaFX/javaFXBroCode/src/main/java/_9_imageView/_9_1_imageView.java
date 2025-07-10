package _9_imageView;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.io.IOException;

public class _9_1_imageView extends Application {

    public static void main(String[] args) {
        Application.launch(args);

        // Image view is a node used for painting image loaded with images

        // image = photograph

        // imageview = photograph frame
    }

    @Override
    public void start(Stage stage) throws IOException {

        Parent root = FXMLLoader.load(getClass().getResource("_9_scene1.fxml"));
        Scene scene = new Scene(root);
        stage.setScene(scene);
        stage.show();
    }

}
