



#ifndef SHAREDEVENTFILTER_P_H
#define SHAREDEVENTFILTER_P_H










#include <QWKCore/qwkglobal.h>

namespace QWK {

    class SharedEventFilter;

    class QWK_CORE_EXPORT SharedEventDispatcher {
    public:
        SharedEventDispatcher();
        virtual ~SharedEventDispatcher();

    public:
        virtual bool sharedDispatch(QObject *obj, QEvent *event);

    public:
        void installSharedEventFilter(SharedEventFilter *filter);
        void removeSharedEventFilter(SharedEventFilter *filter);

    protected:
        QList<SharedEventFilter *> m_sharedEventFilters;

        friend class SharedEventFilter;

        Q_DISABLE_COPY(SharedEventDispatcher)
    };

    class QWK_CORE_EXPORT SharedEventFilter {
    public:
        SharedEventFilter();
        virtual ~SharedEventFilter();

    public:
        virtual bool sharedEventFilter(QObject *obj, QEvent *event) = 0;

    protected:
        SharedEventDispatcher *m_sharedDispatcher;

        friend class SharedEventDispatcher;

        Q_DISABLE_COPY(SharedEventFilter)
    };

}

#endif 
