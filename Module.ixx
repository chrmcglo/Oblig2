export module my_module;
import <iostream>;
import <vector>;
export {
	template <typename T>
	T utregning(const T& x, const T& y) {
		return x + y;
	}

    template <typename T>
    auto count(const std::vector<T>& x) { // Kan ikke ha "T" hvis vi ikke returnere noe.
    int size = x.size();
        for (int i = 0; i < size - 1; i++) {
            auto value = x[i];
            if (value == x[i + 1]) {
                return x[i];
            }
        }
    }
    template <typename T>
    auto count(const T* x, size_t size) {
        for (size_t i = 0; i < size - 1; i++) {
            if (x[i] == x[i + 1]) {
                return x[i];
            }
        }
    }
}