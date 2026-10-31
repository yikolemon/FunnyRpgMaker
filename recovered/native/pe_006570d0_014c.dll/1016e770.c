/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016e770 */

int FUN_1016e770(undefined4 *param_1)

{
  int iVar1;
  int local_18 [3];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)local_18;
  iVar1 = FUN_1016e7cf(param_1,local_18);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if (local_18[0] != 8) {
    iVar1 = FUN_1016e8ec(*param_1);
  }
  if (DAT_10388d00 == (local_c ^ (uint)local_18)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

