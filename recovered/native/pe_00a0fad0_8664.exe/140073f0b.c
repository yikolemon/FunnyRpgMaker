/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140073f0b */

ulonglong * FUN_140073f0b(ulonglong *param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  bool bVar11;
  
  uVar3 = FUN_140073fc8(param_2);
  uVar6 = uVar3 & 0xfffffffffffff;
  bVar11 = uVar3 >> 0x34 == 0;
  uVar8 = uVar6 + 0x10000000000000;
  if (bVar11) {
    uVar8 = uVar6;
  }
  iVar9 = -0x432;
  if (!bVar11) {
    iVar9 = (uint)(uVar3 >> 0x34) - 0x433;
  }
  uVar7 = uVar8 * 2 + 1;
  iVar4 = iVar9 + -1;
  do {
    uVar7 = uVar7 * 2;
    iVar4 = iVar4 + -1;
    uVar10 = uVar8;
    iVar5 = iVar9;
  } while (-1 < (longlong)uVar7);
  do {
    uVar10 = uVar10 * 2;
    iVar5 = iVar5 + -1;
  } while (-1 < (longlong)uVar10);
  iVar1 = iVar9 + -1;
  lVar2 = uVar8 * 2;
  if (uVar3 >> 0x35 != 0 && uVar6 == 0) {
    iVar1 = iVar9 + -2;
    lVar2 = uVar8 << 2;
  }
  *param_1 = uVar10;
  *(int *)(param_1 + 1) = iVar5;
  param_1[2] = lVar2 + -1 << ((char)iVar1 - (char)iVar4 & 0x3fU);
  *(int *)(param_1 + 3) = iVar4;
  param_1[4] = uVar7;
  *(int *)(param_1 + 5) = iVar4;
  return param_1;
}

