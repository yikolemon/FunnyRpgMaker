/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004972c */

void FUN_14004972c(undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    pcVar4 = (char *)*param_1;
    pcVar5 = pcVar4 + param_1[1];
    do {
      if (*pcVar4 != '{') {
        pcVar2 = (char *)FUN_140049c87(pcVar4,pcVar5,0x7b);
        pcVar3 = (char *)FUN_140049c87(pcVar4,pcVar2,0x7d);
        while (pcVar3 != pcVar2) {
          pcVar1 = pcVar3 + 1;
          if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
            FUN_140049b0a("Unmatched \'}\' in format string.");
          }
          FUN_140049caf(local_48,pcVar4,pcVar1,*(undefined8 *)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = local_40;
          pcVar4 = pcVar3 + 2;
          pcVar3 = (char *)FUN_140049c87(pcVar4,pcVar2,0x7d);
        }
        FUN_140049caf(local_48,pcVar4,pcVar2,*(undefined8 *)(param_2 + 0x20));
        *(undefined8 *)(param_2 + 0x20) = local_40;
        pcVar4 = pcVar2;
        if (pcVar2 == pcVar5) break;
      }
      pcVar4 = (char *)FUN_140049b3e(pcVar4,pcVar5,param_2);
    } while (pcVar4 != pcVar5);
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

