#include <string>
#include <iostream>

void raw_write(handle_t handle, const std::string& content);
void raw_close(handle_t handle);

struct IOWrapper {
private:
    handle_t _input;
public:
    ~IOWrapper() {
        if (_input != kNullHandle)
            raw_close(_input);
    }
    explicit IOWrapper(handle_t &&a) noexcept {
        _input = a;
        a = kNullHandle;
    }
    IOWrapper(IOWrapper &&a) noexcept {
        _input = a._input;
        a._input = kNullHandle;
    }
    IOWrapper& operator=(IOWrapper &&a) noexcept {
        _input = a._input;
        a._input = kNullHandle;
        return *this;
    }
    void Write(const std::string& content) {
        raw_write(_input, content);
    }
};