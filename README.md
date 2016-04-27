# DJC_GIFImage
gif图
程序的思路如下：
1、首先使用ImageIO库中的CGImageSource家在Gif文件。
2、通过CGImageSource获取到Gif文件中的总的帧数，以及每一帧的显示时间。
3、通过CAKeyframeAnimation来完成Gif动画的播放。
