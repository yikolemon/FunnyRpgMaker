/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004b87e */

void FUN_14004b87e(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *_Str1;
  bool bVar15;
  undefined1 auStackY_98 [32];
  int local_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  pbVar4 = (byte *)param_2[2];
  puVar5 = *(undefined8 **)(param_1 + 0x2a0);
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (_Str1 < pbVar4) {
    bVar1 = *_Str1;
    if (bVar1 == 0x5b || (byte)(bVar1 - 0x30) < 10) {
      uVar11 = param_2[4];
      if (bVar1 == 0x5b) {
        *param_2 = (ulonglong)(_Str1 + 1);
        uVar7 = 0x100;
      }
      else {
        uVar7 = (*(code *)param_2[9])(param_2);
      }
      uVar12 = 0x100;
      if ((int)uVar7 < 0x100) {
        uVar12 = uVar7;
      }
      (*(code *)param_2[7])(param_2);
      if ((byte *)*param_2 < pbVar4) {
        if (*(longlong *)(param_1 + 0x1f8) != 0) {
          FUN_14001c53d(uVar11,*(longlong *)(param_1 + 0x1f8));
          *(undefined8 *)(param_1 + 0x1f8) = 0;
          FUN_14001c53d(uVar11,*(longlong *)(param_1 + 0x200));
          *(undefined8 *)(param_1 + 0x200) = 0;
          if ((code *)param_2[0x22] != (code *)0x0) {
            (*(code *)param_2[0x22])(param_2 + 0x18);
          }
        }
        *(uint *)(param_1 + 0x1e8) = uVar12;
        *(uint *)(param_2 + 0x17) = uVar12;
        lVar10 = FUN_14001f231(uVar11,2,0,uVar12,0,&local_4c);
        *(longlong *)(param_1 + 0x1f8) = lVar10;
        if (local_4c == 0) {
          lVar10 = FUN_14001f231(uVar11,8,0,uVar12,0,&local_4c);
          *(longlong *)(param_1 + 0x200) = lVar10;
          if ((local_4c == 0) &&
             (local_4c = (**(code **)*puVar5)(param_2 + 0x18,uVar12,uVar11), local_4c == 0)) {
            if (0 < (int)uVar7) {
              uVar13 = 0;
              do {
                (*(code *)param_2[0x21])(param_2 + 0x18,uVar13,".notdef",8);
                uVar13 = uVar13 + 1;
              } while (uVar12 != uVar13);
            }
            (*(code *)param_2[7])(param_2);
            if ((byte *)*param_2 < pbVar4) {
              local_60 = 0;
              pbVar6 = (byte *)*param_2;
              do {
                pbVar14 = pbVar6;
                bVar2 = *pbVar14;
                if (bVar2 == 100) {
                  _Str1 = pbVar14 + 3;
                  if (((_Str1 < pbVar4) && (pbVar14[1] == 0x65)) && (pbVar14[2] == 0x66)) {
                    bVar3 = *_Str1;
                    if ((((ulonglong)bVar3 < 0x3f) &&
                        ((0x5000832100003601U >> ((ulonglong)bVar3 & 0x3f) & 1) != 0)) ||
                       ((bVar3 - 0x5b < 0x23 &&
                        ((0x500000005U >> ((ulonglong)(bVar3 - 0x5b) & 0x3f) & 1) != 0)))) break;
                  }
                }
                else if (bVar2 == 0x5d) {
                  _Str1 = pbVar14 + 1;
                  break;
                }
                if (bVar1 == 0x5b || (byte)(bVar2 - 0x30) < 10) {
                  iVar8 = local_60;
                  if (bVar1 != 0x5b) {
                    iVar8 = (*(code *)param_2[9])(param_2);
                    (*(code *)param_2[7])(param_2);
                    bVar15 = pbVar14 != (byte *)*param_2;
                    pbVar14 = (byte *)*param_2;
                    if (bVar15) goto LAB_14004bbe1;
LAB_14004bc8d:
                    *(undefined4 *)(param_2 + 3) = 2;
                    goto LAB_14004baa9;
                  }
LAB_14004bbe1:
                  if ((pbVar14 + 2 < pbVar4) && (local_60 < (int)uVar7 && *pbVar14 == 0x2f)) {
                    pbVar14 = pbVar14 + 1;
                    *param_2 = (ulonglong)pbVar14;
                    (*(code *)param_2[8])(param_2);
                    if ((pbVar4 <= (byte *)*param_2) || ((int)param_2[3] != 0)) goto LAB_14004baa9;
                    if (local_60 < (int)uVar12) {
                      uVar11 = (longlong)*param_2 - (longlong)pbVar14;
                      iVar9 = (*(code *)param_2[0x21])(param_2 + 0x18,iVar8,pbVar14,(int)uVar11 + 1)
                      ;
                      *(int *)(param_2 + 3) = iVar9;
                      if (iVar9 != 0) goto LAB_14004baa9;
                      *(undefined1 *)
                       (*(longlong *)(param_2[0x1c] + (longlong)iVar8 * 8) + (uVar11 & 0xffffffff))
                           = 0;
                    }
                    local_60 = local_60 + 1;
                  }
                  else if (bVar1 == 0x5b) goto LAB_14004bc8d;
                }
                else {
                  (*(code *)param_2[8])(param_2);
                  if ((int)param_2[3] != 0) goto LAB_14004baa9;
                }
                (*(code *)param_2[7])(param_2);
                pbVar6 = (byte *)*param_2;
                _Str1 = pbVar14;
              } while ((byte *)*param_2 < pbVar4);
            }
            *(undefined4 *)(param_1 + 0x1e0) = 1;
            *param_2 = (ulonglong)_Str1;
            goto LAB_14004baa9;
          }
        }
        *(int *)(param_2 + 3) = local_4c;
      }
    }
    else if ((_Str1 + 0x11 < pbVar4) &&
            (iVar8 = strncmp((char *)_Str1,"StandardEncoding",0x10), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 2;
    }
    else if ((_Str1 + 0xf < pbVar4) &&
            (iVar8 = strncmp((char *)_Str1,"ExpertEncoding",0xe), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 4;
    }
    else if ((_Str1 + 0x12 < pbVar4) &&
            (iVar8 = strncmp((char *)_Str1,"ISOLatin1Encoding",0x11), iVar8 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 3;
    }
    else {
      *(undefined4 *)(param_2 + 3) = 0xa2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 3) = 3;
  }
LAB_14004baa9:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return;
}

