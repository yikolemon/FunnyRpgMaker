/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10091822 */

void FUN_10091822(int *param_1,int *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *param_2 - *param_1;
  uVar3 = iVar4 >> 1;
  iVar4 = iVar4 >> 0x1f;
  uVar1 = (uint)(param_3 < uVar3);
  iVar2 = param_4 - iVar4;
  if ((SBORROW4(param_4,iVar4) != SBORROW4(iVar2,uVar1)) != (int)(iVar2 - uVar1) < 0) {
    uVar3 = param_3;
  }
  *param_1 = *param_1 + uVar3 * 2;
  return;
}

