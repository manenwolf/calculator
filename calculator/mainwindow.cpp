#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

bool isnumber(char c){
    return c=='0' or c=='1' or c=='2' or c=='3' or c=='4' or c=='5'
             or c=='6' or c=='7'  or c=='8' or c=='9';
}
bool isoperator(char c){
    return c=='+' or c=='-' or c=='*' or c=='/' or c == '=' or c=='(' or c==')';
}

std::string solve(std::string expresion){
    std::cout << "solving expresion: " << expresion << std::endl;
    int i = 0;
    double tot = 0;
    std::string number ="";
    bool first = true;
    char lastoperator =' ';
    while(i<expresion.length()){
        if(isnumber(expresion[i]) or expresion[i]=='.'){
            number+=(expresion[i]);
        }else if(isoperator(expresion[i])){
            if(expresion[i]=='('){
                i++;
                std::string temp="";
                while(expresion[i]!=')'){
                    temp+= expresion[i];
                    i++;
                }
                temp+= expresion[i];
                number = solve(temp+'=');
            }else{
                if(first == true){
                    first = false;
                    tot = std::atof(number.c_str());
                    number = "";
                    lastoperator = expresion[i];
                }else{
                    double newnumber = std::atof(number.c_str());

                    if(lastoperator == '+'){
                        std::cout << tot << "+"<< newnumber<<std::endl;
                        tot += newnumber;
                    }
                    if(lastoperator == '-'){
                        std::cout << tot << "-"<< newnumber<<std::endl;
                        tot -= newnumber;
                    }
                    if(lastoperator == '*'){
                        std::cout << tot << "*"<< newnumber<<std::endl;
                        tot *= newnumber;
                    }
                    if(lastoperator == '/'){
                        std::cout << tot << "/"<< newnumber<<std::endl;
                        tot /= newnumber;
                    }


                    number = "";
                    lastoperator = expresion[i];
                }
               }

        }else{
            std::cout << "wrong operator" << expresion[i]<<std::endl;
        }

        i++;
    }
    std::ostringstream strs;
    strs << tot;
    std::string result = strs.str();
    std::cout << "result =" << result << std::endl;
    return result;
}

MainWindow::~MainWindow()
{
    delete ui;
}
//pressing of number buttons
void MainWindow::on_button_0_clicked(){
    ui->display->setText(ui->display->text().append("0"));
    std::cout << "lol" <<ui->display->text().toStdString()<<std::endl;
}
void MainWindow::on_button_1_clicked(){
    ui->display->setText(ui->display->text().append("1"));
}
void MainWindow::on_button_2_clicked(){
    ui->display->setText(ui->display->text().append("2"));
}
void MainWindow::on_button_3_clicked(){
    ui->display->setText(ui->display->text().append("3"));
}
void MainWindow::on_button_4_clicked(){
    ui->display->setText(ui->display->text().append("4"));
}
void MainWindow::on_button_5_clicked(){
    ui->display->setText(ui->display->text().append("5"));
}
void MainWindow::on_button_6_clicked(){
    ui->display->setText(ui->display->text().append("6"));
}
void MainWindow::on_button_7_clicked(){
    ui->display->setText(ui->display->text().append("7"));
}
void MainWindow::on_button_8_clicked(){
    ui->display->setText(ui->display->text().append("8"));
}
void MainWindow::on_button_9_clicked(){
    ui->display->setText(ui->display->text().append("9"));
}

void MainWindow::on_button_dot_clicked()
{
    ui->display->setText(ui->display->text().append("."));
}
void MainWindow::on_button_open_clicked()
{
    ui->display->setText(ui->display->text().append("("));
}
void MainWindow::on_button_close_clicked()
{
    ui->display->setText(ui->display->text().append(")"));
}

void MainWindow::on_button_divide_clicked()
{
    expresion+= ui->display->text().toStdString();
    expresion += "/";
    ui->label->setText(QString::fromStdString(expresion));
    ui->display->setText("");
}

void MainWindow::on_button_multiply_clicked()
{
    expresion+= ui->display->text().toStdString();
    expresion += "*";
    ui->label->setText(QString::fromStdString(expresion));
    ui->display->setText("");
}

void MainWindow::on_button_plus_clicked()
{
    expresion+= ui->display->text().toStdString();
    expresion += "+";
    ui->label->setText(QString::fromStdString(expresion));
    ui->display->setText("");
}

void MainWindow::on_button_min_clicked()
{
    expresion+= ui->display->text().toStdString();
    expresion += "-";
    ui->label->setText(QString::fromStdString(expresion));
    ui->display->setText("");
}

void MainWindow::on_button_equals_clicked()
{
    expresion+= ui->display->text().toStdString();
    std::string solution = solve(expresion+"=");
    ui->label->setText(QString::fromStdString(expresion+"="+ solution));
    ui->display->setText(QString::fromStdString(solution));
    expresion = "";
    std::cout << expresion << std::endl;
}

void MainWindow::on_pushButton_clicked()
{
    double number = std::atof(ui->display->text().toStdString().c_str());
    number = std::sqrt(number);
    std::ostringstream strs;
    strs << number;
    std::string result = strs.str();
    ui->display->setText(QString::fromStdString(result));
}



