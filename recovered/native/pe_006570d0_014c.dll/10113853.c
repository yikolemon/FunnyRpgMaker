/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10113853 */

short * FUN_10113853(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  uint uVar9;
  
  iVar1 = DAT_1039d74c;
  uVar9 = param_1 & 0xf000;
  uVar3 = param_1 & 0xffff0fff;
  if (((param_1 & 0xffff0fff) == 0) && (uVar3 = uVar9, uVar9 - 1 < (uVar9 ^ uVar9 - 1))) {
    uVar2 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar3 = uVar2 + 0x28b;
    if ((uVar2 & 0x1c) != 0xc) {
      uVar3 = uVar9;
    }
  }
  psVar8 = (short *)(DAT_1039d74c + uVar3 * 2 + 0x18e0);
  psVar4 = psVar8;
  do {
    if (*psVar4 == -1) {
      iVar7 = *(int *)(DAT_1039d74c + 0x1e18);
      if (iVar7 == *(int *)(DAT_1039d74c + 0x1e1c)) {
        if (iVar7 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar7 / 2 + iVar7;
        }
        iVar6 = iVar7 + 1;
        if (iVar7 + 1 < iVar5) {
          iVar6 = iVar5;
        }
        iVar5 = FUN_100fa1fa(iVar6 << 4);
        if (*(int *)(iVar1 + 0x1e20) != 0) {
          FUN_1025b2d0(iVar5,*(int *)(iVar1 + 0x1e20),*(int *)(iVar1 + 0x1e18) << 4);
          FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x1e20));
        }
        *(int *)(iVar1 + 0x1e20) = iVar5;
        *(int *)(iVar1 + 0x1e1c) = iVar6;
        iVar6 = *(int *)(iVar1 + 0x1e18);
      }
      else {
        iVar5 = *(int *)(DAT_1039d74c + 0x1e20);
        iVar6 = iVar7;
      }
      iVar6 = iVar6 * 0x10;
      *(undefined8 *)(iVar5 + iVar6) = DAT_102b8da0;
      *(undefined4 *)(iVar5 + 8 + iVar6) = 0xffffffff;
      *(undefined4 *)(iVar5 + 0xc + iVar6) = 0xffffffff;
      *(int *)(iVar1 + 0x1e18) = *(int *)(iVar1 + 0x1e18) + 1;
      iVar1 = *(int *)(iVar1 + 0x1e20);
      iVar5 = (short)iVar7 * 0x10;
      *(short *)(iVar1 + 2 + iVar5) = (short)uVar9;
      *(short *)(iVar1 + iVar5) = *psVar8;
      *psVar8 = (short)iVar7;
      return (short *)(iVar1 + iVar5);
    }
    iVar7 = *psVar4 * 0x10;
    psVar4 = (short *)(*(int *)(DAT_1039d74c + 0x1e20) + iVar7);
  } while (uVar9 != *(ushort *)(*(int *)(DAT_1039d74c + 0x1e20) + 2 + iVar7));
  return psVar4;
}

