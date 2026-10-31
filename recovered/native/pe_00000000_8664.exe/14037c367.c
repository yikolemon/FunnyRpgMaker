/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14037c367 */

void FUN_14037c367(longlong param_1,longlong param_2)

{
  byte bVar1;
  
  if ((*(short *)(param_2 + 0x5e) != -1) &&
     (bVar1 = *(byte *)(param_2 + 0x71), ((bVar1 >> 4) >> (bVar1 & 3) & 1) == 0)) {
    *(byte *)(param_2 + 0x71) = bVar1 & 0xfc | *(byte *)(param_2 + 0x72) & 3;
    *(undefined1 *)(param_1 + 0x23c) = 1;
    return;
  }
  return;
}

