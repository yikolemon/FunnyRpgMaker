/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cf090 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408cf090(void)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = (byte)_DAT_150c57d9b & 0x1f;
  uVar3 = (_DAT_150c74512 ^ _DAT_150c57dab) >> bVar2 |
          (_DAT_150c74512 ^ _DAT_150c57dab) << 0x20 - bVar2;
  if (uVar3 == 0) {
    return 0;
  }
  (*_DAT_150c2c8d1)((code *)(ulonglong)uVar3);
  uVar1 = (*(code *)(ulonglong)uVar3)();
  return uVar1;
}

