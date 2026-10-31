/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180221379 */

int FUN_180221379(longlong *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  
  if (*param_2 == -1) {
    iVar7 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1[3] + 0x200c);
    uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 | uVar12 << 0x18;
    iVar7 = 0;
    if (uVar12 == 0) {
      iVar9 = 0;
    }
    else {
      pbVar11 = (byte *)(param_1[3] + 0x2010);
      uVar16 = *param_2 + 1;
      do {
        uVar2 = (uint)*pbVar11;
        uVar3 = (uint)pbVar11[1];
        uVar4 = (uint)pbVar11[2];
        bVar1 = pbVar11[3];
        uVar6 = uVar3 * 0x10000 + uVar2 * 0x1000000 | uVar4 * 0x100 | (uint)bVar1;
        uVar8 = (uint)pbVar11[5] * 0x10000 + (uint)pbVar11[4] * 0x1000000 | (uint)pbVar11[6] << 8 |
                (uint)pbVar11[7];
        uVar5 = uVar6;
        if (uVar6 < uVar16) {
          uVar5 = uVar16;
        }
        uVar14 = uVar5;
        if (uVar5 <= uVar8) {
          iVar13 = (uint)pbVar11[8] * 0x1000000;
          iVar17 = (uint)pbVar11[9] * 0x10000;
          uVar10 = (uint)pbVar11[10] * 0x100;
          uVar19 = (uint)pbVar11[0xb];
          uVar18 = ~uVar5 + uVar4 * 0x100 + (uint)bVar1 + uVar2 * 0x1000000 + uVar3 * 0x10000;
          iVar7 = 0;
          do {
            uVar14 = uVar5 + iVar7;
            if (uVar18 < (iVar17 + iVar13 | uVar10 | uVar19)) break;
            if (((iVar17 + uVar10 + uVar19 + uVar5 + iVar13) - (uint)bVar1) + uVar4 * -0x100 +
                uVar3 * -0x10000 + uVar2 * -0x1000000 + iVar7 != 0) {
              if (((uVar5 + iVar13 + iVar17 + uVar10 + uVar19) - (uint)bVar1) + uVar4 * -0x100 +
                  uVar3 * -0x10000 + uVar2 * -0x1000000 + iVar7 < *(uint *)(*param_1 + 0x10)) {
                if (uVar6 < uVar16) {
                  uVar6 = uVar16;
                }
                iVar9 = uVar6 + iVar7;
                iVar7 = ((iVar13 + iVar17 + uVar10 + uVar19 + uVar6) - (uint)bVar1) + uVar4 * -0x100
                        + uVar3 * -0x10000 + uVar2 * -0x1000000 + iVar7;
                goto LAB_1802215b1;
              }
              break;
            }
            if (uVar14 == 0xffffffff) {
              iVar7 = 0;
              iVar9 = 0;
              goto LAB_1802215b1;
            }
            uVar15 = iVar7 + uVar5;
            uVar18 = uVar18 - 1;
            uVar14 = ((uint)pbVar11[4] * 0x1000000 | (uint)pbVar11[5] * 0x10000 |
                     (uint)pbVar11[6] << 8) + (uint)pbVar11[7] + 1;
            iVar7 = iVar7 + 1;
          } while (uVar15 < uVar8);
        }
        uVar16 = uVar14;
        pbVar11 = pbVar11 + 0xc;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
      iVar9 = 0;
      iVar7 = 0;
    }
LAB_1802215b1:
    *param_2 = iVar9;
  }
  return iVar7;
}

