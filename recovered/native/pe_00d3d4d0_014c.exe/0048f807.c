/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0048f807 */

undefined4 __cdecl FUN_0048f807(uint param_1,int param_2,uint param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = param_1 - param_3;
  uVar6 = (param_2 - param_4) - (uint)(param_1 < param_3);
  uVar1 = 0;
  iVar2 = 1;
  if ((0 < param_2) || (iVar5 = iVar2, -1 < param_2)) {
    iVar5 = 0;
  }
  if ((0 < param_4) || (iVar3 = iVar2, -1 < param_4)) {
    iVar3 = 0;
  }
  if (iVar5 != iVar3) {
    if ((0 < param_2) || (iVar5 = iVar2, -1 < param_2)) {
      iVar5 = 0;
    }
    if ((uVar6 < 0x7fffffff) || (uVar6 < 0x80000000)) {
      iVar2 = 0;
    }
    if (iVar5 != iVar2) {
      uVar1 = 0x80070216;
      uVar6 = 0xffffffff;
      iVar4 = -1;
    }
  }
  *param_5 = iVar4;
  param_5[1] = uVar6;
  return uVar1;
}

