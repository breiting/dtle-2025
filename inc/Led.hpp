#pragma once

/**
 * \brief A simulated LED showing a certain color
 */
class Led {
   public:
    enum Color { OFF, BLUE, GREEN, RED };

    Led();

    Color GetColor() const;
    void SetColor(Color color);

   private:
    Color m_Color;
};
