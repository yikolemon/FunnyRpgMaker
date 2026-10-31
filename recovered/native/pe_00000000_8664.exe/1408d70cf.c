/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d70cf */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1408d70cf(ulonglong param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  
  uVar8 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar2 = *(uint *)(uVar8 + 8);
  puVar9 = (undefined4 *)(ulonglong)uVar2;
  puVar11 = (undefined4 *)(ulonglong)uVar2;
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  uVar10 = *(uint *)(uVar8 + 0xc);
  uVar5 = *(int *)(uVar8 + 0x10) + uVar10;
  *(uint *)(uVar8 - 4) = uVar5;
  if (uVar10 < uVar5) {
    do {
      uVar1 = *(ushort *)(ulonglong)uVar10;
      uVar7 = (ulonglong)uVar1;
      uVar3 = FUN_1408defc6(param_1);
      if (uVar3 != uVar1) {
LAB_1408d7128:
        uVar6 = (*_DAT_150c350be)();
        *puVar9 = uVar6;
        return uVar2;
      }
      puVar9[1] = puVar9[1] + 2;
      if (uVar1 == 10) {
        sVar4 = FUN_1408defc6(10);
        uVar7 = 0xd;
        if (sVar4 != 0xd) goto LAB_1408d7128;
        puVar9[1] = puVar9[1] + 1;
        puVar9[2] = puVar9[2] + 1;
      }
      uVar10 = uVar10 + 2;
      param_1 = uVar7;
    } while (uVar10 < *(uint *)(uVar8 - 4));
  }
  return uVar2;
}

