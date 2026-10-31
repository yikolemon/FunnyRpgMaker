/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a38de */

byte __cdecl FUN_004a38de(uint param_1)

{
  __acrt_ptd *p_Var1;
  
  if (param_1 == 0xfffffffe) {
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_00521ec8)) {
      return *(byte *)((&DAT_00521cc8)[param_1 >> 6] + 0x28 + (param_1 & 0x3f) * 0x38) & 0x40;
    }
    p_Var1 = FUN_0048f66d();
    *(undefined4 *)p_Var1 = 9;
    FUN_00495c88();
  }
  return 0;
}

