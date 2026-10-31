/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140142ec9 */

void FUN_140142ec9(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort *puVar12;
  longlong lVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  int *local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  local_4c = 0;
  local_60 = *(undefined8 *)(param_1 + 0x98);
  lVar7 = *(longlong *)(param_1 + 0x408);
  puVar2 = *(uint **)(lVar7 + 0x18);
  uVar1 = *puVar2;
  if (uVar1 <= param_2) {
    param_2 = uVar1;
  }
  uVar11 = (ulonglong)param_2;
  if (param_2 != 0) {
    lVar10 = *(longlong *)(puVar2 + 4);
    lVar13 = 0;
    local_68 = param_1;
    local_58 = lVar7;
    do {
      iVar6 = *(int *)(param_3 + lVar13);
      iVar5 = *(int *)(lVar10 + 0xc + lVar13 * 8);
      if (iVar6 - iVar5 == 0 || iVar6 < iVar5) {
        uVar4 = 0;
        if (iVar6 < iVar5) {
          iVar9 = *(int *)(lVar10 + 8 + lVar13 * 8);
          uVar4 = 0xffff0000;
          if (iVar9 < iVar6) {
            iVar9 = iVar5 - iVar9;
            goto LAB_140142f7f;
          }
        }
      }
      else {
        iVar9 = *(int *)(lVar10 + 0x10 + lVar13 * 8);
        uVar4 = 0x10000;
        if (iVar6 < iVar9) {
          iVar9 = iVar9 - iVar5;
LAB_140142f7f:
          uVar4 = FUN_14012b378(iVar6 - iVar5,iVar9);
        }
      }
      *(undefined4 *)(param_4 + lVar13) = uVar4;
      lVar13 = lVar13 + 4;
    } while (uVar11 * 4 - lVar13 != 0);
    uVar1 = *puVar2;
    lVar7 = local_58;
    param_1 = local_68;
  }
  uVar8 = (ulonglong)uVar1;
  if (param_2 < uVar1) {
    do {
      *(undefined4 *)(param_4 + uVar11 * 4) = 0;
      uVar11 = uVar11 + 1;
      uVar8 = (ulonglong)*puVar2;
    } while (uVar11 < uVar8);
  }
  puVar3 = *(undefined8 **)(lVar7 + 0x38);
  if (puVar3 != (undefined8 *)0x0) {
    puVar12 = (ushort *)*puVar3;
    if (puVar12 != (ushort *)0x0) {
      if ((int)uVar8 == 0) {
        uVar8 = 0;
      }
      else {
        uVar11 = 0;
        do {
          if (1 < (ulonglong)*puVar12) {
            iVar6 = *(int *)(param_4 + uVar11 * 4);
            lVar7 = *(longlong *)(puVar12 + 4);
            lVar10 = 0;
            do {
              iVar5 = *(int *)(lVar7 + 8 + lVar10 * 8);
              if (iVar6 < iVar5) {
                iVar9 = *(int *)(lVar7 + lVar10 * 8);
                iVar6 = FUN_14012a478(iVar6 - iVar9,
                                      *(int *)(lVar7 + 0xc + lVar10 * 8) -
                                      *(int *)(lVar7 + 4 + lVar10 * 8),iVar5 - iVar9);
                *(int *)(param_4 + uVar11 * 4) =
                     iVar6 + *(int *)(*(longlong *)(puVar12 + 4) + 4 + lVar10 * 8);
                uVar8 = (ulonglong)*puVar2;
                break;
              }
              lVar10 = lVar10 + 1;
            } while ((ulonglong)*puVar12 - 1 != lVar10);
          }
          uVar11 = uVar11 + 1;
          puVar12 = puVar12 + 8;
        } while (uVar11 < uVar8);
      }
    }
    if (puVar3[2] != 0) {
      local_70 = &local_4c;
      local_78 = 0;
      lVar7 = FUN_14012b8aa(local_60,4,0,uVar8);
      if (local_4c == 0) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10);
        *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_4;
        if (*puVar2 != 0) {
          uVar11 = 0;
          local_68 = lVar10;
          do {
            if (puVar3[7] == 0) {
              uVar4 = 0;
              uVar8 = uVar11 & 0xffffffff;
            }
            else {
              uVar8 = uVar11 & 0xffffffff;
              if (*(uint *)(puVar3 + 5) <= uVar11) {
                uVar8 = (ulonglong)(*(uint *)(puVar3 + 5) - 1);
              }
              uVar4 = *(undefined4 *)(puVar3[6] + uVar8 * 4);
              uVar8 = (ulonglong)*(uint *)(puVar3[7] + uVar8 * 4);
            }
            iVar6 = *(int *)(param_4 + uVar11 * 4);
            iVar5 = FUN_1401412d4(param_1,puVar3 + 1,uVar4,uVar8);
            iVar6 = iVar6 + iVar5 * 4;
            if (iVar6 < -0xffff) {
              iVar6 = -0x10000;
            }
            if (0xffff < iVar6) {
              iVar6 = 0x10000;
            }
            *(int *)(lVar7 + uVar11 * 4) = iVar6;
            uVar11 = uVar11 + 1;
          } while (uVar11 < *puVar2);
          lVar10 = local_68;
          if (*puVar2 != 0) {
            uVar11 = 0;
            do {
              *(undefined4 *)(param_4 + uVar11 * 4) = *(undefined4 *)(lVar7 + uVar11 * 4);
              uVar11 = uVar11 + 1;
            } while (uVar11 < *puVar2);
          }
        }
        *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10) = lVar10;
        FUN_140128b39(local_60,lVar7);
      }
    }
  }
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
  }
  return;
}

