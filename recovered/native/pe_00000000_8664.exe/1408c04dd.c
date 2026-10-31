/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c04dd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1408c04dd(void)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = (byte)_DAT_150c491e8 & 0x1f;
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) ^ _DAT_150c491f4;
  return uVar1 >> bVar2 | uVar1 << 0x20 - bVar2;
}

