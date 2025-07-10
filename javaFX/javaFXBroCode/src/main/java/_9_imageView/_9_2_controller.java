package _9_imageView;

import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;

public class _9_2_controller {
    @FXML
    ImageView image1;
    Button switchImage;

    Image image2 = new Image(getClass().getResourceAsStream("_9_image2.jpeg"));

    public void displayImage() {
        image1.setImage(image2);
    }
}
