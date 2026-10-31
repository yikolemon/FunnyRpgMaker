/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482360 */

/* Library Function - Single Match
    protected: virtual class std::fpos<struct _Mbstatet> __thiscall std::basic_streambuf<char,struct
   std::char_traits<char> >::seekoff(__int64,int,int)
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::seekoff
          (basic_streambuf<char,std::char_traits<char>_> *this,__int64 param_1,int param_2,
          int param_3)

{
  *(undefined4 *)param_1 = 0xffffffff;
  ((undefined4 *)param_1)[1] = 0xffffffff;
  ((undefined4 *)param_1)[2] = 0;
  ((undefined4 *)param_1)[3] = 0;
  *(undefined8 *)((undefined4 *)param_1 + 4) = 0;
  return;
}

