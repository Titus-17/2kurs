#include <QApplication>
#include "max.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyClass a;

    a.MyLabel.setText("Держится 10 кликов");
    a.MyLabel.move(200,200);
    a.clap.setText("Clap");
    a.clap.move(300,300);

    a.MyLabel.show();
    a.clap.show();
    QObject::connect(&a, SIGNAL(goodbye()), &app, SLOT(quit()) );
    return app.exec();
}
