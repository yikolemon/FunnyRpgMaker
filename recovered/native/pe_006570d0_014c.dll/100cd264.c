/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cd264 */

int FUN_100cd264(int param_1,int param_2)

{
  int iVar1;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  iVar1 = 0;
  local_18 = param_1;
  while (local_18 != param_2) {
    iVar1 = iVar1 + 1;
    FUN_10016fb8();
  }
  FUN_100cd3b4(param_1,param_2);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

