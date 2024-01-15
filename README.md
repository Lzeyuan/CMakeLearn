# 介绍
以[LearnOpenGL](https://learnopengl-cn.github.io)项目为例子，学习CMake

# 环境
- Winodwos11
- VS2022
- CMake > 3.12：为了支持c++20模块
- 第三方库：
[GLFW](https://www.glfw.org/download.html)、
[GLAD](https://glad.dav1d.de/)

# 快速开始
`git clone --recursive https://github.com/Lzeyuan/CMakeLearn.git`

# 项目结构
- 3rd：存放第三方库
- 数字_项目名：LearnOpenGL阶段性项目

# CMake笔记
## 配置CMakePresets.json和CMakeUserPresets.json
`CMakePresets.json`：总配置<br>
`CMakeUserPresets.json`：用户根据本地环境自定义配置，因此不应该上传到仓库 <br><br>