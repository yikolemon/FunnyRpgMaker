/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101344b6 */

undefined8
FUN_101344b6(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7
            ,int param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (param_6 - param_4) - (uint)(param_5 < param_3);
  if ((-1 < param_4) ||
     (uVar1 = (uint)(param_1 < param_5 - param_3), iVar3 = param_2 - iVar2,
     (SBORROW4(param_2,iVar2) != SBORROW4(iVar3,uVar1)) == (int)(iVar3 - uVar1) < 0)) {
    iVar3 = (param_8 - param_4) - (uint)(param_7 < param_3);
    uVar1 = (uint)(param_7 - param_3 < param_1);
    iVar2 = iVar3 - param_2;
    param_5 = param_3 + param_1;
    param_6 = param_4 + param_2 + (uint)CARRY4(param_3,param_1);
    if ((SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(param_3 != 0))) !=
        (int)(-param_4 - (uint)(param_3 != 0)) < 0 &&
        (SBORROW4(iVar3,param_2) != SBORROW4(iVar2,uVar1)) != (int)(iVar2 - uVar1) < 0) {
      param_5 = param_7;
      param_6 = param_8;
    }
  }
  return CONCAT44(param_6,param_5);
}

