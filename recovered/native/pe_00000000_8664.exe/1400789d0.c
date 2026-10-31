/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400789d0 */

int FUN_1400789d0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)((longlong)*param_1 * 0x10 + *(longlong *)(param_1 + 2));
  piVar1 = (int *)FUN_14007896c(*(longlong *)(param_1 + 2),piVar2,param_2);
  if ((piVar1 != piVar2) && (*piVar1 == param_2)) {
    param_3 = piVar1[2];
  }
  return param_3;
}

