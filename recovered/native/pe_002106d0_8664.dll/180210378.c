/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180210378 */

void FUN_180210378(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      bVar2 = *(byte *)(param_1 + lVar1) << 4 | *(byte *)(param_1 + lVar1) >> 4;
      bVar2 = bVar2 >> 2 & 0x33 | (bVar2 & 0x33) << 2;
      *(byte *)(param_1 + lVar1) = bVar2 >> 1 & 0x55 | (bVar2 & 0x55) * '\x02';
      lVar1 = lVar1 + 1;
    } while (param_2 != lVar1);
  }
  return;
}

