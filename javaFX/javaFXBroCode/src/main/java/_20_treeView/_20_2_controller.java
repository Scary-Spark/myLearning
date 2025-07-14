package _20_treeView;

import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.TreeItem;
import javafx.scene.control.TreeView;

import java.net.URL;
import java.util.ArrayList;
import java.util.ResourceBundle;

public class _20_2_controller implements Initializable {
    @FXML
    private TreeView<String> treeView;

    public void selectItem() {
        TreeItem<String> item = treeView.getSelectionModel().getSelectedItem();

        if (item != null)
            System.out.println(item.getValue());
    }

    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {
        TreeItem<String> rootItem = new TreeItem<>("Files");
        TreeItem<String> branchItem1 = new TreeItem<>("Pictures");
        TreeItem<String> branchItem2 = new TreeItem<>("Videos");
        TreeItem<String> branchItem3 = new TreeItem<>("Musics");

        ArrayList<TreeItem<String>> leafItems = new ArrayList<>();
        leafItems.add(new TreeItem<>("Pic1"));
        leafItems.add(new TreeItem<>("Pic2"));
        leafItems.add(new TreeItem<>("Pic3"));

        rootItem.getChildren().addAll(branchItem1, branchItem2, branchItem3);

        branchItem1.getChildren().addAll(leafItems);

        treeView.setRoot(rootItem);
    }
}
