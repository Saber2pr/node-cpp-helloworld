/*
 * @Author: saber2pr 
 * @Date: 2019-05-05 21:31:04 
 * @Last Modified by: saber2pr
 * @Last Modified time: 2019-05-05 21:56:17
 */
#if !defined(XXXERROR)
#define XXXERROR
#include <node/node.h>

namespace Error
{
using v8::Exception;
using v8::Isolate;
using v8::String;

void TypeError(Isolate *isolate, const char *message)
{
  auto MESSAGE = String::NewFromUtf8(isolate, message);
  auto ERROR = Exception::TypeError(MESSAGE);
  isolate->ThrowException(ERROR);
}

} // namespace Error

#endif // XXXERROR
