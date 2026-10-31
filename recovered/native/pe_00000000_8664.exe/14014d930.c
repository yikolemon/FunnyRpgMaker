/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014d930 */

void FUN_14014d930(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined8 unaff_R12;
  byte *pbVar11;
  char cVar12;
  byte *_Str1;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  int local_60;
  int local_5c;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  pbVar3 = (byte *)param_2[2];
  puVar4 = *(undefined8 **)(param_1 + 0x2a0);
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (_Str1 < pbVar3) {
    bVar1 = *_Str1;
    uVar8 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),bVar1);
    if (bVar1 == 0x5b || (byte)(bVar1 - 0x30) < 10) {
      uVar9 = param_2[4];
      if (bVar1 == 0x5b) {
        *param_2 = (ulonglong)(_Str1 + 1);
        local_5c = 0x100;
      }
      else {
        local_5c = (*(code *)param_2[9])(param_2);
      }
      iVar6 = 0x100;
      if (local_5c < 0x100) {
        iVar6 = local_5c;
      }
      (*(code *)param_2[7])(param_2);
      if ((byte *)*param_2 < pbVar3) {
        local_58 = uVar8;
        if (*(longlong *)(param_1 + 0x1f8) != 0) {
          FUN_140128b39(uVar9);
          *(undefined8 *)(param_1 + 0x1f8) = 0;
          FUN_140128b39(uVar9,*(undefined8 *)(param_1 + 0x200));
          *(undefined8 *)(param_1 + 0x200) = 0;
          if ((code *)param_2[0x22] != (code *)0x0) {
            (*(code *)param_2[0x22])(param_2 + 0x18);
          }
        }
        *(int *)(param_1 + 0x1e8) = iVar6;
        *(int *)(param_2 + 0x17) = iVar6;
        local_78 = 0;
        local_70 = &local_4c;
        uVar8 = FUN_14012b8aa(uVar9,2,0,iVar6);
        *(undefined8 *)(param_1 + 0x1f8) = uVar8;
        if (local_4c == 0) {
          local_78 = 0;
          local_70 = &local_4c;
          uVar8 = FUN_14012b8aa(uVar9,8,0,iVar6);
          *(undefined8 *)(param_1 + 0x200) = uVar8;
          if ((local_4c == 0) &&
             (local_4c = (**(code **)*puVar4)(param_2 + 0x18,iVar6,uVar9), uVar8 = local_58,
             local_4c == 0)) {
            if (0 < local_5c) {
              iVar10 = 0;
              do {
                (*(code *)param_2[0x21])(param_2 + 0x18,iVar10,".notdef",8);
                iVar10 = iVar10 + 1;
              } while (iVar6 != iVar10);
            }
            (*(code *)param_2[7])(param_2);
            if ((byte *)*param_2 < pbVar3) {
              local_60 = 0;
              pbVar5 = (byte *)*param_2;
              do {
                pbVar11 = pbVar5;
                bVar1 = *pbVar11;
                if (bVar1 == 100) {
                  _Str1 = pbVar11 + 3;
                  if (((_Str1 < pbVar3) && (pbVar11[1] == 0x65)) && (pbVar11[2] == 0x66)) {
                    bVar2 = *_Str1;
                    if ((((ulonglong)bVar2 < 0x3f) &&
                        ((0x5000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
                       ((bVar2 - 0x5b < 0x23 &&
                        ((0x500000005U >> ((ulonglong)(bVar2 - 0x5b) & 0x3f) & 1) != 0)))) break;
                  }
                }
                else if (bVar1 == 0x5d) {
                  _Str1 = pbVar11 + 1;
                  break;
                }
                cVar12 = (char)uVar8;
                if (cVar12 == '[' || (byte)(bVar1 - 0x30) < 10) {
                  iVar10 = local_60;
                  if (cVar12 != '[') {
                    iVar10 = (*(code *)param_2[9])(param_2);
                    (*(code *)param_2[7])(param_2);
                    bVar13 = pbVar11 != (byte *)*param_2;
                    pbVar11 = (byte *)*param_2;
                    if (bVar13) goto LAB_14014dc93;
LAB_14014dd3f:
                    *(undefined4 *)(param_2 + 3) = 2;
                    goto LAB_14014db5b;
                  }
LAB_14014dc93:
                  if ((pbVar11 + 2 < pbVar3) && (local_60 < local_5c && *pbVar11 == 0x2f)) {
                    pbVar11 = pbVar11 + 1;
                    *param_2 = (ulonglong)pbVar11;
                    (*(code *)param_2[8])(param_2);
                    if ((pbVar3 <= (byte *)*param_2) || ((int)param_2[3] != 0)) goto LAB_14014db5b;
                    if (local_60 < iVar6) {
                      uVar9 = (longlong)*param_2 - (longlong)pbVar11;
                      iVar7 = (*(code *)param_2[0x21])(param_2 + 0x18,iVar10,pbVar11,(int)uVar9 + 1)
                      ;
                      *(int *)(param_2 + 3) = iVar7;
                      if (iVar7 != 0) goto LAB_14014db5b;
                      *(undefined1 *)
                       (*(longlong *)(param_2[0x1c] + (longlong)iVar10 * 8) + (uVar9 & 0xffffffff))
                           = 0;
                    }
                    local_60 = local_60 + 1;
                  }
                  else if (cVar12 == '[') goto LAB_14014dd3f;
                }
                else {
                  (*(code *)param_2[8])(param_2);
                  if ((int)param_2[3] != 0) goto LAB_14014db5b;
                }
                (*(code *)param_2[7])(param_2);
                pbVar5 = (byte *)*param_2;
                _Str1 = pbVar11;
              } while ((byte *)*param_2 < pbVar3);
            }
            *(undefined4 *)(param_1 + 0x1e0) = 1;
            *param_2 = (ulonglong)_Str1;
            goto LAB_14014db5b;
          }
        }
        *(int *)(param_2 + 3) = local_4c;
      }
    }
    else if ((_Str1 + 0x11 < pbVar3) &&
            (iVar6 = strncmp((char *)_Str1,"StandardEncoding",0x10), iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 2;
    }
    else if ((_Str1 + 0xf < pbVar3) &&
            (iVar6 = strncmp((char *)_Str1,"ExpertEncoding",0xe), iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 4;
    }
    else if ((_Str1 + 0x12 < pbVar3) &&
            (iVar6 = strncmp((char *)_Str1,"ISOLatin1Encoding",0x11), iVar6 == 0)) {
      *(undefined4 *)(param_1 + 0x1e0) = 3;
    }
    else {
      *(undefined4 *)(param_2 + 3) = 0xa2;
    }
  }
  else {
    *(undefined4 *)(param_2 + 3) = 3;
  }
LAB_14014db5b:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

