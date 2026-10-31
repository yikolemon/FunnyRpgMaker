/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042136d */

int __cdecl FUN_0042136d(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar2 = (int)param_3 >> 0x1f;
  uVar5 = -param_3;
  uVar6 = -(uint)(param_3 != 0) - uVar2;
  if (-1 < (int)uVar2) {
    uVar5 = param_3;
    uVar6 = uVar2;
  }
  uVar2 = (int)param_1 >> 0x1f;
  if (uVar5 == 0 && uVar6 == 0) {
    iVar4 = 0x7fffffff;
  }
  else {
    uVar3 = -param_2;
    iVar4 = -(uint)(param_2 != 0) - ((int)param_2 >> 0x1f);
    if (-1 < (int)param_2) {
      uVar3 = param_2;
      iVar4 = (int)param_2 >> 0x1f;
    }
    uVar8 = -param_1;
    uVar1 = -(uint)(param_1 != 0) - uVar2;
    if (-1 < (int)param_1) {
      uVar8 = param_1;
      uVar1 = uVar2;
    }
    uVar9 = __aulldiv((uint)((ulonglong)uVar3 * (ulonglong)uVar8),
                      uVar8 * iVar4 +
                      uVar1 * uVar3 + (int)((ulonglong)uVar3 * (ulonglong)uVar8 >> 0x20),uVar5,uVar6
                     );
    iVar4 = (int)uVar9;
  }
  uVar6 = -(uVar2 | 1);
  if (-1 < (int)param_2) {
    uVar6 = uVar2 | 1;
  }
  uVar5 = -uVar6;
  if (-1 < (int)param_3) {
    uVar5 = uVar6;
  }
  iVar7 = -iVar4;
  if (-1 < (int)uVar5) {
    iVar7 = iVar4;
  }
  return iVar7;
}

