#pragma once

#include <string>

class Player {
private:
    std::string m_name;
public:
    void setName(const std::string& name) {
        m_name = name;
    }

    const std::string& GetName() const {

    }
};
