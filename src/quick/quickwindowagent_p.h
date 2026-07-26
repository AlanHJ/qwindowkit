



#ifndef QUICKWINDOWAGENTPRIVATE_H
#define QUICKWINDOWAGENTPRIVATE_H










#include <QWKCore/qwkconfig.h>
#include <QWKCore/private/windowagentbase_p.h>
#include <QWKQuick/quickwindowagent.h>

namespace QWK {

    class QuickWindowAgentPrivate : public WindowAgentBasePrivate {
        Q_DECLARE_PUBLIC(QuickWindowAgent)
    public:
        QuickWindowAgentPrivate();
        ~QuickWindowAgentPrivate() override;

        void init();

        
        QQuickWindow *hostWindow{};

#ifdef Q_OS_MAC
        QQuickItem *systemButtonAreaItem{};
        std::unique_ptr<QObject> systemButtonAreaItemHandler;
#endif

#if defined(Q_OS_WINDOWS) && QWINDOWKIT_CONFIG(ENABLE_WINDOWS_SYSTEM_BORDERS)
        void setupWindows10BorderWorkaround();
#endif
    };

}

#endif 
