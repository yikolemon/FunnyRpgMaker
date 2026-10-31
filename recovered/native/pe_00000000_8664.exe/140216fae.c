/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140216fae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140216fae(undefined8 *param_1,longlong param_2)

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
  
  local_38 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    pcVar4 = (char *)*param_1;
    pcVar5 = pcVar4 + param_1[1];
    do {
      if (*pcVar4 != '{') {
        pcVar2 = (char *)FUN_140217509(pcVar4,pcVar5,0x7b);
        pcVar3 = (char *)FUN_140217509(pcVar4,pcVar2,0x7d);
        while (pcVar3 != pcVar2) {
          pcVar1 = pcVar3 + 1;
          if ((pcVar1 == pcVar2) || (*pcVar1 != '}')) {
                    /* WARNING: Subroutine does not return */
            FUN_14021738c("ntifiers so we need to provide one.");
          }
          FUN_140217534(local_48,pcVar4,pcVar1,*(undefined8 *)(param_2 + 0x20));
          *(undefined8 *)(param_2 + 0x20) = local_40;
          pcVar4 = pcVar3 + 2;
          pcVar3 = (char *)FUN_140217509(pcVar4,pcVar2,0x7d);
        }
        FUN_140217534(local_48,pcVar4,pcVar2,*(undefined8 *)(param_2 + 0x20));
        *(undefined8 *)(param_2 + 0x20) = local_40;
        pcVar4 = pcVar2;
        if (pcVar2 == pcVar5) break;
      }
      pcVar4 = (char *)FUN_1402173c0(pcVar4,pcVar5,param_2);
    } while (pcVar4 != pcVar5);
  }
  if (ram0x000140613b10 == (local_38 ^ (ulonglong)auStack_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_38 ^ (ulonglong)auStack_68);
}

