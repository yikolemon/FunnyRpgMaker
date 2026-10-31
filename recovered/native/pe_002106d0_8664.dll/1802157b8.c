/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802157b8 */

undefined4 FUN_1802157b8(undefined8 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  pcVar3 = (char *)*param_1;
  local_38 = pcVar3;
  uVar1 = FUN_18021585e(&local_38,param_2,10);
  uVar2 = 0;
  if (local_38 != pcVar3) {
    if ((local_38 < param_2) && (*local_38 == '#')) {
      pcVar3 = local_38 + 1;
      local_38 = pcVar3;
      uVar1 = FUN_18021585e(&local_38,param_2,uVar1);
      if (local_38 == pcVar3) goto LAB_18021582e;
    }
    *param_1 = local_38;
    uVar2 = uVar1;
  }
LAB_18021582e:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

