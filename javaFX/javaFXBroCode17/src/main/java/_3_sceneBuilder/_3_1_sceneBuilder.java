package _3_sceneBuilder;

import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

import java.io.IOException;

public class _3_1_sceneBuilder extends Application {
    public static void main(String[] args) {
        Application.launch(args);
    }

    @Override
    public void start(Stage stage) throws IOException {
        Parent root = FXMLLoader.load(getClass().getResource("/_3_scene/_3_1_scene1.fxml"));

        stage.setTitle("Hello World");
        stage.setScene(new Scene(root));
        stage.show();

    }
}
