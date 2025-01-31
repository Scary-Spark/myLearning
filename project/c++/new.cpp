#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
using namespace std;

// Structure to store item details
struct Item
{
    string name;
    double price;
    int stock;
    int totalSold;

    Item(string n, double p, int s, int ts) : name(n), price(p), stock(s), totalSold(ts) {}
};

// Shop class to manage categories and items
class Shop
{
private:
    map<string, vector<Item>> categories; // Stores categories and their items

public:
    Shop() { loadData(); }

    // Add a new category
    void addCategory(const string &category)
    {
        if (categories.find(category) == categories.end())
        {
            categories[category] = {}; // Create an empty item list
            cout << "Category added: " << category << endl;
        }
        else
        {
            cout << "Category already exists!\n";
        }
    }

    // Add an item to a category
    void addItem(const string &category, const string &name, double price, int stock, int totalSold)
    {
        if (categories.find(category) == categories.end())
        {
            cout << "Category not found! Creating new category.\n";
            categories[category] = {};
        }
        categories[category].emplace_back(name, price, stock, totalSold);
        cout << "Item added: " << name << " to " << category << endl;
    }

    // Display all categories and items
    void display()
    {
        for (const auto &[category, items] : categories)
        {
            cout << category << ":\n";
            for (const Item &item : items)
            {
                cout << "  - " << item.name << " | Price: $" << item.price
                     << " | Stock: " << item.stock << " | Sold: " << item.totalSold << endl;
            }
        }
    }

    // Save data to YAML file
    void saveData()
    {
        ofstream file("shop_data.yml");
        if (!file)
        {
            cout << "Error opening file!\n";
            return;
        }
        for (const auto &[category, items] : categories)
        {
            file << category << ":\n";
            for (const Item &item : items)
            {
                file << "  - name: " << item.name << "\n";
                file << "    price: " << item.price << "\n";
                file << "    stock: " << item.stock << "\n";
                file << "    total_sold: " << item.totalSold << "\n";
            }
        }
        file.close();
    }

    // Load data from YAML file
    void loadData()
    {
        ifstream file("shop_data.yml");
        if (!file)
            return;

        string line, category, itemName;
        double price;
        int stock, totalSold;

        while (getline(file, line))
        {
            if (!line.empty() && line.find('-') == string::npos)
            {
                category = line.substr(0, line.find(':')); // Extract category name
                categories[category] = {};
            }
            else if (!line.empty())
            {
                if (line.find("name:") != string::npos)
                {
                    itemName = line.substr(8);
                }
                else if (line.find("price:") != string::npos)
                {
                    price = stod(line.substr(8));
                }
                else if (line.find("stock:") != string::npos)
                {
                    stock = stoi(line.substr(8));
                }
                else if (line.find("total_sold:") != string::npos)
                {
                    totalSold = stoi(line.substr(13));
                    categories[category].emplace_back(itemName, price, stock, totalSold);
                }
            }
        }
        file.close();
    }

    // Export data to an Excel-compatible CSV file
    void exportToExcel()
    {
        ofstream file("shop_data.csv");
        if (!file)
        {
            cout << "Error opening file!\n";
            return;
        }

        file << "Category,Item,Price,Stock,Total Sold\n"; // CSV Header
        for (const auto &[category, items] : categories)
        {
            for (const Item &item : items)
            {
                file << category << "," << item.name << "," << item.price << ","
                     << item.stock << "," << item.totalSold << "\n";
            }
        }

        file.close();
        cout << "Data exported to shop_data.csv successfully!\n";
    }

    // Destructor to save data when the program exits
    ~Shop()
    {
        saveData();
    }
};

// Main function
int main()
{
    Shop shop;
    int choice;
    string category, item;
    double price;
    int stock, totalSold;

    while (true)
    {
        cout << "\n1. Add Category\n2. Add Item\n3. Display Shop\n4. Export to Excel\n5. Exit\nChoice: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            cout << "Enter category name: ";
            getline(cin, category);
            shop.addCategory(category);
            break;
        case 2:
            cout << "Enter category: ";
            getline(cin, category);
            cout << "Enter item name: ";
            getline(cin, item);
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter stock quantity: ";
            cin >> stock;
            cout << "Enter total sold: ";
            cin >> totalSold;
            cin.ignore();
            shop.addItem(category, item, price, stock, totalSold);
            break;
        case 3:
            cout << "\nShop Inventory:\n";
            shop.display();
            break;
        case 4:
            shop.exportToExcel();
            break;
        case 5:
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
}
