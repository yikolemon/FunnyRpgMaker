/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140030cda */

void FUN_140030cda(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_48 [40];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140030a1c(local_48,*(undefined8 *)(param_2 + 0x58),param_1 + 8);
  FUN_140019fc2(param_4,*(longlong *)(param_2 + 0x50),
                *(longlong *)(param_2 + 0x58) + *(longlong *)(param_2 + 0x50));
  FUN_140030a90(local_48);
  return;
}

