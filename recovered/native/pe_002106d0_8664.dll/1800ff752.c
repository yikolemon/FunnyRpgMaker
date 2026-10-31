/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ff752 */

undefined8 FUN_1800ff752(int *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)((longlong)*param_1 * 0x10 + *(longlong *)(param_1 + 2));
  piVar1 = (int *)FUN_1800ff6b0(*(longlong *)(param_1 + 2),piVar3,param_2);
  if ((piVar1 == piVar3) || (*piVar1 != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(piVar1 + 2);
  }
  return uVar2;
}

