



#include "windowitemdelegate_p.h"

namespace QWK {

    WindowItemDelegate::WindowItemDelegate() = default;

    WindowItemDelegate::~WindowItemDelegate() = default;

    void WindowItemDelegate::resetQtGrabbedControl(QObject *host) const {
        Q_UNUSED(host);
    }

    WinIdChangeEventFilter *
        WindowItemDelegate::createWinIdEventFilter(QObject *host,
                                                   AbstractWindowContext *context) const {
        return new WindowWinIdChangeEventFilter(static_cast<QWindow *>(host), context);
    }

}
