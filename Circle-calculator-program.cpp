#include <iostream>
#include <cmath>

using namespace std;

constexpr double PI = 3.14;

// �� ���⸦ ���� Ŭ����
class Circle {
private:
    double radius;

public:
    Circle(double r) : radius(r) {
        cout << "***��� �� ���� ����***\n" << endl;
    }

    ~Circle() {
        cout << "***��� �� ���� ����***\n" << endl;
    }

    double getArea() {
        return PI * radius * radius;
    }

    double getCircumference() {
        return 2 * PI * radius;
    }
};

// ����� ���⸦ ���� Ŭ����
class Cylinder {
private:
    double radius;
    double height;

public:
    Cylinder(double r, double h) : radius(r), height(h) {
        cout << "***����� ���� ����***\n" << endl;
    }

    ~Cylinder() {
        cout << "***����� ���� ����***\n" << endl;
    }

    double getVolume() {
        return PI * radius * radius * height;
    }

    double getSurfaceArea() {
        return 2 * PI * radius * (radius + height);
    }
};

// ���� ���⸦ ���� Ŭ����
class Cone {
private:
    double radius;
    double height;

public:
    Cone(double r, double h) : radius(r), height(h) {
        cout << "***���� ���� ����***\n" << endl;
    }

    ~Cone() {
        cout << "***���� ���� ����***\n" << endl;
    }

    double getVolume() {
        return (1.0 / 3) * PI * radius * radius * height;
    }
};

// �� ���⸦ ���� Ŭ����
class Sphere {
private:
    double radius;

public:
    Sphere(double r) : radius(r) {
        cout << "***�� ���� ����***\n" << endl;
    }

    ~Sphere() {
        cout << "***�� ���� ����***\n" << endl;
    }

    double getVolume() {
        return (4.0 / 3) * PI * pow(radius, 3);
    }

    double getSurfaceArea() {
        return 4 * PI * radius * radius;
    }
};

int main() {
    int choice;

    while (true) {
        cout << "���ϴ� ����� �����ϼ���" << endl;
        cout << "1. ���� ���� ���" << endl;
        cout << "2. ���� �ѷ� ���" << endl;
        cout << "3. ������� ���� ���" << endl;
        cout << "4. ������� �ѳ��� ���" << endl;
        cout << "5. ������ ���� ���" << endl;
        cout << "6. ���� ���� ���" << endl;
        cout << "7. ���� �ѳ��� ���" << endl;
        cout << "8. ����" << endl;
        cout << "����: ";

        cin >> choice;

        if (choice == 8) {
            cout << "���α׷��� �����մϴ�." << endl;
            break;
        }

        double radius, height;
        switch (choice) {
        case 1:
            cout << "������ �Է�: ";
            cin >> radius;
            {
                Circle circle(radius);
                cout << "���� ����: \n" << circle.getArea() << endl;
            }
            break;
        case 2:
            cout << "������ �Է�: ";
            cin >> radius;
            {
                Circle circle(radius);
                cout << "���� �ѷ�: " << circle.getCircumference() << endl;
            }
            break;
        case 3:
            cout << "������ �Է�: ";
            cin >> radius;
            cout << "���� �Է�: ";
            cin >> height;
            {
                Cylinder cylinder(radius, height);
                cout << "������� ����: " << cylinder.getVolume() << endl;
            }
            break;
        case 4:
            cout << "������ �Է�: ";
            cin >> radius;
            cout << "���� �Է�: ";
            cin >> height;
            {
                Cylinder cylinder(radius, height);
                cout << "������� �ѳ���: " << cylinder.getSurfaceArea() << endl;
            }
            break;
        case 5:
            cout << "������ �Է�: ";
            cin >> radius;
            cout << "���� �Է�: ";
            cin >> height;
            {
                Cone cone(radius, height);
                cout << "������ ����: " << cone.getVolume() << endl;
            }
            break;
        case 6:
            cout << "������ �Է�: ";
            cin >> radius;
            {
                Sphere sphere(radius);
                cout << "���� ����: " << sphere.getVolume() << endl;
            }
            break;
        case 7:
            cout << "������ �Է�: ";
            cin >> radius;
            {
                Sphere sphere(radius);
                cout << "���� �ѳ���: " << sphere.getSurfaceArea() << endl;
            }
            break;
        default:
            cout << "�߸��� �����Դϴ�." << endl;
            break;
        }
        cout << endl;
    }

    return 0;
}