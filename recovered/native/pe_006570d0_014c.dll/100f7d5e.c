/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7d5e */

byte __fastcall FUN_100f7d5e(int param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x38 + iVar2);
    if (param_2 == (bVar1 & 7)) {
      return bVar1 >> 3;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  return 0;
}

