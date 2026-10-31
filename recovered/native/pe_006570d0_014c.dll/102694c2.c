/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102694c2 */

/* Library Function - Single Match
    __wfopen
   
   Library: Visual Studio 2019 Release */

FILE * __cdecl __wfopen(wchar_t *_Filename,wchar_t *_Mode)

{
  _iobuf *p_Var1;
  
  p_Var1 = common_fsopen<wchar_t>(_Filename,_Mode,0x40);
  return p_Var1;
}

