/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140164ea4 */

undefined4 FUN_140164ea4(undefined8 *param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_58 [32];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  pcVar3 = (char *)*param_1;
  local_38 = pcVar3;
  uVar1 = FUN_140164f4a(&local_38,param_2,10);
  uVar2 = 0;
  if (local_38 != pcVar3) {
    if ((local_38 < param_2) && (*local_38 == '#')) {
      pcVar3 = local_38 + 1;
      local_38 = pcVar3;
      uVar1 = FUN_140164f4a(&local_38,param_2,uVar1);
      if (local_38 == pcVar3) goto LAB_140164f1a;
    }
    *param_1 = local_38;
    uVar2 = uVar1;
  }
LAB_140164f1a:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

