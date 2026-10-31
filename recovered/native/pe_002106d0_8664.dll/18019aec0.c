/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019aec0 */

void FUN_18019aec0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  sVar3 = strlen(param_5);
  if (*param_5 != '\0') {
    pcVar4 = param_5;
    do {
      iVar2 = FUN_1800fd699(&local_4c,pcVar4,param_5 + sVar3);
      local_58 = local_4c;
      FUN_18019ae95(param_1,param_2);
      pcVar1 = pcVar4 + iVar2;
      pcVar4 = pcVar4 + iVar2;
    } while (*pcVar1 != '\0');
  }
  if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
}

