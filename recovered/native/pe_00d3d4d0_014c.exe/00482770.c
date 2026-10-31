/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00482770 */

/* Library Function - Single Match
    protected: virtual int __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::pbackfail(int)
   
   Library: Visual Studio 2019 Release */

int __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::pbackfail
          (basic_filebuf<char,std::char_traits<char>_> *this,int param_1)

{
  basic_filebuf<char,std::char_traits<char>_> *pbVar1;
  uint uVar2;
  basic_filebuf<char,std::char_traits<char>_> *pbVar3;
  int iVar4;
  
  uVar2 = **(uint **)(this + 0x1c);
  if (((uVar2 != 0) && (**(uint **)(this + 0xc) < uVar2)) &&
     ((param_1 == -1 || ((uint)*(byte *)(uVar2 - 1) == param_1)))) {
    **(int **)(this + 0x2c) = **(int **)(this + 0x2c) + 1;
    **(int **)(this + 0x1c) = **(int **)(this + 0x1c) + -1;
    if (param_1 == -1) {
      param_1 = 0;
    }
    return param_1;
  }
  if ((*(FILE **)(this + 0x4c) != (FILE *)0x0) && (param_1 != -1)) {
    if ((*(int *)(this + 0x38) == 0) &&
       (iVar4 = _ungetc(param_1 & 0xff,*(FILE **)(this + 0x4c)), iVar4 != -1)) {
      return param_1;
    }
    pbVar1 = this + 0x3c;
    if ((basic_filebuf<char,std::char_traits<char>_> *)**(int **)(this + 0x1c) != pbVar1) {
      *pbVar1 = SUB41(param_1,0);
      pbVar3 = (basic_filebuf<char,std::char_traits<char>_> *)**(int **)(this + 0xc);
      if (pbVar3 != pbVar1) {
        *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x50) = pbVar3;
        *(int *)(this + 0x54) = **(int **)(this + 0x2c) + **(int **)(this + 0x1c);
      }
      **(int **)(this + 0xc) = (int)pbVar1;
      **(int **)(this + 0x1c) = (int)pbVar1;
      **(undefined4 **)(this + 0x2c) = 1;
      return param_1;
    }
  }
  return -1;
}

