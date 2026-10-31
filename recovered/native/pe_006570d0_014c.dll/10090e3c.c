/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10090e3c */

void FUN_10090e3c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined1 local_14 [4];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_14;
  if ((param_6 & 0x100) == 0) {
    FUN_10090f2d(param_1,param_2,param_3,param_4,param_7,local_14[0]);
  }
  else {
    FUN_100917c0(param_1,param_2,param_3,param_4,param_7,param_5);
  }
  if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

