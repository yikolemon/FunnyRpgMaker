/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041dcda */

int __cdecl FUN_0041dcda(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  
  uVar2 = (int)param_3 >> 0x1f;
  uVar6 = -param_3;
  uVar7 = -(uint)(param_3 != 0) - uVar2;
  if (-1 < (int)uVar2) {
    uVar6 = param_3;
    uVar7 = uVar2;
  }
  uVar2 = (int)param_1 >> 0x1f;
  if (uVar6 == 0 && uVar7 == 0) {
    iVar5 = 0x7fffffff;
  }
  else {
    uVar3 = -param_2;
    iVar5 = -(uint)(param_2 != 0) - ((int)param_2 >> 0x1f);
    if (-1 < (int)param_2) {
      uVar3 = param_2;
      iVar5 = (int)param_2 >> 0x1f;
    }
    uVar10 = -param_1;
    uVar1 = -(uint)(param_1 != 0) - uVar2;
    if (-1 < (int)param_1) {
      uVar10 = param_1;
      uVar1 = uVar2;
    }
    uVar4 = (uint)((ulonglong)uVar3 * (ulonglong)uVar10);
    uVar9 = uVar7 << 0x1f | uVar6 >> 1;
    uVar11 = __aulldiv(uVar9 + uVar4,
                       (uVar7 >> 1) +
                       uVar10 * iVar5 +
                       uVar1 * uVar3 + (int)((ulonglong)uVar3 * (ulonglong)uVar10 >> 0x20) +
                       (uint)CARRY4(uVar9,uVar4),uVar6,uVar7);
    iVar5 = (int)uVar11;
  }
  uVar7 = -(uVar2 | 1);
  if (-1 < (int)param_2) {
    uVar7 = uVar2 | 1;
  }
  uVar6 = -uVar7;
  if (-1 < (int)param_3) {
    uVar6 = uVar7;
  }
  iVar8 = -iVar5;
  if (-1 < (int)uVar6) {
    iVar8 = iVar5;
  }
  return iVar8;
}

