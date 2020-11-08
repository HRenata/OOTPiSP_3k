#include "Converter.h"
#include "ui_Converter.h"

Converter::Converter(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Converter)
{
    ui->setupUi(this);

    ui->temperatureTable->horizontalHeader()->setVisible(true);
    ui->inputTemperature->setRange(0, 220);

    this->enter = new QShortcut(this);
    this->enter->setKey(Qt::CTRL + Qt::Key_Enter);
    connect(this->enter, SIGNAL(activated()), this, SLOT(on_convertButton_clicked()));
}

Converter::~Converter()
{
    delete ui;
}


void Converter::on_convertButton_clicked()
{
    ui->temperatureTable->setRowCount(ui->temperatureTable->rowCount() + 1);

    this->convert();
    this->fillTable();
}

void Converter::fillTable()
{
    for (int i = 0; i <  ui->temperatureTable->rowCount(); ++i) {
        for (int j = 0; j < ui->temperatureTable->columnCount(); ++j) {

            QString temp = QString::number(this->mTempTable[i][j]);

            //celsium
            if(j == 1)
            {
                temp = QString("%1").arg(this->mTempTable[i][j], 0, 'd', 3);
                if(this->mTempTable[i][j] > 0)
                {
                    temp = "+" + temp;
                }

                ui->temperatureTable->setItem(i, j, new QTableWidgetItem(temp));
                ui->temperatureTable->item(i, j)->setToolTip(temp);

                if(this->mTempTable[i][j] >= 0)
                {
                    ui->temperatureTable->item(i, j)->setForeground(QBrush(Qt::red));
                }
                else
                {
                    ui->temperatureTable->item(i, j)->setForeground(QBrush(Qt::blue));
                }
            }
            else
            {
                if(j == 2)
                {
                    temp = QString("%1").arg(this->mTempTable[i][j], 0, 'd', 1);
                }

                ui->temperatureTable->setItem(i, j, new QTableWidgetItem(temp));
                ui->temperatureTable->item(i, j)->setToolTip(temp);
            }
            ui->temperatureTable->item(i, j)->setTextAlignment(Qt::AlignRight);
        }
    }
}

void Converter::convert()
{
    double fahrenheitTemp = ui->inputTemperature->text().toDouble();
    double celsiusTemp = 5.0 / 9.0 * (fahrenheitTemp - 32);
    double kelvinTemp = celsiusTemp + 273.0;

    std::vector<double> convertedValues;
    convertedValues.push_back(fahrenheitTemp);
    convertedValues.push_back(celsiusTemp);
    convertedValues.push_back(kelvinTemp);

    this->mTempTable.push_back(convertedValues);
}
