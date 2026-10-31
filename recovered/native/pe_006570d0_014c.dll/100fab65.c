/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fab65 */

int FUN_100fab65(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  if (param_1 != param_3) {
    iVar1 = FUN_100fab4a(param_1,param_3);
    iVar2 = FUN_100f90d5(&local_18,iVar1,param_2);
    param_1 = param_3;
    if (local_18 == 0xfffd) {
      param_1 = iVar1;
    }
    if (param_3 - iVar1 < iVar2) {
      param_1 = iVar1;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

