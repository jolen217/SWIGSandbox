#ifndef BBOX_H
#define BBOX_H

class BoundingBox {
private:
    double x_min; // Minimum x-coordinate
    double y_min; // Minimum y-coordinate
    double x_max; // Maximum x-coordinate
    double y_max; // Maximum y-coordinate

public:
    // Constructor
    BoundingBox(double xmin = 0.0, double ymin = 0.0, double xmax = 0.0, double ymax = 0.0);

    // Setters
    void setBounds(double xmin, double ymin, double xmax, double ymax);

    // Getters
    double getXMin() const;
    double getYMin() const;
    double getXMax() const;
    double getYMax() const;

    // Utility functions
    double area() const;                           // Calculate area of the bounding box
    bool overlaps(const BoundingBox& other) const; // Check if overlaps with another bounding box
};

#endif // BBOX_H
