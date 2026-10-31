/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102103ad */

int __fastcall FUN_102103ad(uint *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_1 + 1;
  if (param_1[1] < uVar3) {
    iVar1 = FUN_10210485(param_2);
    if (iVar1 != 0) {
      iVar2 = 0;
      goto LAB_102103e5;
    }
  }
  iVar2 = param_1[2] + uVar3 * 0xc + -0xc;
  *param_1 = uVar3;
  iVar1 = 0;
LAB_102103e5:
  *param_3 = iVar2;
  return iVar1;
}

