/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf7b8 */

undefined4 FUN_1801cf7b8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (param_1 != (uint *)0x0) {
    uVar8 = *param_1;
    uVar3 = param_1[1];
    uVar7 = param_1[2];
    uVar1 = -uVar8;
    if ((int)-uVar8 < 0) {
      uVar1 = uVar8;
    }
    uVar2 = -uVar3;
    if ((int)-uVar3 < 0) {
      uVar2 = uVar3;
    }
    uVar9 = param_1[3];
    uVar10 = -uVar7;
    if ((int)-uVar7 < 0) {
      uVar10 = uVar7;
    }
    uVar5 = -uVar9;
    if ((int)-uVar9 < 0) {
      uVar5 = uVar9;
    }
    uVar5 = uVar5 | uVar10 | uVar2 | uVar1;
    if (uVar5 != 0) {
      if (0x1fff < uVar5) {
        iVar12 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar12 == 0; iVar12 = iVar12 + -1) {
          }
        }
        bVar4 = 0x13 - ((byte)iVar12 ^ 0x1f);
        uVar8 = (int)uVar8 >> (bVar4 & 0x1f);
        uVar3 = (int)uVar3 >> (bVar4 & 0x1f);
        uVar7 = (int)uVar7 >> (bVar4 & 0x1f);
        uVar9 = (int)uVar9 >> (bVar4 & 0x1f);
      }
      iVar6 = uVar8 * uVar9;
      iVar11 = uVar3 * uVar7;
      iVar12 = iVar11 - iVar6;
      if (iVar11 < iVar6) {
        iVar12 = iVar6 - iVar11;
      }
      iVar6 = uVar3 * uVar3 + uVar8 * uVar8;
      return CONCAT31((int3)((uint)iVar6 >> 8),
                      uVar9 * uVar9 + uVar7 * uVar7 + iVar6 < (uint)(iVar12 << 5));
    }
  }
  return 0;
}

