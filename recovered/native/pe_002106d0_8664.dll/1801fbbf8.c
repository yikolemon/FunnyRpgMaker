/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fbbf8 */

undefined8 FUN_1801fbbf8(longlong param_1,uint param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  undefined4 local_78 [16];
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x2e0);
  if (lVar3 == 0) {
    uVar7 = 6;
  }
  else {
    uVar2 = *(uint *)(lVar3 + 4);
    uVar9 = (ulonglong)uVar2;
    if (uVar2 == 0) {
      uVar9 = 0;
    }
    else {
      uVar10 = (ulonglong)param_2;
      if (uVar2 <= param_2) {
        uVar10 = uVar9;
      }
      uVar13 = 0;
      do {
        pbVar1 = (byte *)(lVar3 + 0xa8 + uVar13 * 0x18);
        piVar4 = *(int **)(pbVar1 + 8);
        if (uVar13 < uVar10) {
          iVar8 = *(int *)(param_3 + uVar13 * 4);
          uVar11 = (ulonglong)*pbVar1;
        }
        else {
          uVar11 = (ulonglong)*pbVar1;
          iVar8 = (piVar4[uVar11 - 1] - *piVar4) / 2;
        }
        puVar5 = *(undefined4 **)(lVar3 + 0xb8 + uVar13 * 0x18);
        if ((char)uVar11 == '\0') {
LAB_1801fbcd6:
          uVar6 = *puVar5;
        }
        else {
          uVar12 = 0;
          do {
            if (iVar8 == piVar4[uVar12]) {
              uVar6 = puVar5[uVar12];
              goto LAB_1801fbcd9;
            }
            if (iVar8 < piVar4[uVar12]) {
              if ((int)(uVar12 - 1) < 0) goto LAB_1801fbcd6;
              uVar9 = uVar12 - 1 & 0xffffffff;
              uVar6 = FUN_1801cb4a4(iVar8 - piVar4[uVar9],puVar5[uVar12] - puVar5[uVar9],
                                    piVar4[uVar12] - piVar4[uVar9]);
              uVar9 = (ulonglong)*(uint *)(lVar3 + 4);
              goto LAB_1801fbcd9;
            }
            uVar12 = uVar12 + 1;
          } while (uVar11 != uVar12);
          uVar6 = puVar5[uVar11 - 1];
        }
LAB_1801fbcd9:
        local_78[uVar13] = uVar6;
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar9);
    }
    uVar7 = FUN_1801fc435(param_1,uVar9,local_78);
  }
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_98);
  }
  return uVar7;
}

