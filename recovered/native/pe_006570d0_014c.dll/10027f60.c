/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10027f60 */

void FUN_10027f60(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = ((uint)param_1[2] >> 1) + param_1[2];
  uVar4 = param_2;
  if (((param_2 <= uVar3) && (uVar4 = uVar3, 0x3fffffff < uVar3)) &&
     (uVar4 = 0x3fffffff, 0x3fffffff < param_2)) {
    uVar4 = param_2;
  }
  piVar1 = (int *)*param_1;
  iVar2 = FUN_10027fce(uVar4);
  FUN_1025b2d0(iVar2,piVar1,param_1[1] << 2);
  *param_1 = iVar2;
  param_1[2] = uVar4;
  if (piVar1 != param_1 + 4) {
    thunk_FUN_10274120(piVar1);
  }
  return;
}

