/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140059c6b */

void FUN_140059c6b(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined7 extraout_var;
  byte *pbVar10;
  uint uVar11;
  ulonglong uVar12;
  byte *_Str1;
  bool bVar13;
  undefined1 auStackY_88 [32];
  int local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  pbVar3 = (byte *)param_2[2];
  puVar4 = *(undefined8 **)(param_1 + 0x2a0);
  (*(code *)param_2[7])(param_2);
  _Str1 = (byte *)*param_2;
  if (_Str1 < pbVar3) {
    bVar1 = *_Str1;
    if (bVar1 != 0x5b && 9 < (byte)(bVar1 - 0x30)) {
      if ((_Str1 + 0x11 < pbVar3) &&
         (iVar7 = strncmp((char *)_Str1,"StandardEncoding",0x10), iVar7 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 2;
      }
      else if ((_Str1 + 0xf < pbVar3) &&
              (iVar7 = strncmp((char *)_Str1,"ExpertEncoding",0xe), iVar7 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 4;
      }
      else if ((_Str1 + 0x12 < pbVar3) &&
              (iVar7 = strncmp((char *)_Str1,"ISOLatin1Encoding",0x11), iVar7 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 3;
      }
      else {
        *(undefined4 *)(param_2 + 3) = 0xa2;
      }
      goto LAB_140059d74;
    }
    uVar12 = param_2[4];
    if (bVar1 == 0x5b) {
      *param_2 = (ulonglong)(_Str1 + 1);
      uVar6 = 0x100;
    }
    else {
      uVar6 = (*(code *)param_2[9])(param_2);
      if (0x100 < (int)uVar6) goto LAB_140059d6d;
    }
    (*(code *)param_2[7])(param_2);
    if ((byte *)*param_2 < pbVar3) {
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        FUN_14001c53d(uVar12,*(longlong *)(param_1 + 0x1f8));
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        FUN_14001c53d(uVar12,*(longlong *)(param_1 + 0x200));
        *(undefined8 *)(param_1 + 0x200) = 0;
        if ((code *)param_2[0x20] != (code *)0x0) {
          (*(code *)param_2[0x20])(param_2 + 0x16);
        }
      }
      *(uint *)(param_1 + 0x1e8) = uVar6;
      *(uint *)(param_2 + 0x15) = uVar6;
      lVar9 = FUN_14001f231(uVar12,2,0,uVar6,0,&local_4c);
      *(longlong *)(param_1 + 0x1f8) = lVar9;
      if (local_4c == 0) {
        lVar9 = FUN_14001f231(uVar12,8,0,uVar6,0,&local_4c);
        *(longlong *)(param_1 + 0x200) = lVar9;
        if ((local_4c == 0) &&
           (local_4c = (**(code **)*puVar4)(param_2 + 0x16,uVar6,uVar12), local_4c == 0)) {
          if (0 < (int)uVar6) {
            uVar11 = 0;
            do {
              (*(code *)param_2[0x1f])(param_2 + 0x16,uVar11,".notdef",8);
              uVar11 = uVar11 + 1;
            } while (uVar6 != uVar11);
          }
          (*(code *)param_2[7])(param_2);
          if ((byte *)*param_2 < pbVar3) {
            local_54 = 0;
            pbVar5 = (byte *)*param_2;
            do {
              pbVar10 = pbVar5;
              bVar2 = *pbVar10;
              if (bVar2 == 100) {
                _Str1 = pbVar10 + 3;
                if ((((_Str1 < pbVar3) && (pbVar10[1] == 0x65)) && (pbVar10[2] == 0x66)) &&
                   (bVar13 = FUN_14005aa34(*_Str1), (int)CONCAT71(extraout_var,bVar13) != 0)) break;
              }
              else if (bVar2 == 0x5d) {
                _Str1 = pbVar10 + 1;
                break;
              }
              if (bVar1 == 0x5b || (byte)(bVar2 - 0x30) < 10) {
                iVar7 = local_54;
                if (bVar1 != 0x5b) {
                  iVar7 = (*(code *)param_2[9])(param_2);
                  (*(code *)param_2[7])(param_2);
                  bVar13 = pbVar10 != (byte *)*param_2;
                  pbVar10 = (byte *)*param_2;
                  if (bVar13) goto LAB_140059f91;
LAB_14005a02d:
                  *(undefined4 *)(param_2 + 3) = 2;
                  goto LAB_140059d74;
                }
LAB_140059f91:
                if ((pbVar10 + 2 < pbVar3) && (local_54 < (int)uVar6 && *pbVar10 == 0x2f)) {
                  pbVar10 = pbVar10 + 1;
                  *param_2 = (ulonglong)pbVar10;
                  (*(code *)param_2[8])(param_2);
                  if ((pbVar3 <= (byte *)*param_2) || ((int)param_2[3] != 0)) goto LAB_140059d74;
                  uVar12 = (longlong)*param_2 - (longlong)pbVar10;
                  iVar8 = (*(code *)param_2[0x1f])(param_2 + 0x16,iVar7,pbVar10,(int)uVar12 + 1);
                  *(int *)(param_2 + 3) = iVar8;
                  if (iVar8 != 0) goto LAB_140059d74;
                  *(undefined1 *)
                   (*(longlong *)(param_2[0x1a] + (longlong)iVar7 * 8) + (uVar12 & 0xffffffff)) = 0;
                  local_54 = local_54 + 1;
                }
                else if (bVar1 == 0x5b) goto LAB_14005a02d;
              }
              else {
                (*(code *)param_2[8])(param_2);
                if ((int)param_2[3] != 0) goto LAB_140059d74;
              }
              (*(code *)param_2[7])(param_2);
              pbVar5 = (byte *)*param_2;
              _Str1 = pbVar10;
            } while ((byte *)*param_2 < pbVar3);
          }
          *(undefined4 *)(param_1 + 0x1e0) = 1;
          *param_2 = (ulonglong)_Str1;
          goto LAB_140059d74;
        }
      }
      *(int *)(param_2 + 3) = local_4c;
    }
  }
  else {
LAB_140059d6d:
    *(undefined4 *)(param_2 + 3) = 3;
  }
LAB_140059d74:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return;
}

