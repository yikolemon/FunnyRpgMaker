/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b9eb */

void Unwind_14003b9eb(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  *(byte *)(param_2 + 0x251) = *(byte *)(param_2 + 0x231) & 1;
  bVar1 = *(byte *)(param_2 + 0x230) & 1;
  *(byte *)(param_2 + 0x250) = bVar1;
  *(byte *)(param_2 + 0x24f) = bVar1;
  return;
}

