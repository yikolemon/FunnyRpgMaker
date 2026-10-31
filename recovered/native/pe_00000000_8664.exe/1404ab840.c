/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404ab840 */

void FUN_1404ab840(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_1404a2310(*param_1);
  }
  return;
}

