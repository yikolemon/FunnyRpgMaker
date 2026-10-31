/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18029a370 */

void FUN_18029a370(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_180290e40(*param_1);
  }
  return;
}

