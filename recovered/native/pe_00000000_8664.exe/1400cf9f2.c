/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cf9f2 */

void FUN_1400cf9f2(int *param_1)

{
  undefined8 uVar1;
  
  if (param_1[1] < 0) {
    uVar1 = FUN_140077ab4(0);
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1401c5180(uVar1,*(longlong *)(param_1 + 2),(longlong)*param_1 * 0x18);
      FUN_140077b90(*(undefined8 *)(param_1 + 2));
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    param_1[1] = 0;
  }
  *param_1 = 0;
  param_1[4] = -1;
  param_1[5] = -1;
  param_1[6] = -1;
  param_1[7] = -1;
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}

