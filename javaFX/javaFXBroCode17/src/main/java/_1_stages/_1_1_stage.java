package _1_stages;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.scene.paint.Color;
import javafx.stage.Stage;

import java.io.IOException;

public class _1_1_stage extends Application {

    public static void main(String[] args) {
        Application.launch(args);
    }

    @Override
    public void start(Stage stage) throws IOException {

        // Create a new stage
        Stage stage2 = new Stage();

        // Create a root node
        Group root = new Group();

        // add scene to stage
        Scene scene = new Scene(root,
                Color.BLUE
        );

        // set the scene to stage
        stage.setScene(scene);
        stage.setTitle("Demo Stage");

        Image icon = new Image(getClass().getResource("/_1_stages/logo.png").toExternalForm());
        stage.getIcons().add(icon);

        stage.setWidth(420);
        stage.setHeight(420);
        stage.setResizable(false);
        stage.setX(50);
        stage.setY(50);
        // stage.setFullScreen(true);
        // stage.setFullScreenExitKeyCombination(KeyCombination.valueOf("q"));

        // show the stage (should be in the end)
        stage.show();
    }
}
