/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cf1b2 */

void FUN_1408cf1b2(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  if (*(char *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8) != '\0') {
    uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
    puVar2 = (undefined4 *)(ulonglong)uVar1;
    puVar3 = (uint *)(ulonglong)(uVar1 + 0xc);
    if ((*puVar3 >> 9 & 1) != 0) {
      FUN_1408c5629();
      LOCK();
      *puVar3 = *puVar3 & 0xfffffd7f;
      UNLOCK();
      puVar2[6] = 0;
      puVar2[1] = 0;
      *puVar2 = 0;
    }
  }
  return;
}

