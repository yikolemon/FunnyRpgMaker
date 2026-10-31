/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006dee2 */

short FUN_14006dee2(longlong param_1,int *param_2)

{
  longlong lVar1;
  short sVar2;
  ushort *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  
  uVar8 = *param_2 + 1;
  if (0xffff < uVar8) {
LAB_14006dffd:
    iVar9 = 0;
    sVar2 = 0;
LAB_14006e001:
    *param_2 = iVar9;
    return sVar2;
  }
  lVar1 = *(longlong *)(param_1 + 0x18);
LAB_14006df15:
  puVar3 = (ushort *)FUN_1400791c0(lVar1,uVar8);
  if (puVar3 != (ushort *)0x0) {
    uVar4 = *puVar3 << 8 | *puVar3 >> 8;
    uVar5 = puVar3[1] << 8 | puVar3[1] >> 8;
    uVar13 = uVar8 & 0xff;
    if ((uVar8 < 0x100) && (uVar11 = 0x100, (uint)uVar5 + (uint)uVar4 <= uVar13))
    goto LAB_14006dfed;
    uVar6 = puVar3[3] << 8 | puVar3[3] >> 8;
    if (uVar6 != 0) {
      uVar10 = (uint)uVar4;
      uVar7 = uVar13 - uVar10;
      uVar11 = (uint)uVar4;
      if (uVar13 >= uVar10 && uVar7 != 0) {
        uVar11 = uVar13;
      }
      if (uVar13 < uVar10) {
        uVar7 = 0;
      }
      iVar9 = (uVar8 & 0xff00) + uVar11;
      if (uVar7 < uVar5) {
        puVar12 = (ushort *)((longlong)puVar3 + (ulonglong)((uint)uVar6 + uVar7 * 2) + 6);
        do {
          uVar4 = *puVar12 << 8 | *puVar12 >> 8;
          if ((uVar4 != 0) && (sVar2 = uVar4 + (puVar3[2] << 8 | puVar3[2] >> 8), sVar2 != 0))
          goto LAB_14006e001;
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar7 < uVar5);
      }
      uVar8 = iVar9 + -1 + (uint)(uVar5 == 0);
      goto LAB_14006dfd7;
    }
    if (uVar8 == 0x100) goto LAB_14006dffd;
  }
LAB_14006dfd7:
  uVar11 = (uVar8 & 0xffffff00) + 0x100;
  if (uVar8 < 0x100) {
    uVar11 = uVar8 + 1;
  }
LAB_14006dfed:
  uVar8 = uVar11;
  if (0xffff < uVar8) goto LAB_14006dffd;
  goto LAB_14006df15;
}

