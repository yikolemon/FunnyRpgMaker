/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102103eb */

undefined4 __thiscall FUN_102103eb(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  if (*param_1 == 0) {
    uVar1 = FUN_102104e8(&local_10);
  }
  else {
    local_10 = param_1[2] + *param_1 * 0x10 + -0x10;
    uVar1 = 0;
  }
  *param_2 = local_10;
  if (DAT_10388d00 == (local_c ^ (uint)&local_10)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

