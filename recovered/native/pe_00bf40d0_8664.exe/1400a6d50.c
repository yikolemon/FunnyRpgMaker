/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a6d50 */

void FUN_1400a6d50(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_1400a1290((LPVOID)*param_1);
  }
  return;
}

