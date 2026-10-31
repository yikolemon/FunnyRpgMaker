/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041eaa0 */

int __cdecl FUN_0041eaa0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  uVar5 = (int)param_2 >> 0x1f;
  uVar2 = -param_2;
  uVar1 = -(uint)(param_2 != 0) - uVar5;
  if (-1 < (int)uVar5) {
    uVar2 = param_2;
    uVar1 = uVar5;
  }
  if (uVar2 == 0 && uVar1 == 0) {
    iVar3 = 0x7fffffff;
  }
  else {
    iVar3 = -(uint)(param_1 != 0) - ((int)param_1 >> 0x1f);
    uVar5 = -param_1;
    if (-1 < (int)param_1) {
      iVar3 = (int)param_1 >> 0x1f;
      uVar5 = param_1;
    }
    uVar6 = uVar1 << 0x1f | uVar2 >> 1;
    uVar7 = __aulldiv(uVar6 + uVar5 * 0x10000,
                      (uVar1 >> 1) + (iVar3 << 0x10 | uVar5 >> 0x10) +
                      (uint)CARRY4(uVar6,uVar5 * 0x10000),uVar2,uVar1);
    iVar3 = (int)uVar7;
  }
  iVar4 = -iVar3;
  if ((int)param_1 < 0 == (int)param_2 < 0) {
    iVar4 = iVar3;
  }
  return iVar4;
}

