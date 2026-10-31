/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00467b2d */

int __fastcall FUN_00467b2d(uint *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *param_1 + 1;
  if (param_1[1] < uVar3) {
    iVar1 = FUN_00467c05((int)param_1,uVar3,param_2);
    if (iVar1 != 0) {
      iVar2 = 0;
      goto LAB_00467b65;
    }
  }
  iVar2 = param_1[2] + uVar3 * 0xc + -0xc;
  *param_1 = uVar3;
  iVar1 = 0;
LAB_00467b65:
  *param_3 = iVar2;
  return iVar1;
}

