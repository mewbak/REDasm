#ifndef GRAPHRECTITEM_H
#define GRAPHRECTITEM_H

#include "graphitem.h"

class GraphRectItem : public GraphItem
{
    Q_OBJECT

    public:
        explicit GraphRectItem(REDasm::Graphing::NodeData* data, QObject *parent = NULL);
        virtual void paint(QPainter* painter);
};

#endif // GRAPHRECTITEM_H
