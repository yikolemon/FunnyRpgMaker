/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140078a0e */

undefined8 FUN_140078a0e(int *param_1,int param_2)

{
  int *piVar1;
  undefined8 uVar2;
  int *piVar3;
  
  piVar3 = (int *)((longlong)*param_1 * 0x10 + *(longlong *)(param_1 + 2));
  piVar1 = (int *)FUN_14007896c(*(longlong *)(param_1 + 2),piVar3,param_2);
  if ((piVar1 == piVar3) || (*piVar1 != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(piVar1 + 2);
  }
  return uVar2;
}

