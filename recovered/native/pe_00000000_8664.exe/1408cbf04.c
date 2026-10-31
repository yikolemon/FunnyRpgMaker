/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cbf04 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cbf04(void)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint *puVar6;
  
  puVar6 = (uint *)(ulonglong)*(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0x1c);
  uVar2 = (ulonglong)*puVar6;
  if (((*puVar6 == 0) && (uVar2 = FUN_1408b6b80(puVar6), (int)uVar2 == 0)) ||
     (uVar5 = *(uint *)(uVar2 + 0x35c), uVar5 == 0)) {
    lVar3 = FUN_1408cbf81(puVar6);
    bVar4 = (byte)_DAT_150c54c59 & 0x1f;
    uVar5 = *(uint *)(lVar3 * 4 + 0x103a50e8) ^ _DAT_150c54c6f;
    uVar5 = uVar5 >> bVar4 | uVar5 << 0x20 - bVar4;
    if (uVar5 == 0) {
      FUN_1408cbd88();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*_DAT_150c29750)((code *)(ulonglong)uVar5);
  (*(code *)(ulonglong)uVar5)();
  return;
}

