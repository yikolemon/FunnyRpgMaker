/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004502e */

void FUN_14004502e(undefined8 *param_1,longlong param_2)

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
  
  local_38 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    pcVar4 = (char *)*param_1;
    pcVar5 = pcVar4 + param_1[1];
    do {
      if (*pcVar4 != '{') {
        pcVar2 = (char *)FUN_14000d935(pcVar4,pcVar5,0x7b);
        pcVar3 = (char *)FUN_14000d935(pcVar4,pcVar2,0x7d);
        while (pcVar3 != pcVar2) {
          pcVar1 = pcVar3 + 1;
          if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
            FUN_1400451d8("Unmatched \'}\' in format string.");
          }
          FUN_140045355(local_48,pcVar4,pcVar1,*(undefined8 *)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = local_40;
          pcVar4 = pcVar3 + 2;
          pcVar3 = (char *)FUN_14000d935(pcVar4,pcVar2,0x7d);
        }
        FUN_140045355(local_48,pcVar4,pcVar2,*(undefined8 *)(param_2 + 0x20));
        *(undefined8 *)(param_2 + 0x20) = local_40;
        pcVar4 = pcVar2;
        if (pcVar2 == pcVar5) break;
      }
      pcVar4 = (char *)FUN_14004520c(pcVar4,pcVar5,param_2);
    } while (pcVar4 != pcVar5);
  }
  if (DAT_1401c9640 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_38 ^ (ulonglong)auStack_68);
}

