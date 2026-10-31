/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400409b1 */

longlong FUN_1400409b1(longlong param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStackY_68 [32];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar5 = FUN_14001f231(lVar4,4,0,param_2,0,&local_34);
  if (local_34 == 0) {
    pbVar6 = *(byte **)(param_1 + 0x38);
    if (param_2 != 0) {
      uVar7 = 0;
      do {
        if (*(byte **)(param_1 + 0x40) <= pbVar6) goto LAB_140040b07;
        bVar3 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar8 = param_2 - uVar7;
        if ((bVar3 & 0x3f) < param_2 - uVar7) {
          uVar8 = (bVar3 & 0x3f) + 1;
        }
        uVar2 = uVar7;
        if ((char)bVar3 < '\0') {
          if (uVar8 != 0) {
            uVar2 = uVar8 + uVar7;
            do {
              uVar10 = (ulonglong)uVar7;
              uVar7 = uVar7 + 1;
              *(undefined4 *)(lVar5 + uVar10 * 4) = 0;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
        }
        else {
          iVar9 = (int)*(byte **)(param_1 + 0x40);
          if (bVar3 < 0x40) {
            if ((uint)(iVar9 - (int)pbVar6) < uVar8) {
LAB_140040b07:
              FUN_14001c53d(lVar4,lVar5);
              goto LAB_1400409ff;
            }
            if (uVar8 != 0) {
              uVar2 = uVar8 + uVar7;
              do {
                bVar3 = *pbVar6;
                pbVar6 = pbVar6 + 1;
                uVar10 = (ulonglong)uVar7;
                uVar7 = uVar7 + 1;
                *(int *)(lVar5 + uVar10 * 4) = (int)(char)bVar3 << 0x10;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
          else {
            if ((uint)(iVar9 - (int)pbVar6) < uVar8 * 2) goto LAB_140040b07;
            if (uVar8 != 0) {
              uVar2 = uVar8 + uVar7;
              do {
                bVar3 = *pbVar6;
                pbVar1 = pbVar6 + 1;
                pbVar6 = pbVar6 + 2;
                uVar10 = (ulonglong)uVar7;
                uVar7 = uVar7 + 1;
                *(uint *)(lVar5 + uVar10 * 4) = (uint)CONCAT11(bVar3,*pbVar1) << 0x10;
                uVar8 = uVar8 - 1;
              } while (uVar8 != 0);
            }
          }
        }
        uVar7 = uVar2;
      } while (uVar7 < param_2);
    }
    *(byte **)(param_1 + 0x38) = pbVar6;
  }
  else {
LAB_1400409ff:
    lVar5 = 0;
  }
  if (DAT_14012ea80 != (local_30 ^ (ulonglong)auStackY_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_30 ^ (ulonglong)auStackY_68);
  }
  return lVar5;
}

