/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bbca0 */

void FUN_1800bbca0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (param_1[4] != 0) {
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if (param_1[1] != 0) {
    FUN_1800bbcde(param_1);
  }
  uVar1 = *param_1;
  *param_1 = 0;
  thunk_FUN_1802464a0(uVar1,0x10);
  return;
}

