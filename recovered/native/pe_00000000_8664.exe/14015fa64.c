/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015fa64 */

void FUN_14015fa64(longlong param_1,longlong param_2)

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

