/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a826e */

void FUN_1400a826e(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1[1] < param_2) {
    uVar1 = FUN_140077ab4((longlong)param_2);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1401c5180(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1);
      FUN_140077b90(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    param_1[1] = param_2;
  }
  return;
}

