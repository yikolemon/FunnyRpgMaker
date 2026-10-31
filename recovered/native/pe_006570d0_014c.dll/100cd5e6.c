/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd5e6 */

int __thiscall FUN_100cd5e6(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_14;
  piVar1 = (int *)*param_1;
  if ((param_2 == *piVar1) && (*(char *)(param_3 + 0xd) != '\0')) {
    FUN_100cd0fe(param_1,piVar1[1]);
    piVar1[1] = (int)piVar1;
    *piVar1 = (int)piVar1;
    piVar1[2] = (int)piVar1;
    param_1[1] = 0;
  }
  else {
    while (param_2 != param_3) {
      FUN_10016fb8();
      FUN_100cd66c(param_2);
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_3;
}

