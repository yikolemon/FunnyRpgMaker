/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100486f1 */

undefined2 FUN_100486f1(undefined4 param_1,undefined4 param_2)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined2 local_a;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_14;
  local_a = 0;
  local_10 = 0;
  local_14 = 0;
  FUN_1022d8f0(&local_a,&param_1,1,&local_14,param_2);
  if (DAT_10388d00 == (local_8 ^ (uint)&local_14)) {
    return local_a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

