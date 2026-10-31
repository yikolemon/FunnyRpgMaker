/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140142a69 */

longlong FUN_140142a69(longlong param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  local_40 = &local_34;
  local_48 = 0;
  lVar5 = FUN_14012b8aa(uVar4,4,0,param_2);
  if (local_34 == 0) {
    pbVar6 = *(byte **)(param_1 + 0x38);
    if (param_2 != 0) {
      uVar7 = 0;
      do {
        if (*(byte **)(param_1 + 0x40) <= pbVar6) goto LAB_140142bbf;
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
LAB_140142bbf:
              FUN_140128b39(uVar4,lVar5);
              goto LAB_140142ab7;
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
            if ((uint)(iVar9 - (int)pbVar6) < uVar8 * 2) goto LAB_140142bbf;
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
LAB_140142ab7:
    lVar5 = 0;
  }
  if (DAT_140f17b40 != (local_30 ^ (ulonglong)auStack_68)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
  }
  return lVar5;
}

