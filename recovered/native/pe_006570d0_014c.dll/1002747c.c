/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002747c */

void FUN_1002747c(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_1;
  uVar3 = ((uint)param_1[2] >> 1) + param_1[2];
  if (uVar3 < param_2) {
    uVar3 = param_2;
  }
  iVar2 = FUN_10019150(uVar3);
  FUN_1025b2d0(iVar2,piVar1,param_1[1]);
  *param_1 = iVar2;
  param_1[2] = uVar3;
  if (piVar1 != param_1 + 4) {
    thunk_FUN_10274120(piVar1);
  }
  return;
}

