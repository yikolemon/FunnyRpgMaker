/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10193246 */

void FUN_10193246(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char *param_5)

{
  char *pcVar1;
  size_t sVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  sVar2 = _strlen(param_5);
  if (*param_5 != '\0') {
    pcVar4 = param_5;
    do {
      puVar5 = &local_18;
      iVar3 = FUN_100f90d5(&local_18,pcVar4,param_5 + sVar2);
      FUN_10193218(param_1,param_2,puVar5,param_4,local_18);
      pcVar1 = pcVar4 + iVar3;
      pcVar4 = pcVar4 + iVar3;
    } while (*pcVar1 != '\0');
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

