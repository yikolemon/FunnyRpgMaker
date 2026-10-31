/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049d4c2 */

undefined4 __cdecl FUN_0049d4c2(uint param_1)

{
  __acrt_ptd *p_Var1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_0048f682();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00521ec8)) {
      iVar2 = (param_1 & 0x3f) * 0x38;
      if ((*(byte *)((&DAT_00521cc8)[param_1 >> 6] + 0x28 + iVar2) & 1) != 0) {
        return *(undefined4 *)((&DAT_00521cc8)[param_1 >> 6] + 0x18 + iVar2);
      }
    }
    p_Var1 = FUN_0048f682();
    *(undefined4 *)p_Var1 = 0;
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 9;
    FUN_00495c88();
  }
  return 0xffffffff;
}

