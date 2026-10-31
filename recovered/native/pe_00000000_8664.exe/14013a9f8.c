/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013a9f8 */

void FUN_14013a9f8(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  undefined8 unaff_RBP;
  uint *puVar9;
  ushort uVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined8 local_60;
  undefined *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  lVar3 = param_1[2];
  uVar12 = *(undefined8 *)(lVar2 + 0x88);
  if ((int)param_1[1] != 0) {
    uVar7 = 0;
    do {
      *(undefined2 *)(lVar3 + uVar7 * 2) = 0x1fff;
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 1));
  }
  iVar5 = FUN_14012b845(lVar2,0x756e6963);
  if (iVar5 == 0) {
    uVar7 = CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),0xffff);
    puVar8 = &DAT_140e97888;
    uVar13 = 0;
    local_60 = uVar12;
    do {
      puVar4 = (&PTR_DAT_140e97f90)[*(int *)(puVar8 + 8)];
      puVar9 = *(uint **)(puVar4 + 8);
      if (puVar9 != (uint *)0x0) {
        if (*(int *)(puVar8 + 0x10) == 10) {
          local_64 = (uint)uVar13;
          if (*(int *)(puVar8 + 8) != *(int *)(param_1[99] + 0x1c)) {
            local_64 = (uint)uVar7;
          }
          uVar6 = *puVar9;
          local_58 = puVar4;
          if (uVar6 != 0) {
            uVar10 = (ushort)uVar13 | 0x2000;
            do {
              local_4c = FUN_14012a655(lVar2,uVar6);
              if (((local_4c != 0) && (local_4c < *(uint *)(param_1 + 1))) &&
                 ((~*(ushort *)(lVar3 + (ulonglong)local_4c * 2) & 0x1fff) == 0)) {
                *(ushort *)(lVar3 + (ulonglong)local_4c * 2) = uVar10;
              }
              while ((uVar6 = FUN_14012baa3(lVar2,uVar6,&local_4c), local_4c != 0 &&
                     (uVar6 <= puVar9[1]))) {
                if ((local_4c < *(uint *)(param_1 + 1)) &&
                   ((~*(ushort *)(lVar3 + (ulonglong)local_4c * 2) & 0x1fff) == 0)) {
                  *(ushort *)(lVar3 + (ulonglong)local_4c * 2) = uVar10;
                }
              }
              uVar6 = puVar9[2];
              puVar9 = puVar9 + 2;
            } while (uVar6 != 0);
          }
          puVar9 = *(uint **)(local_58 + 0x10);
          uVar6 = *puVar9;
          if (uVar6 == 0) {
            uVar7 = (ulonglong)local_64;
          }
          else {
            do {
              local_4c = FUN_14012a655(lVar2,uVar6);
              if ((local_4c != 0) && (local_4c < *(uint *)(param_1 + 1))) {
                uVar10 = *(ushort *)(lVar3 + (ulonglong)local_4c * 2);
                if (uVar13 == (uVar10 & 0x1fff)) {
                  *(ushort *)(lVar3 + (ulonglong)local_4c * 2) = uVar10 | 0x4000;
                }
              }
              while ((uVar6 = FUN_14012baa3(lVar2,uVar6,&local_4c), local_4c != 0 &&
                     (uVar6 <= puVar9[1]))) {
                if (local_4c < *(uint *)(param_1 + 1)) {
                  uVar10 = *(ushort *)(lVar3 + (ulonglong)local_4c * 2);
                  if (uVar13 == (uVar10 & 0x1fff)) {
                    *(ushort *)(lVar3 + (ulonglong)local_4c * 2) = uVar10 | 0x4000;
                  }
                }
              }
              uVar6 = puVar9[2];
              puVar9 = puVar9 + 2;
            } while (uVar6 != 0);
            uVar7 = (ulonglong)local_64;
          }
        }
        else {
          FUN_140131dde(param_1,puVar8,lVar3,0);
        }
      }
      puVar8 = (&PTR_DAT_140e98188)[uVar13];
      uVar13 = uVar13 + 1;
    } while (uVar13 != 0x57);
    puVar8 = &DAT_140e97888;
    lVar11 = 1;
    do {
      if (*(int *)(puVar8 + 0x10) == 10) {
        FUN_140131dde(param_1,puVar8,lVar3,0);
      }
      puVar8 = (&PTR_DAT_140e98180)[lVar11];
      lVar11 = lVar11 + 1;
    } while (lVar11 != 0x58);
    FUN_140131dde(param_1,(&PTR_DAT_140e98180)[uVar7 & 0xffff],lVar3,1);
    uVar12 = local_60;
    iVar5 = 0x30;
    do {
      uVar6 = FUN_14012a655(lVar2,iVar5);
      if ((uVar6 != 0) && (uVar6 < *(uint *)(param_1 + 1))) {
        pbVar1 = (byte *)(lVar3 + 1 + (ulonglong)uVar6 * 2);
        *pbVar1 = *pbVar1 | 0x80;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x3a);
  }
  if ((*(int *)(param_1[99] + 0x18) != 0x1fff) && (uVar6 = *(uint *)(param_1 + 1), uVar6 != 0)) {
    uVar7 = 0;
    do {
      uVar10 = *(ushort *)(lVar3 + uVar7 * 2);
      if ((~uVar10 & 0x1fff) == 0) {
        uVar10 = uVar10 & 0xe000;
        *(ushort *)(lVar3 + uVar7 * 2) = uVar10;
        *(ushort *)(lVar3 + uVar7 * 2) = uVar10 | *(ushort *)(param_1[99] + 0x18);
        uVar6 = *(uint *)(param_1 + 1);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  *(undefined8 *)(lVar2 + 0x88) = uVar12;
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

