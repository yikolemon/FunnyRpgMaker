/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c8506 */

void FUN_1400c8506(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[6] = 1;
  if ((int)param_1[9] < 0) {
    uVar1 = FUN_140077ab4(0);
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1401c5180(uVar1,*(longlong *)(param_1 + 10),(longlong)(int)param_1[8] << 4);
      FUN_140077b90(*(undefined8 *)(param_1 + 10));
    }
    *(undefined8 *)(param_1 + 10) = uVar1;
    param_1[9] = 0;
  }
  param_1[8] = 0;
  return;
}

