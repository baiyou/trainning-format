#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>


/*
  函数说明：把文件内容取出来，放到一块内存中。
  参数：file_name（入） - 文件名。如果文件名错误，则直接退出程序，exit(1)。
        file_len（出）- 文件长度，其实也是缓冲区的长度。
  返回值：如果不为 NULL，则指向一块申请的内存，存放文件的内容。如果是 NULL，说明文件没内容。
 */

void *get_file_content(const char *file_name, unsigned long *file_len)
{
  struct stat buffer;
  int         status;

  status = stat(file_name, &buffer);

  return NULL;
}

int main(int argc, char *argv[])
{
  // 打开文档文件
  // 读取文件内容
  // 循环 {
  //    读取一行文本
  //    如果是楼主的发言标题，类似“百由-服务员(1521136075) 22:39:34”，那就在行尾加一个 \\
  //    如果是同学插话，那就设置个标志，表示插话的开始
  //    有同学插话标志的时候，把每一行结尾都加 \\
  //    如果遇到空行，那就表示同学插话结束，清除插话标志
  // }


  // 打开文档文件
  // 读取文件内容
  char *file_name;
  unsigned long file_len;
  void *buf;

  char *pos;
  unsigned long remain_len;
  char *line;
  unsigned long line_len;

  if ((argc < 2) || (argc > 2)) {
    printf("用法：\n");
    printf("tf 文件名\n\n");
  }

  file_name = argv[1];

  buf = get_file_content(file_name, &file_len);
  if (!buf)
    return 0;

  return 0;

  pos = buf;
  remain_len = file_len;

  // 循环 {
  while (1) {
    //  读取一行文本
    //pos = read_a_line(pos, &remain_len, line, &line_len);
    if (!pos)
      break;

    //  如果是楼主的发言标题，类似“百由-服务员(1521136075) 22:39:34”，那就在行尾加一个 \ \
    //  如果是同学插话，那就设置个标志，表示插话的开始
    //  有同学插话标志的时候，把每一行结尾都加 \		\
    //  如果遇到空行，那就表示同学插话结束，清除插话标志
  }

}






