/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fb06c */

int __thiscall FUN_100fb06c(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(param_1[2] + *param_1 * 8);
  piVar2 = (int *)FUN_100fb004(param_1[2],piVar1,param_2);
  if ((piVar2 != piVar1) && (*piVar2 == param_2)) {
    param_3 = piVar2[1];
  }
  return param_3;
}

