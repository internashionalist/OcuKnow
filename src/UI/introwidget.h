#ifndef INTROWIDGET_H
#define INTROWIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QMovie>

class IntroWidget : public QWidget
{
    Q_OBJECT

public:
	explicit IntroWidget(QWidget *parent = nullptr);

signals:
	void enterStudyGuideClicked();
	void takeQuizClicked();
	void creditsClicked();

private slots:
	void handleEnterStudyGuide();
	void handleTakeQuiz();
	void handleCredits();

private:
	QPushButton *enterStudyGuideButton;
	QPushButton *takeQuizButton;
	QPushButton *creditsButton;
};

#endif /* INTROWIDGET_H */
