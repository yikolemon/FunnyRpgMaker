/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b79f */

void Unwind_14003b79f(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  *(byte *)(param_2 + 0x255) = *(byte *)(param_2 + 0x23d) & 1;
  *(byte *)(param_2 + 0x254) = *(byte *)(param_2 + 0x23c) & 1;
  bVar1 = *(byte *)(param_2 + 0x23b) & 1;
  *(byte *)(param_2 + 0x253) = bVar1;
  *(byte *)(param_2 + 0x252) = bVar1;
  return;
}

