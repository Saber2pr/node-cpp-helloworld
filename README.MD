# nodejs C++扩展 Helloworld

> 一起来为 V8 编写 C++插件吧！

[官方文档](http://nodejs.cn/api/addons.html)

```bash
git clone https://github.com/Saber2pr/node-cpp-helloworld.git
```

# 编译步骤

1. 安装 node-gyp 编译工具

```bash
# 安装node-gyp编译工具
npm install
```

2. 生成 Makefile（在 Windows 上是 vcxproj 文件）

```bash
# 生成Makefile（在 Windows 上是vcxproj 文件）
npm run config
```

3. 编写 cpp 源文件，添加到./binding.gyp > targets > sources 项中，然后编译

```bash
npm run build
```

4. 在./build/Release 目录下生成二进制文件 addon.node，javascript 文件中直接 require 即可，后缀.node 可省略

```bash
npm test
```

# 可以干什么

可以做 javascript 不能完成的任务。。。

例如

1. 文件读写

2. 多线程处理

3. Socket

4. 调用系统 API

5. 高性能场景

...

当然有局限性，这些二进制代码不能被前端构建工具打包，只适用于服务端环境

# Notice

windows 下需要 vc++工具链

linux 下需要 g++
