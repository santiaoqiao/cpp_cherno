/**
 * static 在类和函数的外部使用，说明是一个静态局部变量
 * 只表示，这个变量只被本编译单元（文件）看到，其他文件看不到
 */

/**
 * 不能有两个同名的全局变量
 * 如果这里去掉static,则会在mian.cpp中造成冲突,这个变量会被外面看到
 * int s_Variable = 10;
 */
// static int s_Variable = 10;

/**
 * 如果定义了一个非static 全局变量
 * 则需要在外面变量前加上 extern, 只声明，不定义
 */
int s_Variable = 10;

static void Func() {}