package _17_progressBar;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.ProgressBar;

import java.math.BigDecimal;
import java.net.URL;
import java.util.ResourceBundle;

public class _17_2_controller implements Initializable {

    BigDecimal progress = new BigDecimal(String.format("%.2f", 0.0));
    @FXML
    private Label label;
    @FXML
    private ProgressBar progressBar;
    @FXML
    private Button button;

    public void progressShow(ActionEvent event) {
        if (progress.doubleValue() < 1) {
            progress = new BigDecimal(String.format("%.2f", progress.doubleValue() + 0.1));
            progressBar.setProgress(progress.doubleValue());
            label.setText(Integer.toString((int) Math.round(progress.doubleValue() * 100)) + "%");
        }
    }

    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {
        progressBar.setStyle("-fx-accent: red");
    }
}
