/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481420 */

int __thiscall FUN_00481420(void *this,LPSTR param_1,WCHAR param_2,undefined4 param_3,UINT *param_4)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  void *local_8;
  
  if (param_4[2] == 0) {
    local_8 = (void *)0x0;
    iVar1 = WideCharToMultiByte(*param_4,0,&param_2,1,param_1,param_4[1],(LPCSTR)0x0,
                                (LPBOOL)&local_8);
    if ((iVar1 != 0) && (local_8 == (void *)0x0)) {
      return iVar1;
    }
  }
  else {
    local_8 = this;
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  p_Var2 = FUN_0048f66d();
  *(undefined4 *)p_Var2 = 0x2a;
  return -1;
}

