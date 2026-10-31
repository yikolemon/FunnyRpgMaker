/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400803d9 */

void FUN_1400803d9(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = -*(uint *)((longlong)param_2 + 4);
  if ((int)uVar1 < 0) {
    uVar1 = *(uint *)((longlong)param_2 + 4);
  }
  uVar2 = -*(uint *)((longlong)param_3 + 4);
  if ((int)uVar2 < 0) {
    uVar2 = *(uint *)((longlong)param_3 + 4);
  }
  if (uVar2 < uVar1) {
    param_3 = param_2;
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 1);
  *param_1 = *param_3;
  return;
}

