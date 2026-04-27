# Quote JSON with `nlohmann-json`
***External Library Required: nlohmann-json***

## 1. Write JSON File

### 1.1 Basic Write
```cpp
#include <nlohmann/json.hpp>    // main thing that in use
#include <fstream>
#include <iostream>
#include <string>               // Going to use in 2.1

int main() {
        using namespace std;
        // Create a JSON object
        nlohmann::json data;
        data["name"] = "Zhang San";
        data["age"] = 30;
        data["city"] = "Beijing";
        data["hobbies"] = {"reading", "swimming", "coding"};

        // Write in
        ofstream file("output.json");
        file << data;
        file.close();
}
```

### 1.2 Format Write
```cpp
void writeFormattedJSON() {
        nlohmann::json data = {
                {"users", {
                        {
                                {"id", 1},
                                {"name", "Alice"},
                                {"score", 95.5}
                        },
                        {
                                {"id", 2},
                                {"name", "Bob"},
                                {"score", 87.0}
                        }
                }},
                {"total", 2}
        };

        // dump(4) means indent 4 spaces
        ofstream file("formatted.json");
        file << data.dump(8);

        // or using setw to indent
        ofstream file2("pretty.json");
        file2 << setw(8) << data;
}
```

### 1.3 Append Write
```cpp
void appendToJSONArray() {
        using namespace std;
        ifstream infile("data.json");
        nlohmann::json data;

        if (infile.is_open()) {
                infile >> data;
                infile.close();
        } else {
                data["logs"] = nlohmann::json::array();
        }

        // Add new data
        data["logs"].push_back({
                {"timestamp", "2026-04-26 10:00:00"},
                {"message", "User Login"}
        });
        ofstream outfile("data.json");
        outfile << data.dump(8);
}
```

## 2. Read JSON File

### 2.1 Basic Read
```cpp
void basicRead() {
        ifstream file("data.json");
        if (!file.is_open()) {
                cerr << "Can't Open File" << endl;
                return;
        }

        nlohmann::json data;
        file >> data;

        // Visit data
        string name = data["name"];
        int age = data["age"];

        cout << "Name: " << name << ", Age: " << age << endl;
}
```

### 2.2 Safe Read (with a error handler)
```cpp
void safeRead() {
        try {
                ifstream file("config.json");
                if (!file.is_open()) {
                        throw runtime_error("File Doen Not Exists");
                }

                nlohmann::json config = json::parse(file);

                // Give default value with value()
                string host = config.value("host", "localhost");
                int post = config.value("port", 8080);
                bool debug = config.value("debug", false);

                // Check is db contains
                if (config.contains("database")) {
                        auto& db = config["database"];
                        string dbName = db.value("name", "default");
                }
        } catch (const nlohmann::json::parse_error& e) {
                cerr << "JSON Analysis Error: " << e.what() << endl;
        } catch (const exception& e) {
                cerr << "Error: " << e.what() << endl;
        }
}
```

### 2.3 Read Big Files
```cpp
void readLargeFile() {
        // Option 1: Streaming Read
        ifstream file("large.json");
        nlohmann::json data = nlohmann::json::parse(file);

        // Option 2: Read to String
        ifstream file2("large.json");
        string content((istreambuf_iterator<char>(file2))
                        istreambuf_iterator<char>());
        nlohmann::json data2 = nlohmann::json::parse(content);
}
```

## 3. Advance Skills

### 3.1 Binary R/W (faster!)
```cpp
// Write Binary
vector<uint8_t> binary = nlohmann::json::to_cbor(data);
ofstream file("data.cbor", std::ios::binary);
file.write(reinterpret_cast<char*>(binary.data()), binary.size());

// Read Binary
ifstream file("data.cbor", std::ios::binary);
vector<uint8_t> buffer((std::istreambuf_iterator<char>(file)),
                        std::istreambuf_iterator<char>());
nlohmann::json data = nlohmann::json::from_cbor(buffer);
```