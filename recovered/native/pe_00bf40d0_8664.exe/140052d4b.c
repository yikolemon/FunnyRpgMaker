/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140052d4b */

int FUN_140052d4b(undefined8 *param_1)

{
  ushort *puVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  local_3c = 0;
  iVar7 = 0;
  if ((*(int *)(param_1 + 2) != 0) && (iVar7 = 0, param_1[4] == 0)) {
    plVar5 = (longlong *)*param_1;
    lVar6 = plVar5[6];
    bVar3 = *(byte *)((longlong)param_1 + 0x14);
    uVar13 = *(int *)(param_1 + 2) + 1;
    lVar8 = FUN_14001f231(lVar6,4,0,uVar13,0,&local_3c);
    param_1[4] = lVar8;
    if (local_3c == 0) {
      uVar9 = FUN_140020a41((longlong)plVar5,
                            *(int *)((longlong)param_1 + 0xc) + *(int *)(param_1 + 1));
      local_3c = (int)uVar9;
      if (local_3c == 0) {
        uVar13 = uVar13 * bVar3;
        local_3c = FUN_140021063(plVar5,uVar13);
        if (local_3c == 0) {
          puVar10 = (uint *)param_1[4];
          puVar11 = (uint *)plVar5[7];
          puVar12 = (uint *)((ulonglong)uVar13 + (longlong)puVar11);
          if (bVar3 == 1) {
            if (uVar13 != 0) {
              do {
                *puVar10 = (uint)(byte)*puVar11;
                puVar11 = (uint *)((longlong)puVar11 + 1);
                puVar10 = puVar10 + 1;
              } while (puVar11 < puVar12);
            }
          }
          else if (bVar3 == 2) {
            if (uVar13 != 0) {
              lVar8 = 0;
              do {
                puVar1 = (ushort *)((longlong)puVar11 + lVar8);
                uVar4 = *puVar1;
                *(uint *)((longlong)puVar10 + lVar8 * 2) = (uint)(ushort)(uVar4 << 8 | uVar4 >> 8);
                lVar8 = lVar8 + 2;
              } while (puVar1 + 1 < puVar12);
            }
          }
          else if (bVar3 == 3) {
            if (uVar13 != 0) {
              do {
                *puVar10 = (uint)*(byte *)((longlong)puVar11 + 2) |
                           (uint)*(byte *)((longlong)puVar11 + 1) << 8 |
                           (uint)(byte)*puVar11 << 0x10;
                puVar11 = (uint *)((longlong)puVar11 + 3);
                puVar10 = puVar10 + 1;
              } while (puVar11 < puVar12);
            }
          }
          else if (uVar13 != 0) {
            lVar8 = 0;
            do {
              puVar2 = (uint *)((longlong)puVar11 + lVar8);
              uVar13 = *puVar2;
              *(uint *)((longlong)puVar10 + lVar8) =
                   uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                   uVar13 << 0x18;
              lVar8 = lVar8 + 4;
            } while (puVar2 + 1 < puVar12);
          }
          FUN_140021187(plVar5);
          if (local_3c == 0) {
            iVar7 = 0;
            goto LAB_140052ee3;
          }
        }
      }
    }
    FUN_14001c53d(lVar6,param_1[4]);
    param_1[4] = 0;
    iVar7 = local_3c;
  }
LAB_140052ee3:
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
  }
  return iVar7;
}

