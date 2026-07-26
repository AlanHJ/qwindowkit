



#ifndef STYLEAGENTPRIVATE_H
#define STYLEAGENTPRIVATE_H










#include <QtCore/QHash>

#include <QWKCore/styleagent.h>

namespace QWK {

    class StyleAgentPrivate : public QObject {
        Q_DECLARE_PUBLIC(StyleAgent)
    public:
        StyleAgentPrivate();
        ~StyleAgentPrivate() override;

        void init();

        StyleAgent *q_ptr;

        StyleAgent::SystemTheme systemTheme = StyleAgent::Unknown;

        void setupSystemThemeHook();
        void removeSystemThemeHook();

        void notifyThemeChanged(StyleAgent::SystemTheme theme);
    };

}

#endif 