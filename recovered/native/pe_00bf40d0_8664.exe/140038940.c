/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038940 */

void FUN_140038940(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined8 unaff_RBP;
  uint *puVar10;
  ushort uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined8 local_60;
  undefined *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  lVar3 = param_1[2];
  uVar13 = *(undefined8 *)(lVar2 + 0x88);
  if ((int)param_1[1] != 0) {
    uVar6 = 0;
    do {
      *(undefined2 *)(lVar3 + uVar6 * 2) = 0x1fff;
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 1));
  }
  uVar7 = FUN_14001f1cc(lVar2,0x756e6963);
  if ((int)uVar7 == 0) {
    uVar6 = CONCAT62((int6)((ulonglong)unaff_RBP >> 0x10),0xffff);
    puVar8 = (undefined2 *)&DAT_1400f0648;
    uVar14 = 0;
    local_60 = uVar13;
    do {
      puVar4 = (&PTR_DAT_1400f0d50)[*(int *)(puVar8 + 4)];
      puVar10 = *(uint **)(puVar4 + 8);
      if (puVar10 != (uint *)0x0) {
        if (*(int *)(puVar8 + 8) == 10) {
          local_64 = (uint)uVar14;
          if (*(int *)(puVar8 + 4) != *(int *)(param_1[99] + 0x1c)) {
            local_64 = (uint)uVar6;
          }
          uVar5 = *puVar10;
          local_58 = puVar4;
          if (uVar5 != 0) {
            uVar11 = (ushort)uVar14 | 0x2000;
            do {
              local_4c = FUN_14001e059(lVar2);
              if (((local_4c != 0) && (local_4c < *(uint *)(param_1 + 1))) &&
                 ((~*(ushort *)(lVar3 + (ulonglong)local_4c * 2) & 0x1fff) == 0)) {
                *(ushort *)(lVar3 + (ulonglong)local_4c * 2) = uVar11;
              }
              while ((uVar5 = FUN_14001f42a(lVar2,uVar5,&local_4c), local_4c != 0 &&
                     (uVar5 <= puVar10[1]))) {
                if ((local_4c < *(uint *)(param_1 + 1)) &&
                   ((~*(ushort *)(lVar3 + (ulonglong)local_4c * 2) & 0x1fff) == 0)) {
                  *(ushort *)(lVar3 + (ulonglong)local_4c * 2) = uVar11;
                }
              }
              uVar5 = puVar10[2];
              puVar10 = puVar10 + 2;
            } while (uVar5 != 0);
          }
          puVar10 = *(uint **)(local_58 + 0x10);
          uVar5 = *puVar10;
          if (uVar5 == 0) {
            uVar6 = (ulonglong)local_64;
          }
          else {
            do {
              local_4c = FUN_14001e059(lVar2);
              if ((local_4c != 0) && (local_4c < *(uint *)(param_1 + 1))) {
                uVar11 = *(ushort *)(lVar3 + (ulonglong)local_4c * 2);
                if (uVar14 == (uVar11 & 0x1fff)) {
                  *(ushort *)(lVar3 + (ulonglong)local_4c * 2) = uVar11 | 0x4000;
                }
              }
              while ((uVar5 = FUN_14001f42a(lVar2,uVar5,&local_4c), local_4c != 0 &&
                     (uVar5 <= puVar10[1]))) {
                if (local_4c < *(uint *)(param_1 + 1)) {
                  uVar11 = *(ushort *)(lVar3 + (ulonglong)local_4c * 2);
                  if (uVar14 == (uVar11 & 0x1fff)) {
                    *(ushort *)(lVar3 + (ulonglong)local_4c * 2) = uVar11 | 0x4000;
                  }
                }
              }
              uVar5 = puVar10[2];
              puVar10 = puVar10 + 2;
            } while (uVar5 != 0);
            uVar6 = (ulonglong)local_64;
          }
        }
        else {
          FUN_14002fd26(param_1,puVar8,lVar3,'\0');
        }
      }
      puVar8 = (undefined2 *)(&PTR_DAT_1400f0f48)[uVar14];
      uVar14 = uVar14 + 1;
    } while (uVar14 != 0x57);
    puVar8 = (undefined2 *)&DAT_1400f0648;
    lVar12 = 1;
    do {
      if (*(int *)(puVar8 + 8) == 10) {
        FUN_14002fd26(param_1,puVar8,lVar3,'\0');
      }
      puVar8 = (undefined2 *)(&PTR_DAT_1400f0f40)[lVar12];
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x58);
    FUN_14002fd26(param_1,(undefined2 *)(&PTR_DAT_1400f0f40)[uVar6 & 0xffff],lVar3,'\x01');
    uVar13 = local_60;
    iVar9 = 0x30;
    do {
      uVar5 = FUN_14001e059(lVar2);
      if ((uVar5 != 0) && (uVar5 < *(uint *)(param_1 + 1))) {
        pbVar1 = (byte *)(lVar3 + 1 + (ulonglong)uVar5 * 2);
        *pbVar1 = *pbVar1 | 0x80;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x3a);
  }
  if ((*(int *)(param_1[99] + 0x18) != 0x1fff) && (uVar5 = *(uint *)(param_1 + 1), uVar5 != 0)) {
    uVar6 = 0;
    do {
      uVar11 = *(ushort *)(lVar3 + uVar6 * 2);
      if ((~uVar11 & 0x1fff) == 0) {
        uVar11 = uVar11 & 0xe000;
        *(ushort *)(lVar3 + uVar6 * 2) = uVar11;
        *(ushort *)(lVar3 + uVar6 * 2) = uVar11 | *(ushort *)(param_1[99] + 0x18);
        uVar5 = *(uint *)(param_1 + 1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar5);
  }
  *(undefined8 *)(lVar2 + 0x88) = uVar13;
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

