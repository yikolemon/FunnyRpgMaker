/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140142814 */

longlong FUN_140142814(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  ushort *puVar6;
  short sVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *param_2 = 0;
  bVar3 = FUN_14012dd87();
  if (bVar3 == 0) {
    lVar5 = -1;
  }
  else {
    uVar8 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      bVar4 = FUN_14012dd87(param_1);
      uVar8 = (bVar3 & 0x7f) << 8 | (uint)bVar4;
    }
    local_50 = &local_3c;
    local_58 = 0;
    lVar5 = FUN_14012b8aa(uVar1,2,0,uVar8);
    if (local_3c == 0) {
      puVar6 = *(ushort **)(param_1 + 0x38);
      if (uVar8 != 0) {
        uVar9 = 0;
        sVar7 = 0;
        do {
          if (*(ushort **)(param_1 + 0x40) <= puVar6) {
LAB_14014295a:
            FUN_140128b39(uVar1,lVar5);
            goto LAB_140142965;
          }
          uVar2 = *puVar6;
          puVar6 = (ushort *)((longlong)puVar6 + 1);
          uVar13 = (byte)uVar2 & 0x7f;
          uVar12 = (uint)uVar9;
          uVar10 = uVar8 - uVar12;
          if (uVar13 < uVar8 - uVar12) {
            uVar10 = uVar13 + 1;
          }
          iVar11 = (int)*(ushort **)(param_1 + 0x40);
          if ((char)(byte)uVar2 < '\0') {
            if ((uint)(iVar11 - (int)puVar6) < uVar10 * 2) goto LAB_14014295a;
            if (uVar10 != 0) {
              uVar12 = uVar10 + uVar12;
              do {
                uVar2 = *puVar6;
                puVar6 = puVar6 + 1;
                sVar7 = sVar7 + (uVar2 << 8 | uVar2 >> 8);
                *(short *)(lVar5 + uVar9 * 2) = sVar7;
                uVar10 = uVar10 - 1;
                uVar9 = (ulonglong)((int)uVar9 + 1);
              } while (uVar10 != 0);
            }
          }
          else {
            if ((uint)(iVar11 - (int)puVar6) < uVar10) goto LAB_14014295a;
            if (uVar10 != 0) {
              uVar12 = uVar10 + uVar12;
              do {
                uVar2 = *puVar6;
                puVar6 = (ushort *)((longlong)puVar6 + 1);
                sVar7 = sVar7 + (ushort)(byte)uVar2;
                *(short *)(lVar5 + uVar9 * 2) = sVar7;
                uVar10 = uVar10 - 1;
                uVar9 = (ulonglong)((int)uVar9 + 1);
              } while (uVar10 != 0);
            }
          }
          uVar9 = (ulonglong)uVar12;
        } while (uVar12 < uVar8);
      }
      *(ushort **)(param_1 + 0x38) = puVar6;
      *param_2 = uVar8;
    }
    else {
LAB_140142965:
      lVar5 = 0;
    }
  }
  if (DAT_140f17b40 != (local_38 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_38 ^ (ulonglong)auStack_78);
  }
  return lVar5;
}

