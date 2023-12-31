#include "type.h"
#include "ui_type.h"
#include <QTimer>

Type::Type(QWidget *parent) : QWidget(parent),
                              ui(new Ui::Type)
{
    ui->setupUi(this);

    typeCheckBoxes = {
        ui->checkBox,   // Creature
        ui->checkBox_2, // Planeswalker
        ui->checkBox_3, // Instant
        ui->checkBox_4, // Sorcery
        ui->checkBox_5, // Enchantment
        ui->checkBox_6, // Artifact
        ui->checkBox_7, // Battle
        ui->checkBox_8, // Commanders
        ui->checkBox_9  // Land
    };

}

Type::~Type()
{
    delete ui;
}

void Type::on_okButton_clicked()
{
    ui->okButton->setEnabled(false);

    QTimer::singleShot(500, [this]()
                       { ui->okButton->setEnabled(true); });
    QStringList selectedRarities;
    QStringList selectedTypes;
    for (QCheckBox *checkBox : typeCheckBoxes)
    {
        if (checkBox->isChecked())
        {
            selectedTypes.append(checkBox->text());
        }
    }
    emit typesSelected(selectedTypes);
}
