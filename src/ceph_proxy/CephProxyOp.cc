/* License:LGPL-2.1
 *
 * Copyright (c) 2021 Huawei Technologies Co., Ltf All rights reserved.
 *
 */

#include "CephProxyInterface.h"
#include "CephProxyOp.h"
#include "CephProxyLog.h"

completion_t CompletionInit(userCallback_t fn, void *cbArg)
{
    Completion *c = new(std::nothrow) Completion(fn, cbArg);
    if (c == nullptr) {
	    ProxyDbgLogErr("Allocate Memory failed.");
	    return nullptr;
    }
    completion_t rc = c;
    return rc;
}

void CompletionDestroy(completion_t c){
    Completion *comp = static_cast<Completion *>(c);
    delete comp;
}
