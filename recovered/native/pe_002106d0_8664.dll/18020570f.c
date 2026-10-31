/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020570f */

int FUN_18020570f(longlong *param_1)

{
  ushort *puVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int *local_50;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_3c = 0;
  iVar11 = 0;
  if (((int)param_1[2] != 0) && (param_1[4] == 0)) {
    lVar5 = *param_1;
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    bVar3 = *(byte *)((longlong)param_1 + 0x14);
    iVar11 = (int)param_1[2] + 1;
    local_50 = &local_3c;
    local_58 = 0;
    lVar7 = FUN_1801cc8d6(uVar6,4,0,iVar11);
    param_1[4] = lVar7;
    if ((local_3c == 0) &&
       (local_3c = FUN_1801ce63e(lVar5,*(int *)((longlong)param_1 + 0xc) + (int)param_1[1]),
       local_3c == 0)) {
      uVar12 = iVar11 * (uint)bVar3;
      local_3c = FUN_1801cec60(lVar5,uVar12);
      if (local_3c == 0) {
        puVar8 = (uint *)param_1[4];
        puVar9 = *(uint **)(lVar5 + 0x38);
        puVar10 = (uint *)((ulonglong)uVar12 + (longlong)puVar9);
        if (bVar3 == 1) {
          if (uVar12 != 0) {
            do {
              *puVar8 = (uint)(byte)*puVar9;
              puVar9 = (uint *)((longlong)puVar9 + 1);
              puVar8 = puVar8 + 1;
            } while (puVar9 < puVar10);
          }
        }
        else if (bVar3 == 2) {
          if (uVar12 != 0) {
            lVar7 = 0;
            do {
              puVar1 = (ushort *)((longlong)puVar9 + lVar7);
              uVar4 = *puVar1;
              *(uint *)((longlong)puVar8 + lVar7 * 2) = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
              lVar7 = lVar7 + 2;
            } while (puVar1 + 1 < puVar10);
          }
        }
        else if (bVar3 == 3) {
          if (uVar12 != 0) {
            do {
              *puVar8 = (uint)*(byte *)((longlong)puVar9 + 2) |
                        (uint)*(byte *)((longlong)puVar9 + 1) << 8 | (uint)(byte)*puVar9 << 0x10;
              puVar9 = (uint *)((longlong)puVar9 + 3);
              puVar8 = puVar8 + 1;
            } while (puVar9 < puVar10);
          }
        }
        else if (uVar12 != 0) {
          lVar7 = 0;
          do {
            puVar2 = (uint *)((longlong)puVar9 + lVar7);
            uVar12 = *puVar2;
            *(uint *)((longlong)puVar8 + lVar7) =
                 uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18
            ;
            lVar7 = lVar7 + 4;
          } while (puVar2 + 1 < puVar10);
        }
        FUN_1801ced84(lVar5);
        if (local_3c == 0) {
          iVar11 = 0;
          goto LAB_1802058a7;
        }
      }
    }
    FUN_1801c9b65(uVar6,param_1[4]);
    param_1[4] = 0;
    iVar11 = local_3c;
  }
LAB_1802058a7:
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
  }
  return iVar11;
}

