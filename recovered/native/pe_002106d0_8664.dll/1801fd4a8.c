/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fd4a8 */

ulonglong FUN_1801fd4a8(longlong param_1,ulonglong *param_2,ulonglong param_3,uint param_4)

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
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
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
            goto LAB_1801fd615;
          }
LAB_1801fd783:
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] == 0) goto LAB_1801fd793;
          break;
        }
LAB_1801fd615:
        iVar4 = strncmp(pcVar8,"FontDirectory",0xd);
        if (iVar4 != 0) goto LAB_1801fd783;
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
              goto LAB_1801fd5b4;
            }
            goto LAB_1801fd783;
          }
LAB_1801fd5b4:
          _MaxCount = 9;
          pcVar7 = "closefile";
LAB_1801fd5c4:
          iVar4 = strncmp(pcVar8,pcVar7,_MaxCount);
          if (iVar4 != 0) goto LAB_1801fd783;
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
              goto LAB_1801fd563;
            }
            goto LAB_1801fd783;
          }
LAB_1801fd563:
          _MaxCount = 5;
          pcVar7 = "eexec";
          goto LAB_1801fd5c4;
        }
        if ((byte)(cVar1 - 0x30U) < 10) {
          (*(code *)param_2[8])(param_2);
          bVar2 = 1;
          pcVar11 = pcVar8;
          if ((int)param_2[3] == 0) goto LAB_1801fd795;
          break;
        }
        if (pcVar8 + 6 < pcVar10 && cVar1 == 'R') {
          bVar12 = pcVar8[1] == 'D';
        }
        else {
          if (cVar1 != '-' || pcVar10 <= pcVar8 + 6) {
            if (pcVar10 <= pcVar8 + 2 || cVar1 != '/') goto LAB_1801fd783;
            pcVar8 = pcVar8 + 1;
            *param_2 = (ulonglong)pcVar8;
            (*(code *)param_2[8])(param_2);
            if ((int)param_2[3] == 0) {
              uVar6 = (longlong)*param_2 - (longlong)pcVar8;
              iVar4 = (int)uVar6;
              if ((char *)*param_2 < pcVar10 && iVar4 - 1U < 0x15) {
                iVar5 = 7;
                puVar9 = &DAT_180338100;
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
                          uVar6 = FUN_1801fdfb9(param_1,param_2,puVar9);
                          *(int *)(param_2 + 3) = (int)uVar6;
                          if ((int)uVar6 != 0) {
                            if ((char)uVar6 != -0x5e) goto LAB_1801fd838;
                            *(undefined4 *)(param_2 + 3) = 0;
                            goto LAB_1801fd793;
                          }
                        }
                        bVar2 = 0;
                        goto LAB_1801fd795;
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
              goto LAB_1801fd795;
            }
            break;
          }
          bVar12 = pcVar8[1] == '|';
        }
        if (!(bool)(bVar2 & bVar12)) goto LAB_1801fd783;
        *param_2 = (ulonglong)pcVar11;
        iVar4 = FUN_1801fdf29(param_2,local_4c,local_58,
                              *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) != 0);
        if (iVar4 == 0) {
          uVar6 = 3;
          goto LAB_1801fd838;
        }
LAB_1801fd793:
        bVar2 = 0;
      }
LAB_1801fd795:
      (*(code *)param_2[7])(param_2);
      pcVar8 = (char *)*param_2;
    } while (pcVar8 < pcVar10);
  }
  uVar6 = (ulonglong)(uint)param_2[3];
LAB_1801fd838:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return uVar6;
}

