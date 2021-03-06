/**
 * Copyright (c) 2012 - 2014 TideSDK contributors 
 * http://www.tidesdk.org
 * Includes modified sources under the Apache 2 License
 * Copyright (c) 2008 - 2012 Appcelerator Inc
 * Refer to LICENSE for details of distribution and use.
 **/

#define _JS_UTIL_H_

namespace tide
{
namespace JSUtil
{

TIDE_API ValueRef ToTiValue(JSValueRef, JSContextRef, JSObjectRef);
TIDE_API JSValueRef ToJSValue(ValueRef, JSContextRef);
TIDE_API JSValueRef TiObjectToJSValue(ValueRef, JSContextRef);
TIDE_API JSValueRef TiMethodToJSValue(ValueRef, JSContextRef);
TIDE_API JSValueRef TiListToJSValue(ValueRef, JSContextRef);
TIDE_API std::string ToChars(JSStringRef);
TIDE_API bool IsArrayLike(JSObjectRef, JSContextRef);
TIDE_API JSGlobalContextRef CreateGlobalContext();
TIDE_API void RegisterGlobalContext(JSObjectRef, JSGlobalContextRef);
TIDE_API void UnregisterGlobalContext(JSGlobalContextRef);
TIDE_API JSGlobalContextRef GetGlobalContext(JSObjectRef);
TIDE_API void ProtectGlobalContext(JSGlobalContextRef);
TIDE_API void UnprotectGlobalContext(JSGlobalContextRef);
TIDE_API ValueRef Evaluate(JSContextRef context, const char* script,
    const char* url = "string");
TIDE_API ValueRef EvaluateFile(JSContextRef context,
    const std::string& fullPath);
TIDE_API ValueRef GetProperty(JSObjectRef, std::string name);

};
}

#endif
