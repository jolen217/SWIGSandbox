#include "bbox.h"

// Constructor
BoundingBox::BoundingBox(double xmin, double ymin, double xmax, double ymax)
    : x_min(xmin), y_min(ymin), x_max(xmax), y_max(ymax) {}

// Set bounds
void BoundingBox::setBounds(double xmin, double ymin, double xmax, double ymax) {
    x_min = xmin;
    y_min = ymin;
    x_max = xmax;
    y_max = ymax;
}

// Getters
double BoundingBox::getXMin() const {
    return x_min;
}

double BoundingBox::getYMin() const {
    return y_min;
}

double BoundingBox::getXMax() const {
    return x_max;
}

double BoundingBox::getYMax() const {
    return y_max;
}

// Calculate area
double BoundingBox::area() const {
    if (x_max > x_min && y_max > y_min) {
        return (x_max - x_min) * (y_max - y_min);
    }
    return 0.0; // Return 0 for invalid boxes
}

// Check overlap
bool BoundingBox::overlaps(const BoundingBox& other) const {
    return !(x_max <= other.x_min || x_min >= other.x_max ||
             y_max <= other.y_min || y_min >= other.y_max);
}
