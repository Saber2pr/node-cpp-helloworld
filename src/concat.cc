/*
 * @Author: saber2pr 
 * @Date: 2019-05-05 20:25:43 
 * @Last Modified by: saber2pr
 * @Last Modified time: 2019-05-05 22:51:28
 */
#if !defined(XXXCONCAT)
#define XXXCONCAT
#include <node/node.h>
#include "./utils/utils.cc"

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Concat(const FunctionCallbackInfo<Value> &args)
{
  //获取v8实例
  Isolate *isolate = args.GetIsolate();

  // 使用c11 string
  std::string result;

  for (int i = 0; i < args.Length(); i++)
  {
    // Local<string>转为std::string，然后拼接
    result.append(Utils::toStdString(args[i]));
  };

  // std::string转为char*类型，返回给回调函数
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, result.c_str()));
}

void REGISTER(Local<Object> exports, Local<Object> module)
{
  NODE_SET_METHOD(module, "exports", Concat);
}

NODE_MODULE(NODE_GYP_MODULE_NAME, REGISTER)

#endif // XXXCONCAT
