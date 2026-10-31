/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10134a4d */

undefined4 __fastcall FUN_10134a4d(uint *param_1,uint *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 == (uint *)0x0) {
LAB_10134a60:
    if (param_3 != (uint *)0x0) {
      uVar2 = *param_3;
      uVar4 = param_3[1];
      iVar1 = uVar4 - param_1[1];
      if ((SBORROW4(uVar4,param_1[1]) != SBORROW4(iVar1,(uint)(uVar2 < *param_1))) !=
          (int)(iVar1 - (uint)(uVar2 < *param_1)) < 0) goto LAB_10134a76;
    }
    uVar3 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar4 = param_2[1];
    iVar1 = param_1[1] - uVar4;
    if ((SBORROW4(param_1[1],uVar4) != SBORROW4(iVar1,(uint)(*param_1 < uVar2))) ==
        (int)(iVar1 - (uint)(*param_1 < uVar2)) < 0) goto LAB_10134a60;
LAB_10134a76:
    *param_1 = uVar2;
    param_1[1] = uVar4;
    uVar3 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  return uVar3;
}

