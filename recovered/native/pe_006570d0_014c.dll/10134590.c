/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134590 */

undefined8
FUN_10134590(uint param_1,uint param_2,uint param_3,int param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,int param_8)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (param_8 - param_4) - (uint)(param_7 < param_3);
  iVar2 = param_4 + param_2 + (uint)CARRY4(param_3,param_1);
  uVar1 = param_3 + param_1;
  if ((param_3 != 0 || param_4 != 0) &&
      (uVar3 < param_2 || uVar3 - param_2 < (uint)(param_7 - param_3 < param_1))) {
    iVar2 = param_8;
    uVar1 = param_7;
  }
  return CONCAT44(iVar2,uVar1);
}

