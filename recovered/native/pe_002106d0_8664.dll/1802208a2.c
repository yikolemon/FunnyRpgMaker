/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802208a2 */

short FUN_1802208a2(longlong param_1,int *param_2)

{
  undefined8 uVar1;
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
LAB_1802209bd:
    iVar9 = 0;
    sVar2 = 0;
LAB_1802209c1:
    *param_2 = iVar9;
    return sVar2;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x18);
LAB_1802208d5:
  puVar3 = (ushort *)FUN_18022bb80(uVar1,uVar8);
  if (puVar3 != (ushort *)0x0) {
    uVar4 = *puVar3 << 8 | *puVar3 >> 8;
    uVar5 = puVar3[1] << 8 | puVar3[1] >> 8;
    uVar13 = uVar8 & 0xff;
    if ((uVar8 < 0x100) && (uVar11 = 0x100, (uint)uVar5 + (uint)uVar4 <= uVar13))
    goto LAB_1802209ad;
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
          goto LAB_1802209c1;
          uVar7 = uVar7 + 1;
          iVar9 = iVar9 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar7 < uVar5);
      }
      uVar8 = iVar9 + -1 + (uint)(uVar5 == 0);
      goto LAB_180220997;
    }
    if (uVar8 == 0x100) goto LAB_1802209bd;
  }
LAB_180220997:
  uVar11 = (uVar8 & 0xffffff00) + 0x100;
  if (uVar8 < 0x100) {
    uVar11 = uVar8 + 1;
  }
LAB_1802209ad:
  uVar8 = uVar11;
  if (0xffff < uVar8) goto LAB_1802209bd;
  goto LAB_1802208d5;
}

