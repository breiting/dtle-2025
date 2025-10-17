#include "Led.hpp"

Led::Led() : m_Color(OFF) {
}

Led::Color Led::GetColor() const {
    return m_Color;
}

void Led::SetColor(Color color) {
    m_Color = color;
}
