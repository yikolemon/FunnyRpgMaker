/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00493c14 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* Library Function - Single Match
    _ungetc
   
   Library: Visual Studio 2019 Release */

int __cdecl _ungetc(int _Ch,FILE *_File)

{
  __acrt_ptd *p_Var1;
  uint uVar2;
  undefined4 local_14;
  
  if (_File == (FILE *)0x0) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 0x16;
    FUN_00495c88();
    uVar2 = 0xffffffff;
  }
  else {
    __lock_file(_File);
    uVar2 = FUN_00493c87(_Ch,_File);
    FUN_00493c7f();
  }
  ExceptionList = local_14;
  return uVar2;
}

