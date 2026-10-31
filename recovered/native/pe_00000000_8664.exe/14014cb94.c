/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014cb94 */

ulonglong FUN_14014cb94(longlong param_1,ulonglong *param_2,ulonglong param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  size_t _MaxCount;
  undefined *puVar9;
  char *pcVar10;
  char *pcVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 local_58 [12];
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  *param_2 = param_3;
  pcVar10 = (char *)(param_4 + param_3);
  param_2[2] = (ulonglong)pcVar10;
  *(undefined4 *)(param_2 + 3) = 0;
  (*(code *)param_2[7])(param_2);
  pcVar8 = (char *)*param_2;
  if (pcVar8 < pcVar10) {
    pcVar11 = (char *)0x0;
    bVar2 = 0;
    do {
      cVar1 = *pcVar8;
      if (cVar1 == 'F') {
        if (pcVar8 + 0xe != pcVar10) {
          if (pcVar8 + 0xe < pcVar10) {
            bVar3 = pcVar8[0xd];
            if ((((ulonglong)bVar3 < 0x3f) &&
                ((0x5000832100003601U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) ||
               ((bVar3 - 0x5b < 0x23 &&
                ((0x500000005U >> ((ulonglong)(bVar3 - 0x5b) & 0x3f) & 1) != 0))))
            goto LAB_14014cd01;
          }
LAB_14014ce6f:
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] == 0) goto LAB_14014ce7f;
          break;
        }
LAB_14014cd01:
        iVar4 = strncmp(pcVar8,"FontDirectory",0xd);
        if (iVar4 != 0) goto LAB_14014ce6f;
        if ((*(uint *)((longlong)param_2 + 0x294) & 1) != 0) {
          *(uint *)((longlong)param_2 + 0x294) = *(uint *)((longlong)param_2 + 0x294) | 2;
        }
        *param_2 = (ulonglong)(pcVar8 + 0xd);
      }
      else {
        if (cVar1 == 'c') {
          if (pcVar8 + 10 != pcVar10) {
            if (pcVar8 + 10 < pcVar10) {
              bVar2 = pcVar8[9];
              if ((((ulonglong)bVar2 < 0x3f) &&
                  ((0x5000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
                 ((bVar2 - 0x5b < 0x23 &&
                  ((0x500000005U >> ((ulonglong)(bVar2 - 0x5b) & 0x3f) & 1) != 0))))
              goto LAB_14014cca0;
            }
            goto LAB_14014ce6f;
          }
LAB_14014cca0:
          _MaxCount = 9;
          pcVar7 = "closefile";
LAB_14014ccb0:
          iVar4 = strncmp(pcVar8,pcVar7,_MaxCount);
          if (iVar4 != 0) goto LAB_14014ce6f;
          break;
        }
        if (cVar1 == 'e') {
          if (pcVar8 + 6 != pcVar10) {
            if (pcVar8 + 6 < pcVar10) {
              bVar2 = pcVar8[5];
              if ((((ulonglong)bVar2 < 0x3f) &&
                  ((0x5000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
                 ((bVar2 - 0x5b < 0x23 &&
                  ((0x500000005U >> ((ulonglong)(bVar2 - 0x5b) & 0x3f) & 1) != 0))))
              goto LAB_14014cc4f;
            }
            goto LAB_14014ce6f;
          }
LAB_14014cc4f:
          _MaxCount = 5;
          pcVar7 = "eexec";
          goto LAB_14014ccb0;
        }
        if ((byte)(cVar1 - 0x30U) < 10) {
          (*(code *)param_2[8])(param_2);
          bVar2 = 1;
          pcVar11 = pcVar8;
          if ((int)param_2[3] == 0) goto LAB_14014ce81;
          break;
        }
        if (pcVar8 + 6 < pcVar10 && cVar1 == 'R') {
          bVar12 = pcVar8[1] == 'D';
        }
        else {
          if (cVar1 != '-' || pcVar10 <= pcVar8 + 6) {
            if (pcVar10 <= pcVar8 + 2 || cVar1 != '/') goto LAB_14014ce6f;
            pcVar8 = pcVar8 + 1;
            *param_2 = (ulonglong)pcVar8;
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] == 0) {
              uVar6 = (longlong)*param_2 - (longlong)pcVar8;
              iVar4 = (int)uVar6;
              if ((char *)*param_2 < pcVar10 && iVar4 - 1U < 0x15) {
                iVar5 = 7;
                puVar9 = &DAT_140e9c460;
                local_60 = param_1;
                do {
                  if (iVar5 == iVar4) {
                    pcVar7 = *(char **)(puVar9 + 8);
                    iVar5 = memcmp(pcVar8,pcVar7,uVar6 & 0xffffffff);
                    param_1 = local_60;
                    if (iVar5 == 0) {
                      if ((*(uint *)(puVar9 + 0x30) & (*(uint *)((longlong)param_2 + 0x294) & 1) + 1
                          ) != 0) {
                        if (((*(uint *)((longlong)param_2 + 0x294) & 2) == 0) ||
                           (iVar4 = strcmp(pcVar7,"CharStrings"), iVar4 == 0)) {
                          uVar6 = FUN_14014d6a5(param_1,param_2,puVar9);
                          *(int *)(param_2 + 3) = (int)uVar6;
                          if ((int)uVar6 != 0) {
                            if ((char)uVar6 != -0x5e) goto LAB_14014cf24;
                            *(undefined4 *)(param_2 + 3) = 0;
                            goto LAB_14014ce7f;
                          }
                        }
                        bVar2 = 0;
                        goto LAB_14014ce81;
                      }
                      break;
                    }
                  }
                  iVar5 = *(int *)(puVar9 + 0x38);
                  puVar9 = puVar9 + 0x38;
                  param_1 = local_60;
                } while (iVar5 != 0);
              }
              bVar2 = 0;
              goto LAB_14014ce81;
            }
            break;
          }
          bVar12 = pcVar8[1] == '|';
        }
        if (!(bool)(bVar2 & bVar12)) goto LAB_14014ce6f;
        *param_2 = (ulonglong)pcVar11;
        iVar4 = FUN_14014d615(param_2,local_4c,local_58,
                              *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) != 0);
        if (iVar4 == 0) {
          uVar6 = 3;
          goto LAB_14014cf24;
        }
LAB_14014ce7f:
        bVar2 = 0;
      }
LAB_14014ce81:
      (*(code *)param_2[7])(param_2);
      pcVar8 = (char *)*param_2;
    } while (pcVar8 < pcVar10);
  }
  uVar6 = (ulonglong)(uint)param_2[3];
LAB_14014cf24:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return uVar6;
}

