#pragma once

#include <QSlider>
#include <QInputEvent>
#include <QtCore/QObject>


class SliderIgnoreScroll : public QSlider {
	Q_OBJECT

public:
	SliderIgnoreScroll(QWidget *parent = nullptr);

protected:

	virtual void wheelEvent(QWheelEvent *event) override;
	virtual void leaveEvent(QEvent *event) override;
};


