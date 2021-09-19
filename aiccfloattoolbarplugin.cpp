#include "aiccfloattoolbar.h"
#include "aiccfloattoolbarplugin.h"

#include <QtPlugin>

AICCFloatToolbarPlugin::AICCFloatToolbarPlugin(QObject *parent)
    : QObject(parent)
{
    m_initialized = false;
}

void AICCFloatToolbarPlugin::initialize(QDesignerFormEditorInterface * /* core */)
{
    if (m_initialized)
        return;

    // Add extension registrations, etc. here

    m_initialized = true;
}

bool AICCFloatToolbarPlugin::isInitialized() const
{
    return m_initialized;
}

QWidget *AICCFloatToolbarPlugin::createWidget(QWidget *parent)
{
    return new AICCFloatToolbar(parent);
}

QString AICCFloatToolbarPlugin::name() const
{
    return QLatin1String("AICCFloatToolbar");
}

QString AICCFloatToolbarPlugin::group() const
{
    return QLatin1String("");
}

QIcon AICCFloatToolbarPlugin::icon() const
{
    return QIcon();
}

QString AICCFloatToolbarPlugin::toolTip() const
{
    return QLatin1String("");
}

QString AICCFloatToolbarPlugin::whatsThis() const
{
    return QLatin1String("");
}

bool AICCFloatToolbarPlugin::isContainer() const
{
    return false;
}

QString AICCFloatToolbarPlugin::domXml() const
{
    return QLatin1String("<widget class=\"AICCFloatToolbar\" name=\"aICCFloatToolbar\">\n</widget>\n");
}

QString AICCFloatToolbarPlugin::includeFile() const
{
    return QLatin1String("aiccfloattoolbar.h");
}
#if QT_VERSION < 0x050000
Q_EXPORT_PLUGIN2(aiccfloattoolbarplugin, AICCFloatToolbarPlugin)
#endif // QT_VERSION < 0x050000
