/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101345d3 */

undefined8 FUN_101345d3(uint param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_6 + param_4 + (uint)CARRY4(param_5,param_3);
  iVar2 = (param_2 - param_4) - (uint)(param_1 < param_3);
  uVar1 = param_1 - param_3;
  if ((param_3 != 0 || param_4 != 0) &&
      (param_2 < uVar3 || param_2 - uVar3 < (uint)(param_1 < param_5 + param_3))) {
    iVar2 = param_6;
    uVar1 = param_5;
  }
  return CONCAT44(iVar2,uVar1);
}

