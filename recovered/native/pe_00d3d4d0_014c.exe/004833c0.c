/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004833c0 */

/* Library Function - Single Match
    private: void __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::_Reset_back(void)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::_Reset_back
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  int iVar2;
  
  if ((basic_filebuf<char,std::char_traits<char>_> *)**(int **)(this + 0xc) == this + 0x3c) {
    iVar1 = *(int *)(this + 0x50);
    iVar2 = *(int *)(this + 0x54);
    **(int **)(this + 0xc) = iVar1;
    **(int **)(this + 0x1c) = iVar1;
    **(int **)(this + 0x2c) = iVar2 - iVar1;
  }
  return;
}

