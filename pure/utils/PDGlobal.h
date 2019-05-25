#ifndef PDGLOBAL_H
#define PDGLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PDMVCFRAMEWORK_LIBRARY)
#  define PDMVC_EXPORT Q_DECL_EXPORT
#else
#  define PDMVC_EXPORT Q_DECL_IMPORT
#endif

#endif // PDGLOBAL_H
