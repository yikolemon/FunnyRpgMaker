/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401636c0 */

void FUN_1401636c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1401632ad();
  if ((code *)param_1[0xe7] != (code *)0x0) {
    (*(code *)param_1[0xe7])(param_1[0xe6]);
    FUN_140128b39(uVar1,param_1[0xe6]);
    param_1[0xe6] = 0;
  }
  return;
}

