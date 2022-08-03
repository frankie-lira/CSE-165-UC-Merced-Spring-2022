#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button ("Hello world !");
 button.setText("My text");
  button.setToolTip("A tooltip");

  QFont font ("Times New Roman");
  button.setFont(font);
  QIcon icon ("//Users/franciscolira/Desktop/car.jpeg");
  button.setIcon(icon);

  button.show();

 return app.exec();
}
