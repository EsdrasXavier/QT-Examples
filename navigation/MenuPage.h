
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QSignalMapper>

#include <MainWindow.h>

class MenuPage : public QWidget {
public:
	explicit MenuPage(MainWindow *parent);
	void addButton();
private:
	QVBoxLayout *layout;
	QSignalMapper *signalMapper;
	int nButtons;
};
