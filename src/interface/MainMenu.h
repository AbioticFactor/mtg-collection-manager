#ifndef MAINMENU_H
#define MAINMENU_H

#include <QWidget>

namespace Ui
{
  class MainMenu;
}

class MainMenu : public QWidget
{
  Q_OBJECT

public:
  explicit MainMenu(QWidget *parent = nullptr);
  ~MainMenu();

signals:
  void scanClicked();
  void searchCollectionClicked();
  void EmailClicked();

public slots:
  void on_EmailButton_clicked();
  void on_scanButton_clicked();
  void on_searchCollectionButton_clicked();

private:
  Ui::MainMenu *ui;
};

#endif // MAINMENU_H
