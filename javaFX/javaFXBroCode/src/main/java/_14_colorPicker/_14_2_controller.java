package _14_colorPicker;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.geometry.Insets;
import javafx.scene.control.ColorPicker;
import javafx.scene.layout.Background;
import javafx.scene.layout.BackgroundFill;
import javafx.scene.layout.CornerRadii;
import javafx.scene.layout.Pane;
import javafx.scene.paint.Color;

public class _14_2_controller {
    @FXML
    private Pane pane;

    @FXML
    private ColorPicker colorPicker;

    public void colorPick(ActionEvent event) {
        Color myColor = colorPicker.getValue();
        pane.setBackground(
                new Background(
                        new BackgroundFill(
                                myColor,
                                CornerRadii.EMPTY,
                                Insets.EMPTY
                        )
                )
        );
    }
}
