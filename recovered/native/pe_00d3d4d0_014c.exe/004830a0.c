/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004830a0 */

/* Library Function - Single Match
    protected: virtual class std::basic_streambuf<char,struct std::char_traits<char> > * __thiscall
   std::basic_filebuf<char,struct std::char_traits<char> >::setbuf(char *,__int64)
   
   Library: Visual Studio 2019 Release */

basic_streambuf<char,std::char_traits<char>_> * __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::setbuf
          (basic_filebuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  int iVar1;
  int in_stack_00000008;
  
  if ((param_1 == (char *)0x0) && (in_stack_00000008 == 0 && (int)param_2 == 0)) {
    iVar1 = 4;
  }
  else {
    iVar1 = 0;
  }
  if (*(int *)(this + 0x4c) != 0) {
    iVar1 = FUN_00492caf(*(int *)(this + 0x4c),param_1,iVar1,in_stack_00000008);
    if (iVar1 == 0) {
      FUN_004831e0(this,*(int *)(this + 0x4c),1);
      return (basic_streambuf<char,std::char_traits<char>_> *)this;
    }
  }
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
}

