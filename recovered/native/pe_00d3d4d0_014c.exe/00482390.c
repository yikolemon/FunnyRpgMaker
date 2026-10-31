/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482390 */

/* Library Function - Single Match
    protected: virtual class std::fpos<struct _Mbstatet> __thiscall std::basic_streambuf<char,struct
   std::char_traits<char> >::seekpos(class std::fpos<struct _Mbstatet>,int)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::seekpos(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = 0xffffffff;
  param_2[1] = 0xffffffff;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  return;
}

