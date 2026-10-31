/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180213fd4 */

void FUN_180213fd4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_180213bc1();
  if ((code *)param_1[0xe7] != (code *)0x0) {
    (*(code *)param_1[0xe7])(param_1[0xe6]);
    FUN_1801c9b65(uVar1,param_1[0xe6]);
    param_1[0xe6] = 0;
  }
  return;
}

