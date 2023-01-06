/**
 * Copyright (c) 2022 ~ 2023 KylinSec Co., Ltd. 
 * kiran-session-manager is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2. 
 * You may obtain a copy of Mulan PSL v2 at:
 *          http://license.coscl.org.cn/MulanPSL2 
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, 
 * EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, 
 * MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.  
 * See the Mulan PSL v2 for more details.  
 * 
 * Author:     tangjie02 <tangjie02@kylinos.com.cn>
 */

#pragma once

#include "src/pam/authentication.h"

namespace Kiran
{
class AuthenticationTerminal : public Authentication
{
public:
    AuthenticationTerminal(PAMHandle* pamHandle, const QStringList& arguments);
    virtual ~AuthenticationTerminal(){};

private:
    virtual void notifyAuthMode() {}
    virtual int32_t requestAuthType();
    virtual void notifyAuthType() {}
};

}  // namespace Kiran