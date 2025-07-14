package _2_scenes;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.paint.Color;
import javafx.scene.shape.Line;
import javafx.scene.shape.Rectangle;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.stage.Stage;

import java.io.IOException;

public class _2_1_scene extends Application {

    public static void main(String args) {
        Application.launch(args);
    }

    public void start(Stage stage) throws IOException {
        Group root = new Group();
        Scene scene = new Scene(root, 600, 400, Color.LIGHTSKYBLUE);
        stage.setScene(scene);

        stage.setX(760);
        stage.setY(460);

        Text text = new Text();
        text.setText("Whooa!!!");
        text.setX(50);
        text.setY(50);
        text.setFont(Font.font("Verdana", 50));
        text.setFill(Color.LIMEGREEN);


        Line line = new Line();
        line.setStartX(200);
        line.setStartY(200);
        line.setEndX(500);
        line.setEndY(200);
        line.setStrokeWidth(5);
        line.setStroke(Color.RED);
        line.setRotate(45);

        Rectangle rectangle = new Rectangle();
        rectangle.setX(100);
        rectangle.setY(200);
        rectangle.setWidth(100);
        rectangle.setHeight(200);

        root.getChildren().add(text);
        root.getChildren().add(line);
        root.getChildren().add(rectangle);

        stage.show();
    }
}
