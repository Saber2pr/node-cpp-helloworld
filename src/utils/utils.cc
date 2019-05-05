/*
 * @Author: saber2pr 
 * @Date: 2019-05-05 21:31:04 
 * @Last Modified by: saber2pr
 * @Last Modified time: 2019-05-05 22:03:32
 */
#if !defined(XXXUTILS)
#define XXXUTILS
#include <node/node.h>
#include "./error.cc"

namespace Utils
{
using v8::Isolate;
using v8::Local;
using v8::String;
using v8::Value;

std::string toStdString(Isolate *isolate, Local<Value> value)
{
  // toString隐式转换
  String::Utf8Value val(value->ToString());
  // 强转为std::string
  std::string result((char *)*val);
  return result;
}
} // namespace Utils

#endif // XXXUTILS
