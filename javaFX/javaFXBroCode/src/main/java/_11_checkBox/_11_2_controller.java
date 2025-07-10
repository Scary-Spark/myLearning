package _11_checkBox;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.scene.control.CheckBox;
import javafx.scene.control.Label;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;


public class _11_2_controller {

    Image image1 = new Image(getClass().getResourceAsStream("image1.png"));
    Image image2 = new Image(getClass().getResourceAsStream("image2.png"));

    @FXML
    private CheckBox checkBox;
    @FXML
    private Label label;
    @FXML
    private ImageView image;

    public void change(ActionEvent event) {

        if (checkBox.isSelected()) {
            label.setText("ON");
            image.setImage(image2);
        } else {
            label.setText("OFF");
            image.setImage(image1);
        }
    }
}
