/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bbd8 */

void Unwind_14003bbd8(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x228) & 1;
  *(byte *)(param_2 + 0x24e) = bVar1;
  *(byte *)(param_2 + 0x24d) = bVar1;
  return;
}

