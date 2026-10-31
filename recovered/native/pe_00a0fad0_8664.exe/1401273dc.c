/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1401273dc */

void FUN_1401273dc(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_1401212e0(*param_1);
  }
  return;
}

