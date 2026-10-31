/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10047026 */

undefined4
FUN_10047026(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9
            )

{
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_10;
  if (((param_6 & 0xff) == 0) || ((param_6 & 0xff) == 99)) {
    FUN_1004782f(param_1,param_2,&param_3,1,&param_4,param_9);
  }
  else {
    FUN_1004746c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_10)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

