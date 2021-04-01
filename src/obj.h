#ifndef __OBJ_H
#define __OBJ_H

#include "mstring.h"

class IApp;
class YIcon;

class DObject {
public:
    DObject(IApp *app, const mstring &name, ref<YIcon> icon) :
        fName(name), fIcon(icon), fApp(app) { }
    virtual ~DObject() { }

    mstring getName() const { return fName; }
    ref<YIcon> getIcon() const { return fIcon; }

    virtual void open() = 0;

protected:
    IApp* app() const { return fApp; }

private:
    mstring fName;
    ref<YIcon> fIcon;
    IApp *fApp;
};

class ObjectMenu;

class ObjectContainer {
public:
    virtual void addObject(DObject *object) = 0;
    virtual void addSeparator() = 0;
    virtual void addContainer(mstring name, ref<YIcon> icon, ObjectMenu *container) = 0;
protected:
    virtual ~ObjectContainer() {}
};


#endif

// vim: set sw=4 ts=4 et:
