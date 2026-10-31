/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d11c8 */

void FUN_1400d11c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}

