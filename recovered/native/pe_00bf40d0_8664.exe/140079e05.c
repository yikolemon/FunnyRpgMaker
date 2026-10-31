/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140079e05 */

void FUN_140079e05(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint local_ac;
  
  uVar12 = (ulonglong)*(uint *)((longlong)param_1 + 0x34);
  if (*(uint *)((longlong)param_1 + 0x34) < *(uint *)(param_1 + 7)) {
    lVar4 = param_1[3];
    local_ac = *(int *)((longlong)param_1 + 0x2c) + 1;
    do {
      uVar15 = (ulonglong)(uint)((int)uVar12 * 0xc);
      uVar5 = (uint)*(byte *)(lVar4 + 0x10 + uVar15);
      uVar6 = (uint)*(byte *)(lVar4 + 0x11 + uVar15);
      uVar7 = (uint)*(byte *)(lVar4 + 0x12 + uVar15);
      bVar1 = *(byte *)(lVar4 + 0x13 + uVar15);
      uVar10 = uVar6 * 0x10000 + uVar5 * 0x1000000 | uVar7 * 0x100 | (uint)bVar1;
      uVar8 = (uint)*(byte *)(lVar4 + 0x14 + uVar15) * 0x1000000;
      uVar16 = (uint)*(byte *)(lVar4 + 0x15 + uVar15) * 0x10000;
      uVar23 = (uint)*(byte *)(lVar4 + 0x16 + uVar15) << 8;
      bVar2 = *(byte *)(lVar4 + 0x17 + uVar15);
      uVar18 = uVar16 + uVar8 | uVar23 | (uint)bVar2;
      uVar9 = uVar10;
      if (uVar10 < local_ac) {
        uVar9 = local_ac;
      }
      uVar19 = uVar9;
      if (uVar9 <= uVar18) {
        iVar21 = (uint)*(byte *)(lVar4 + 0x18 + uVar15) * 0x1000000;
        iVar11 = (uint)*(byte *)(lVar4 + 0x19 + uVar15) * 0x10000;
        uVar17 = (uint)*(byte *)(lVar4 + 0x1a + uVar15) * 0x100;
        bVar3 = *(byte *)(lVar4 + 0x1b + uVar15);
        uVar13 = (uint)bVar3;
        uVar22 = ~uVar9 + uVar7 * 0x100 + (uint)bVar1 + uVar5 * 0x1000000 + uVar6 * 0x10000;
        iVar14 = 0;
        do {
          uVar19 = uVar9 + iVar14;
          if (uVar22 < (iVar11 + iVar21 | uVar17 | uVar13)) break;
          if (((iVar11 + uVar17 + (uint)bVar3 + uVar9 + iVar21) - (uint)bVar1) + uVar7 * -0x100 +
              uVar6 * -0x10000 + uVar5 * -0x1000000 + iVar14 != 0) {
            if (((uVar9 + iVar21 + iVar11 + uVar17 + uVar13) - (uint)bVar1) + uVar7 * -0x100 +
                uVar6 * -0x10000 + uVar5 * -0x1000000 + iVar14 < *(uint *)(*param_1 + 0x10)) {
              uVar16 = uVar10;
              if (uVar10 < local_ac) {
                uVar16 = local_ac;
              }
              if (uVar10 < local_ac) {
                uVar10 = local_ac;
              }
              *(uint *)((longlong)param_1 + 0x2c) = uVar16 + iVar14;
              *(uint *)(param_1 + 6) =
                   ((iVar21 + iVar11 + uVar17 + uVar13 + uVar10) - (uint)bVar1) + uVar7 * -0x100 +
                   uVar6 * -0x10000 + uVar5 * -0x1000000 + iVar14;
              *(int *)((longlong)param_1 + 0x34) = (int)uVar12;
              return;
            }
            break;
          }
          if (uVar19 == 0xffffffff) goto LAB_14007a055;
          uVar20 = iVar14 + uVar9;
          uVar22 = uVar22 - 1;
          uVar19 = (uint)bVar2 + (uVar8 | uVar16 | uVar23) + 1;
          iVar14 = iVar14 + 1;
        } while (uVar20 < uVar18);
      }
      uVar12 = uVar12 + 1;
      local_ac = uVar19;
    } while (uVar12 != *(uint *)(param_1 + 7));
  }
LAB_14007a055:
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

