#ifndef __OPHANDLER_H__
#define __OPHANDLER_H__

namespace op
{
    class OpHandler
    {
    private:
        virtual void exec() = 0;
    public:
        OpHandler();
        ~OpHandler();
    };
    
    OpHandler::OpHandler(/* args */)
    {
    }
    
    OpHandler::~OpHandler()
    {
    }
    
} // op


#endif // !__OPHANDLER_H__