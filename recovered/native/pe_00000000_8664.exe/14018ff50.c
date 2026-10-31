/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14018ff50 */

void FUN_14018ff50(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1401aae30();
  *(undefined8 *)(lVar1 + 0x68) = param_1;
  return;
}

