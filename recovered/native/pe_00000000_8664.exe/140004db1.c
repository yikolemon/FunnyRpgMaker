/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140004db1 */

void FUN_140004db1(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
  }
  FUN_140007f6d(param_1,puVar1,param_2[2] + (longlong)puVar1);
  return;
}

