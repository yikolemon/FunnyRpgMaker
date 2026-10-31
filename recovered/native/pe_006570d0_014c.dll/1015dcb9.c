/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015dcb9 */

undefined4 __thiscall FUN_1015dcb9(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_18 [4];
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_18;
  FUN_1015ddd1(param_2);
  FUN_1015dd11(local_14,param_2);
  if (DAT_10388d00 == (local_10 ^ (uint)local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

