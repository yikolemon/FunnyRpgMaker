/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fc18d */

byte FUN_1800fc18d(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x40 + lVar2);
    if (param_2 == (bVar1 & 7)) {
      return bVar1 >> 3;
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  return 0;
}

