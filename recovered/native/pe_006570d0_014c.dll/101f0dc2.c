/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f0dc2 */

uint __fastcall FUN_101f0dc2(int param_1,uint *param_2,uint param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined *puVar8;
  bool bVar9;
  char *_Str2;
  size_t _MaxCount;
  uint uStack_2c;
  char *pcStack_28;
  int iStack_24;
  char *pcStack_20;
  undefined1 auStack_1c [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_2c;
  *param_2 = param_3;
  pcVar7 = (char *)(param_3 + param_4);
  param_2[2] = (uint)pcVar7;
  param_2[3] = 0;
  (*(code *)param_2[7])(param_2);
  pcVar6 = (char *)*param_2;
  if (pcVar7 <= pcVar6) {
LAB_101f119d:
    uVar2 = param_2[3];
LAB_101f11a0:
    if (DAT_10388d00 != (local_14 ^ (uint)&uStack_2c)) {
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    return uVar2;
  }
  pcStack_20 = (char *)0x0;
  uStack_2c = 0;
LAB_101f0e0c:
  cVar1 = *pcVar6;
  if (cVar1 == 'F') {
    if (pcVar6 + 0xe == pcVar7) goto LAB_101f10ab;
    if (pcVar6 + 0xe < pcVar7) {
      uVar2 = (uint)(byte)pcVar6[0xd];
      if (uVar2 < 0x5b) {
        if (((uVar2 - 0x20 < 0x1f) && ((0x50008321U >> (uVar2 - 0x20 & 0x1f) & 1) != 0)) ||
           ((uVar2 < 0xe && ((0x3601U >> (uVar2 & 0x1f) & 1) != 0)))) goto LAB_101f10ab;
      }
      else if (uVar2 < 0x7b) {
        if ((uVar2 == 0x5b) || (uVar2 == 0x5d)) {
LAB_101f10ab:
          iVar5 = _strncmp(pcVar6,"FontDirectory",0xd);
          if (iVar5 == 0) {
            if ((param_2[0x59] & 1) != 0) {
              param_2[0x59] = param_2[0x59] | 2;
            }
            *param_2 = (uint)(pcVar6 + 0xd);
            goto LAB_101f1126;
          }
        }
      }
      else if ((uVar2 == 0x7d) || (uVar2 == 0x7b)) goto LAB_101f10ab;
    }
LAB_101f1112:
    (*(code *)param_2[8])(param_2);
    if (param_2[3] != 0) goto LAB_101f119d;
  }
  else {
    if (cVar1 == 'c') {
      if (pcVar6 + 10 == pcVar7) goto LAB_101f1081;
      if (pcVar7 <= pcVar6 + 10) goto LAB_101f1112;
      uVar2 = (uint)(byte)pcVar6[9];
      if (uVar2 < 0x5b) {
        if (((uVar2 - 0x20 < 0x1f) && ((0x50008321U >> (uVar2 - 0x20 & 0x1f) & 1) != 0)) ||
           ((uVar2 < 0xe && ((0x3601U >> (uVar2 & 0x1f) & 1) != 0)))) goto LAB_101f1081;
      }
      else if (uVar2 < 0x7b) {
        if ((uVar2 == 0x5b) || (uVar2 == 0x5d)) {
LAB_101f1081:
          _MaxCount = 9;
          _Str2 = "closefile";
LAB_101f1101:
          iVar5 = _strncmp(pcVar6,_Str2,_MaxCount);
          if (iVar5 == 0) goto LAB_101f119d;
        }
      }
      else if ((uVar2 == 0x7d) || (uVar2 == 0x7b)) goto LAB_101f1081;
      goto LAB_101f1112;
    }
    if (cVar1 == 'e') {
      if (pcVar6 + 6 == pcVar7) goto LAB_101f10fa;
      if (pcVar6 + 6 < pcVar7) {
        uVar2 = (uint)(byte)pcVar6[5];
        if (uVar2 < 0x5b) {
          if (((uVar2 - 0x20 < 0x1f) && ((0x50008321U >> (uVar2 - 0x20 & 0x1f) & 1) != 0)) ||
             ((uVar2 < 0xe && ((0x3601U >> (uVar2 & 0x1f) & 1) != 0)))) goto LAB_101f10fa;
        }
        else if (uVar2 < 0x7b) {
          if ((uVar2 == 0x5b) || (uVar2 == 0x5d)) {
LAB_101f10fa:
            _MaxCount = 5;
            _Str2 = "eexec";
            goto LAB_101f1101;
          }
        }
        else if ((uVar2 == 0x7d) || (uVar2 == 0x7b)) goto LAB_101f10fa;
      }
      goto LAB_101f1112;
    }
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar3 = (*(code *)param_2[8])(param_2);
      uStack_2c = CONCAT31((int3)((uint)uVar3 >> 8),1);
      pcStack_20 = pcVar6;
      if (param_2[3] != 0) goto LAB_101f119d;
      goto LAB_101f1126;
    }
    if (pcVar7 <= pcVar6 + 6 || cVar1 != 'R') {
      if (cVar1 == '-' && pcVar6 + 6 < pcVar7) {
        bVar9 = pcVar6[1] == '|';
        goto LAB_101f0f38;
      }
      if (pcVar7 <= pcVar6 + 2 || cVar1 != '/') goto LAB_101f1112;
      pcVar6 = pcVar6 + 1;
      *param_2 = (uint)pcVar6;
      (*(code *)param_2[8])(param_2);
      if (param_2[3] == 0) {
        uVar2 = (int)*param_2 - (int)pcVar6;
        if (((char *)*param_2 < pcVar7 && uVar2 != 0) && uVar2 < 0x16) {
          puVar8 = &DAT_1030ed44;
          uVar4 = 7;
          uStack_2c = uVar2;
          pcStack_28 = pcVar7;
          iStack_24 = param_1;
          do {
            if (uVar4 == uVar2) {
              pcVar7 = *(char **)(puVar8 + 4);
              iVar5 = FUN_102595e0(pcVar6,pcVar7,uVar2);
              uVar2 = uStack_2c;
              if (iVar5 == 0) {
                param_1 = iStack_24;
                if (((*(uint *)(puVar8 + 0x24) & (param_2[0x59] & 1) + 1) != 0) &&
                   (((param_2[0x59] & 2) == 0 ||
                    (iVar5 = _strcmp(pcVar7,"CharStrings"), param_1 = iStack_24, iVar5 == 0)))) {
                  param_1 = iStack_24;
                  uVar2 = FUN_101f17b8(puVar8);
                  param_2[3] = uVar2;
                  if (uVar2 != 0) {
                    if ((char)uVar2 != -0x5e) goto LAB_101f11a0;
                    param_2[3] = 0;
                    pcVar7 = pcStack_28;
                    goto LAB_101f111f;
                  }
                }
                break;
              }
            }
            uVar4 = *(uint *)(puVar8 + 0x28);
            puVar8 = puVar8 + 0x28;
            param_1 = iStack_24;
          } while (uVar4 != 0);
          uStack_2c = 0;
          pcVar7 = pcStack_28;
          goto LAB_101f1126;
        }
        goto LAB_101f111f;
      }
      goto LAB_101f119d;
    }
    bVar9 = pcVar6[1] == 'D';
LAB_101f0f38:
    if (!(bool)((char)uStack_2c != '\0' & bVar9)) goto LAB_101f1112;
    *param_2 = (uint)pcStack_20;
    iVar5 = FUN_101f1744(auStack_1c,*(int *)(*(int *)(param_1 + 0x80) + 0x34) != 0);
    if (iVar5 == 0) {
      uVar2 = 3;
      goto LAB_101f11a0;
    }
  }
LAB_101f111f:
  uStack_2c = 0;
LAB_101f1126:
  (*(code *)param_2[7])(param_2);
  pcVar6 = (char *)*param_2;
  if (pcVar7 <= pcVar6) goto LAB_101f119d;
  goto LAB_101f0e0c;
}

