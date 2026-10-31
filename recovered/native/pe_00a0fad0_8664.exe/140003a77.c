/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140003a77 */

void Unwind_140003a77(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x8a6) & 1;
  *(byte *)(param_2 + 0x8b4) = bVar1;
  *(byte *)(param_2 + 0x8b3) = bVar1;
  return;
}

