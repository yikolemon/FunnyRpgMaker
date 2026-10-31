/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049d52c */

undefined4 __cdecl FUN_0049d52c(uint param_1)

{
  int iVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_00521ec8)) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if (((*(byte *)(iVar3 + 0x28 + (&DAT_00521cc8)[param_1 >> 6]) & 1) != 0) &&
       (*(int *)(iVar3 + 0x18 + (&DAT_00521cc8)[param_1 >> 6]) != -1)) {
      iVar1 = FUN_00490047();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0049d592;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_0049d592:
      *(undefined4 *)((&DAT_00521cc8)[param_1 >> 6] + 0x18 + iVar3) = 0xffffffff;
      return 0;
    }
  }
  p_Var2 = FUN_0048f66d();
  *(undefined4 *)p_Var2 = 9;
  p_Var2 = FUN_0048f682();
  *(undefined4 *)p_Var2 = 0;
  return 0xffffffff;
}

