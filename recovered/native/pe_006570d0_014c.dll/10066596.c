/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10066596 */

void __thiscall FUN_10066596(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if (0x3ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  if (param_3 < 4) {
    param_1[4] = param_3;
    param_1[5] = 3;
    FUN_1025b2d0(param_1,param_2,param_3 * 4);
    param_1[param_3] = 0;
  }
  else {
    local_18 = param_3 | 3;
    if (0x3ffffffd < local_18) {
      local_18 = 0x3ffffffe;
    }
    iVar1 = FUN_100638ae(param_1,&local_18);
    *param_1 = iVar1;
    param_1[4] = param_3;
    param_1[5] = local_18;
    FUN_1025b2d0(iVar1,param_2,param_3 * 4);
    *(undefined4 *)(iVar1 + param_3 * 4) = 0;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

