/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10030bc1 */

undefined4 *
FUN_10030bc1(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,char param_6
            )

{
  int iVar1;
  uint uVar2;
  int *local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  FUN_100253ad(&local_18,param_3,param_5 + param_3,param_2);
  if (param_6 == '\0') {
    *param_1 = local_18;
  }
  else {
    iVar1 = local_18[1];
    uVar2 = iVar1 + 1;
    if ((uint)local_18[2] < uVar2) {
      (*(code *)local_18[3])(local_18,uVar2);
      iVar1 = local_18[1];
      uVar2 = iVar1 + 1;
    }
    local_18[1] = uVar2;
    *(char *)(*local_18 + iVar1) = param_6;
    FUN_100253ad(param_1,param_5 + param_3,param_3 + param_4,local_18);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

