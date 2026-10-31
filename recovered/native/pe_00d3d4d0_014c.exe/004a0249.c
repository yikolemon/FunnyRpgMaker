/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a0249 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */

uint __cdecl FUN_004a0249(uint param_1,LPWSTR param_2,uint param_3)

{
  bool bVar1;
  __acrt_ptd *p_Var2;
  int iVar3;
  uint uVar4;
  void *local_14;
  
  if (param_1 == 0xfffffffe) {
    p_Var2 = FUN_0048f682();
    *(undefined4 *)p_Var2 = 0;
    p_Var2 = FUN_0048f66d();
    *(undefined4 *)p_Var2 = 9;
    ExceptionList = local_14;
    return 0xffffffff;
  }
  if (((int)param_1 < 0) || (DAT_00521ec8 <= param_1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = (param_1 & 0x3f) * 0x38;
    if ((*(byte *)((&DAT_00521cc8)[(int)param_1 >> 6] + 0x28 + iVar3) & 1) != 0) {
      if (param_3 < 0x80000000) {
        FUN_0049d70b(param_1);
        uVar4 = 0xffffffff;
        if ((*(byte *)((&DAT_00521cc8)[(int)param_1 >> 6] + 0x28 + iVar3) & 1) == 0) {
          p_Var2 = FUN_0048f66d();
          *(undefined4 *)p_Var2 = 9;
          p_Var2 = FUN_0048f682();
          *(undefined4 *)p_Var2 = 0;
        }
        else {
          uVar4 = FUN_004a0362(param_1,param_2,param_3);
        }
        FUN_004a035a();
        ExceptionList = local_14;
        return uVar4;
      }
      p_Var2 = FUN_0048f682();
      *(undefined4 *)p_Var2 = 0;
      p_Var2 = FUN_0048f66d();
      *(undefined4 *)p_Var2 = 0x16;
      goto LAB_004a02a2;
    }
  }
  p_Var2 = FUN_0048f682();
  *(undefined4 *)p_Var2 = 0;
  p_Var2 = FUN_0048f66d();
  *(undefined4 *)p_Var2 = 9;
LAB_004a02a2:
  FUN_00495c88();
  ExceptionList = local_14;
  return 0xffffffff;
}

