#include <iostream>
using namespace std;
#include <vector>
#include <cmath>

vector<double> findRoots(double a, double b, double c) {
    vector<double> roots;
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        roots.push_back((-b + sqrt(discriminant)) / (2 * a));
        roots.push_back((-b - sqrt(discriminant)) / (2 * a));
    } else if (discriminant == 0) {
        roots.push_back(-b / (2 * a));
        roots.push_back(-b / (2 * a));
    }

    // Sort the roots in descending order
    if (roots.size() == 2 && roots[0] < roots[1])
        swap(roots[0], roots[1]);

    return roots;
}

int main() {
    double a, b, c;
    cout << "Enter the coefficients (ax^2 + bx + c): ";
    cin >> a >> b >> c;

    vector<double> roots = findRoots(a, b, c);

    if (roots.size() == 2)
        cout << "Roots: " << roots[0] << " " << roots[1] <<endl;
    else if (roots.size() == 1)
        cout << "Roots are real and equal: " << roots[0] <<endl;
    else
        cout << "Roots are imaginary." <<endl;

    return 0;
}
