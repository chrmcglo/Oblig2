export module my_module;
import <iostream>;
import <vector>;
import <optional>;


export{
    // Oppgave 1
   std::optional<int> find_minimum(const std::vector<int>& data) {
        if (data.empty()) return std::nullopt;  // uten nullopt blir det kræsj!
        else {
            int start{ data[0] };
            for (auto value : data) {
                if (start > value) {
                    start = value;
                }
            }
            return start;
        }
    }
    // Oppgave 2
    template <typename T>
    T utregning(const T& x, const T& y) {
        return x + y;
    }

    //Oppgave 3
    template <typename T>
    auto count(const std::vector<T>& x) { 
        int size = x.size();
        for (int i = 0; i < size - 1; i++) {
            auto value = x[i];
            if (value == x[i + 1]) {
                return x[i];
            }
        }
    }
    // Template for int array
    template <typename T>
    T count(const T* x, size_t size) {
        for (size_t i = 0; i < size - 1; i++) {
            if (x[i] == x[i + 1]) {
                return x[i];
            }
        }
    }
}