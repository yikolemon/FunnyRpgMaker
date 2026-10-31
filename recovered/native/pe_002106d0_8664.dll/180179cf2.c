/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180179cf2 */

undefined8 FUN_180179cf2(longlong param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  char *pcVar5;
  
  pcVar5 = *(char **)(param_1 + 0xc0);
  if (pcVar5 < *(char **)(param_1 + 200)) {
LAB_180179d28:
    pcVar3 = pcVar5 + 1;
    *(char **)(param_1 + 0xc0) = pcVar3;
    if (*pcVar5 == 'G') {
      if (*(char **)(param_1 + 200) <= pcVar3) {
        if (*(int *)(param_1 + 0x30) == 0) goto LAB_180179f57;
        FUN_180176673(param_1);
        pcVar3 = *(char **)(param_1 + 0xc0);
      }
      pcVar5 = pcVar3 + 1;
      *(char **)(param_1 + 0xc0) = pcVar5;
      if (*pcVar3 == 'I') {
        if (*(char **)(param_1 + 200) <= pcVar5) {
          if (*(int *)(param_1 + 0x30) == 0) goto LAB_180179f57;
          FUN_180176673(param_1);
          pcVar5 = *(char **)(param_1 + 0xc0);
        }
        pcVar3 = pcVar5 + 1;
        *(char **)(param_1 + 0xc0) = pcVar3;
        if (*pcVar5 == 'F') {
          if (*(char **)(param_1 + 200) <= pcVar3) {
            if (*(int *)(param_1 + 0x30) == 0) goto LAB_180179f57;
            FUN_180176673(param_1);
            pcVar3 = *(char **)(param_1 + 0xc0);
          }
          pcVar5 = pcVar3 + 1;
          *(char **)(param_1 + 0xc0) = pcVar5;
          if (*pcVar3 == '8') {
            if (*(char **)(param_1 + 200) <= pcVar5) {
              if (*(int *)(param_1 + 0x30) == 0) goto LAB_180179f57;
              FUN_180176673(param_1);
              pcVar5 = *(char **)(param_1 + 0xc0);
            }
            pcVar3 = pcVar5 + 1;
            *(char **)(param_1 + 0xc0) = pcVar3;
            if ((*pcVar5 == '7') || (*pcVar5 == '9')) {
              if (*(char **)(param_1 + 200) <= pcVar3) {
                if (*(int *)(param_1 + 0x30) == 0) goto LAB_180179f57;
                FUN_180176673(param_1);
                pcVar3 = *(char **)(param_1 + 0xc0);
              }
              *(char **)(param_1 + 0xc0) = pcVar3 + 1;
              if (*pcVar3 == 'a') {
                *(undefined1 **)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x160) = &DAT_1803861e4;
                iVar1 = FUN_18017918c(param_1);
                *param_2 = iVar1;
                iVar1 = FUN_18017918c(param_1);
                param_2[1] = iVar1;
                pbVar4 = *(byte **)(param_1 + 0xc0);
                if (pbVar4 < *(byte **)(param_1 + 200)) {
LAB_180179eb1:
                  *(byte **)(param_1 + 0xc0) = pbVar4 + 1;
                  uVar2 = (uint)*pbVar4;
                }
                else {
                  if (*(int *)(param_1 + 0x30) != 0) {
                    FUN_180176673(param_1);
                    pbVar4 = *(byte **)(param_1 + 0xc0);
                    goto LAB_180179eb1;
                  }
                  uVar2 = 0;
                }
                param_2[8] = uVar2;
                pbVar4 = *(byte **)(param_1 + 0xc0);
                if (pbVar4 < *(byte **)(param_1 + 200)) {
LAB_180179eeb:
                  *(byte **)(param_1 + 0xc0) = pbVar4 + 1;
                  uVar2 = (uint)*pbVar4;
                }
                else {
                  if (*(int *)(param_1 + 0x30) != 0) {
                    FUN_180176673(param_1);
                    pbVar4 = *(byte **)(param_1 + 0xc0);
                    goto LAB_180179eeb;
                  }
                  uVar2 = 0;
                }
                param_2[9] = uVar2;
                pbVar4 = *(byte **)(param_1 + 0xc0);
                if (pbVar4 < *(byte **)(param_1 + 200)) {
LAB_180179f25:
                  *(byte **)(param_1 + 0xc0) = pbVar4 + 1;
                  uVar2 = (uint)*pbVar4;
                }
                else {
                  if (*(int *)(param_1 + 0x30) != 0) {
                    FUN_180176673(param_1);
                    pbVar4 = *(byte **)(param_1 + 0xc0);
                    goto LAB_180179f25;
                  }
                  uVar2 = 0;
                }
                param_2[10] = uVar2;
                param_2[0xb] = -1;
                if ((*param_2 < 0x1000001) && (param_2[1] < 0x1000001)) {
                  if (-1 < (char)(byte)param_2[8]) {
                    return 1;
                  }
                  FUN_180179fb0(param_1,param_2 + 0xd,2 << ((byte)param_2[8] & 7),0xffffffff);
                  return 1;
                }
                pcVar5 = "too large";
                goto LAB_180179f5e;
              }
            }
          }
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x30) != 0) {
    FUN_180176673(param_1);
    pcVar5 = *(char **)(param_1 + 0xc0);
    goto LAB_180179d28;
  }
LAB_180179f57:
  pcVar5 = "not GIF";
LAB_180179f5e:
  FUN_1801765d0(pcVar5);
  return 0;
}

