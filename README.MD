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

# Notice

windows 下需要 vc++工具链

linux 下需要 g++
