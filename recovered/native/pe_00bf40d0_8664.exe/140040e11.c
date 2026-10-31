/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140040e11 */

void FUN_140040e11(longlong param_1,uint param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ushort *puVar15;
  longlong lVar16;
  undefined1 auStackY_98 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_98;
  local_4c = 0;
  lVar2 = *(longlong *)(param_1 + 0x98);
  lVar9 = *(longlong *)(param_1 + 0x408);
  puVar3 = *(uint **)(lVar9 + 0x18);
  uVar11 = *puVar3;
  if (uVar11 <= param_2) {
    param_2 = uVar11;
  }
  uVar14 = (ulonglong)param_2;
  if (param_2 != 0) {
    lVar12 = *(longlong *)(puVar3 + 4);
    lVar16 = 0;
    do {
      iVar7 = *(int *)(param_3 + lVar16);
      iVar8 = *(int *)(lVar12 + 0xc + lVar16 * 8);
      if (iVar7 - iVar8 == 0 || iVar7 < iVar8) {
        iVar6 = 0;
        if (iVar7 < iVar8) {
          iVar1 = *(int *)(lVar12 + 8 + lVar16 * 8);
          iVar6 = -0x10000;
          if (iVar1 < iVar7) {
            uVar11 = iVar8 - iVar1;
            goto LAB_140040ec7;
          }
        }
      }
      else {
        iVar1 = *(int *)(lVar12 + 0x10 + lVar16 * 8);
        iVar6 = 0x10000;
        if (iVar7 < iVar1) {
          uVar11 = iVar1 - iVar8;
LAB_140040ec7:
          iVar6 = FUN_14001ecff(iVar7 - iVar8,uVar11);
        }
      }
      *(int *)(param_4 + lVar16) = iVar6;
      lVar16 = lVar16 + 4;
    } while (uVar14 * 4 - lVar16 != 0);
    uVar11 = *puVar3;
  }
  uVar10 = (ulonglong)uVar11;
  if (param_2 < uVar11) {
    do {
      *(undefined4 *)(param_4 + uVar14 * 4) = 0;
      uVar14 = uVar14 + 1;
      uVar10 = (ulonglong)*puVar3;
    } while (uVar14 < uVar10);
  }
  uVar11 = (uint)uVar10;
  puVar4 = *(undefined8 **)(lVar9 + 0x38);
  if (puVar4 != (undefined8 *)0x0) {
    puVar15 = (ushort *)*puVar4;
    if (puVar15 != (ushort *)0x0) {
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      else {
        uVar14 = 0;
        do {
          if (1 < (ulonglong)*puVar15) {
            iVar7 = *(int *)(param_4 + uVar14 * 4);
            lVar9 = *(longlong *)(puVar15 + 4);
            lVar12 = 0;
            do {
              iVar8 = *(int *)(lVar9 + 8 + lVar12 * 8);
              if (iVar7 < iVar8) {
                iVar6 = *(int *)(lVar9 + lVar12 * 8);
                iVar7 = FUN_14001de7c(iVar7 - iVar6,
                                      *(int *)(lVar9 + 0xc + lVar12 * 8) -
                                      *(int *)(lVar9 + 4 + lVar12 * 8),iVar8 - iVar6);
                *(int *)(param_4 + uVar14 * 4) =
                     iVar7 + *(int *)(*(longlong *)(puVar15 + 4) + 4 + lVar12 * 8);
                uVar10 = (ulonglong)*puVar3;
                break;
              }
              lVar12 = lVar12 + 1;
            } while ((ulonglong)*puVar15 - 1 != lVar12);
          }
          uVar14 = uVar14 + 1;
          puVar15 = puVar15 + 8;
          uVar11 = (uint)uVar10;
        } while (uVar14 < uVar10);
      }
    }
    if ((puVar4[2] != 0) && (lVar9 = FUN_14001f231(lVar2,4,0,uVar11,0,&local_4c), local_4c == 0)) {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x10);
      *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10) = param_4;
      if (*puVar3 != 0) {
        uVar14 = 0;
        do {
          uVar11 = (uint)uVar14;
          if (puVar4[7] == 0) {
            uVar13 = 0;
          }
          else {
            uVar10 = uVar14 & 0xffffffff;
            if (*(uint *)(puVar4 + 5) <= uVar14) {
              uVar10 = (ulonglong)(*(uint *)(puVar4 + 5) - 1);
            }
            uVar13 = *(uint *)(puVar4[6] + uVar10 * 4);
            uVar11 = *(uint *)(puVar4[7] + uVar10 * 4);
          }
          iVar7 = *(int *)(param_4 + uVar14 * 4);
          iVar8 = FUN_14003f21c(param_1,(uint *)(puVar4 + 1),uVar13,uVar11);
          iVar7 = iVar7 + iVar8 * 4;
          if (iVar7 < -0xffff) {
            iVar7 = -0x10000;
          }
          if (0xffff < iVar7) {
            iVar7 = 0x10000;
          }
          *(int *)(lVar9 + uVar14 * 4) = iVar7;
          uVar14 = uVar14 + 1;
        } while (uVar14 < *puVar3);
        if (*puVar3 != 0) {
          uVar14 = 0;
          do {
            *(undefined4 *)(param_4 + uVar14 * 4) = *(undefined4 *)(lVar9 + uVar14 * 4);
            uVar14 = uVar14 + 1;
          } while (uVar14 < *puVar3);
        }
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x10) = uVar5;
      FUN_14001c53d(lVar2,lVar9);
    }
  }
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_98)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_98);
  }
  return;
}

