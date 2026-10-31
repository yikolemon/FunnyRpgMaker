/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140329b16 */

short * FUN_140329b16(uint param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  short *psVar10;
  
  lVar2 = DAT_14062a630;
  uVar9 = param_1 & 0xf000;
  uVar6 = param_1 & 0xffff0fff;
  if (((param_1 & 0xffff0fff) == 0) && (uVar6 = uVar9, uVar9 - 1 < (uVar9 ^ uVar9 - 1))) {
    uVar3 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    uVar6 = uVar3 + 0x28b;
    if ((uVar3 & 0x1c) != 0xc) {
      uVar6 = uVar9;
    }
  }
  psVar10 = (short *)(DAT_14062a630 + (longlong)(int)uVar6 * 2 + 0x1a38);
  psVar5 = psVar10;
  do {
    if ((longlong)*psVar5 == -1) {
      iVar1 = *(int *)(DAT_14062a630 + 0x1f70);
      if (iVar1 == *(int *)(DAT_14062a630 + 0x1f74)) {
        if (iVar1 == 0) {
          iVar4 = 8;
        }
        else {
          iVar4 = iVar1 / 2 + iVar1;
        }
        iVar8 = iVar1 + 1;
        if (iVar1 + 1 < iVar4) {
          iVar8 = iVar4;
        }
        lVar7 = FUN_14030fcc8((longlong)iVar8 << 4);
        if (*(longlong *)(lVar2 + 0x1f78) != 0) {
          FUN_1404b97c0(lVar7,*(longlong *)(lVar2 + 0x1f78),(longlong)*(int *)(lVar2 + 0x1f70) << 4)
          ;
          FUN_14030fda4(*(undefined8 *)(lVar2 + 0x1f78));
        }
        *(longlong *)(lVar2 + 0x1f78) = lVar7;
        *(int *)(lVar2 + 0x1f74) = iVar8;
        iVar4 = *(int *)(lVar2 + 0x1f70);
      }
      else {
        lVar7 = *(longlong *)(DAT_14062a630 + 0x1f78);
        iVar4 = iVar1;
      }
      *(undefined8 *)(lVar7 + (longlong)iVar4 * 0x10) = 0xffff;
      *(undefined8 *)(lVar7 + 8 + (longlong)iVar4 * 0x10) = 0xffffffffffffffff;
      *(int *)(lVar2 + 0x1f70) = *(int *)(lVar2 + 0x1f70) + 1;
      lVar2 = *(longlong *)(lVar2 + 0x1f78);
      lVar7 = (longlong)(short)iVar1 * 0x10;
      *(short *)(lVar2 + 2 + lVar7) = (short)uVar9;
      *(short *)(lVar2 + lVar7) = *psVar10;
      *psVar10 = (short)iVar1;
      return (short *)(lVar2 + lVar7);
    }
    lVar7 = (longlong)*psVar5 * 0x10;
    psVar5 = (short *)(*(longlong *)(DAT_14062a630 + 0x1f78) + lVar7);
  } while (uVar9 != *(ushort *)(*(longlong *)(DAT_14062a630 + 0x1f78) + 2 + lVar7));
  return psVar5;
}

