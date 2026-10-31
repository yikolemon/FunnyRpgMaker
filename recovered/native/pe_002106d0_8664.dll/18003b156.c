/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18003b156 */

void FUN_18003b156(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_18003ae98(local_48,*(undefined8 *)(param_2 + 0x58),param_1 + 8);
  FUN_180018bde(param_4,*(longlong *)(param_2 + 0x50),
                *(longlong *)(param_2 + 0x58) + *(longlong *)(param_2 + 0x50));
  FUN_18003af0c(local_48);
  return;
}

