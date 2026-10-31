/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10165a77 */

void FUN_10165a77(int param_1,int param_2)

{
  byte bVar1;
  
  if ((*(short *)(param_2 + 0x5e) != -1) &&
     (bVar1 = *(byte *)(param_2 + 0x71), ((bVar1 >> 4) >> (bVar1 & 3) & 1) == 0)) {
    *(byte *)(param_2 + 0x71) = bVar1 & 0xfc | *(byte *)(param_2 + 0x72) & 3;
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
  return;
}

