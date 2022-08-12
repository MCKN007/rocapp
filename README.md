# rocapp
火箭设计计算程序合集
本程序是使用QT5.9.1编写
exe文件夹里面是对应的程序，这些程序都是互联网上面收集而来的我把他们整合在了一起
在mainwindows.cpp里面

void MainWindow::on_toolButton_clicked(bool checked)
{

    ShellExecute(NULL,L"open",L"C:\\Program Files\\rocapp\\exe\\rocket_1.exe",NULL,NULL,SW_SHOW);
}
是用来指定程序位置的，C:\\Program Files\\rocapp\\exe便是程序位置，当然，你也可以根据你的需要进行修改
