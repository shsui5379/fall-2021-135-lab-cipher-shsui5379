#include <iostream>
#include "solve.h"

int main()
{
  std::cout << "Encrypted: Qnyyqj Wji Wninsl Mtti ijhniji yt bjfw twfslj ytifd.\n";
  std::cout << "Decrypted: " << solve("Qnyyqj Wji Wninsl Mtti ijhniji yt bjfw twfslj ytifd.") << std::endl;

  std::cout << "Encrypted: Wnwf lzgmyz zw lzgmyzl lzw ogjdv osk xdsl zw vavf’l kww lzw ajgfq gx osflafy lg ljsnwd sjgmfv lzw ogjdv.\n";
  std::cout << "Decrypted: " << solve("Wnwf lzgmyz zw lzgmyzl lzw ogjdv osk xdsl zw vavf’l kww lzw ajgfq gx osflafy lg ljsnwd sjgmfv lzw ogjdv.") << std::endl;

  return 0;
}
