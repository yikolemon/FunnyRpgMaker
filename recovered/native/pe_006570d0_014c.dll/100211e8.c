/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100211e8 */

void FUN_100211e8(int *param_1,int *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2 - *param_1;
  iVar1 = param_4 - ((int)uVar2 >> 0x1f);
  if ((SBORROW4(param_4,(int)uVar2 >> 0x1f) != SBORROW4(iVar1,(uint)(param_3 < uVar2))) !=
      (int)(iVar1 - (uint)(param_3 < uVar2)) < 0) {
    uVar2 = param_3;
  }
  *param_1 = uVar2 + *param_1;
  return;
}

