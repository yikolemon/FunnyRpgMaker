/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dcb95f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140dcb95f(void)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = (byte)_DAT_1412da22a & 0x1f;
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) ^ _DAT_1412da236;
  return uVar1 >> bVar2 | uVar1 << 0x20 - bVar2;
}

