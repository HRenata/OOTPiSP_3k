#ifndef CONVERTER_H
#define CONVERTER_H

#include <QMainWindow>
#include <vector>
#include <QShortcut>

QT_BEGIN_NAMESPACE
namespace Ui { class Converter; }
QT_END_NAMESPACE

class Converter : public QMainWindow
{
    Q_OBJECT

public:
    Converter(QWidget *parent = nullptr);
    ~Converter();

private slots:
    void on_convertButton_clicked();

private:
    Ui::Converter *ui;
    std::vector< std::vector<double> > mTempTable;

    void fillTable();
    void convert();

    QShortcut * enter;
};
#endif // CONVERTER_H
