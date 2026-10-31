/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e6434 */

void FUN_1400e6434(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  sVar3 = strlen(param_5);
  if (*param_5 != '\0') {
    pcVar4 = param_5;
    do {
      iVar2 = FUN_140076955(&local_4c,pcVar4,param_5 + sVar3);
      local_58 = local_4c;
      FUN_1400e6409(param_1,param_2);
      pcVar1 = pcVar4 + iVar2;
      pcVar4 = pcVar4 + iVar2;
    } while (*pcVar1 != '\0');
  }
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_78)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_78);
}

