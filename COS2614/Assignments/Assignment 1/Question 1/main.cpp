#include <QApplication>
#include <QInputDialog>
#include <QMessageBox>
#include <QString>

float convertToCelsius(float temperatureC) {
	return ((9 * temperatureC) / 5) + 32;
}

int main(int argc, char* argv[]) {
	QApplication app(argc, argv);
	QInputDialog *input = new QInputDialog();
	QMessageBox *messageBox= new QMessageBox();

	bool buttonClicked = false;
	float temperatureC = input->getDouble(0, "Temperature Converter", "Enter the temperature in °C:", 0, -2147483647, 2147483647, 2, &buttonClicked);

	QString temperatureF = QString("The temperature is %0°F.").arg(convertToCelsius(temperatureC));

	if (buttonClicked) {
		messageBox->information(0, "Temperature Converter", temperatureF);
	}

	return 0;
}
