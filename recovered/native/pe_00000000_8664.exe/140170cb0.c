/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140170cb0 */

undefined8 FUN_140170cb0(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint local_70;
  
  pbVar10 = (byte *)(param_1 + 0x2010);
  if (*(byte **)(param_2 + 0x108) < pbVar10) {
    FUN_1401294ed(param_2,8);
  }
  uVar7 = *(uint *)(param_1 + 4);
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if ((uVar7 < 0x2010) || ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)param_1) < uVar7)) {
    FUN_1401294ed(param_2,8);
  }
  uVar7 = *(uint *)(param_1 + 0x200c);
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
  if ((uint)((int)*(undefined8 *)(param_2 + 0x108) - (int)pbVar10) / 0xc < uVar7) {
    FUN_1401294ed(param_2,8);
  }
  else if (uVar7 == 0) {
    return 0;
  }
  uVar8 = 0;
  uVar16 = 0;
  do {
    iVar9 = (uint)*pbVar10 * 0x1000000;
    iVar12 = (uint)pbVar10[1] * 0x10000;
    iVar15 = (uint)pbVar10[2] * 0x100;
    bVar1 = pbVar10[3];
    uVar14 = iVar15 + (uint)bVar1 | iVar12 + iVar9;
    uVar4 = (uint)pbVar10[4];
    uVar5 = (uint)pbVar10[5];
    uVar13 = uVar5 * 0x10000 + uVar4 * 0x1000000;
    uVar6 = (uint)pbVar10[6];
    bVar2 = pbVar10[7];
    uVar17 = uVar6 * 0x100 + (uint)bVar2 | uVar13;
    uVar3 = *(uint *)(pbVar10 + 8);
    uVar11 = uVar17 - uVar14;
    if (uVar17 < uVar14) {
      FUN_1401294ed(param_2,8);
    }
    if ((uVar8 != 0) && (uVar14 <= uVar16)) {
      FUN_1401294ed(param_2,8);
    }
    if (0 < *(int *)(param_2 + 0x110)) {
      if ((*(uint *)(param_2 + 0x120) < uVar11) ||
         (*(uint *)(param_2 + 0x120) - uVar11 <=
          (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18))) {
        FUN_1401294ed(param_2,0x10);
      }
      if (iVar12 + iVar9 == 0) {
        if (uVar13 != 0) {
          FUN_1401294ed(param_2,8);
        }
        if (uVar11 != 0xffffffff) {
          local_70 = (uint)bVar1;
          iVar15 = ~(uint)bVar2 + iVar15 + local_70 + iVar9 + iVar12 + uVar6 * -0x100 +
                   uVar5 * -0x10000 + uVar4 * -0x1000000;
          do {
            if ((char)(*(char *)(param_1 + 0xc + (ulonglong)(uVar14 >> 3 & 0x1fff)) <<
                      ((byte)uVar14 & 7)) < '\0') {
              FUN_1401294ed(param_2,8);
            }
            uVar14 = uVar14 + 1;
            iVar15 = iVar15 + 1;
          } while (iVar15 != 0);
        }
      }
      else if (uVar11 != 0xffffffff) {
        local_70 = (uint)bVar1;
        iVar15 = ~(uint)bVar2 + iVar15 + local_70 + iVar9 + iVar12 + uVar6 * -0x100 +
                 uVar5 * -0x10000 + uVar4 * -0x1000000;
        do {
          if (-1 < (char)(*(char *)(param_1 + 0xc + (ulonglong)(uVar14 >> 0x13)) <<
                         ((byte)(uVar14 >> 0x10) & 7))) {
            FUN_1401294ed(param_2,8);
          }
          if (-1 < (char)(*(char *)(param_1 + 0xc + (ulonglong)(uVar14 >> 3 & 0x1fff)) <<
                         ((byte)uVar14 & 7))) {
            FUN_1401294ed(param_2,8);
          }
          uVar14 = uVar14 + 1;
          iVar15 = iVar15 + 1;
        } while (iVar15 != 0);
      }
    }
    pbVar10 = pbVar10 + 0xc;
    uVar8 = uVar8 + 1;
    uVar16 = uVar17;
  } while (uVar8 != uVar7);
  return 0;
}

