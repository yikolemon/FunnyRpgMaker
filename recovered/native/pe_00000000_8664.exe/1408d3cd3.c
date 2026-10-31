/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d3cd3 */

void FUN_1408d3cd3(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar5;
  uint *puVar4;
  
  uVar3 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  uVar2 = (ulonglong)uVar3;
  LOCK();
  *(int *)(uVar2 + 0xc) = *(int *)(uVar2 + 0xc) + 1;
  UNLOCK();
  uVar1 = *(uint *)(uVar2 + 0x7c);
  if (uVar1 != 0) {
    LOCK();
    *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + 1;
    UNLOCK();
  }
  uVar1 = *(uint *)(uVar2 + 0x84);
  if (uVar1 != 0) {
    LOCK();
    *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + 1;
    UNLOCK();
  }
  uVar1 = *(uint *)(uVar2 + 0x80);
  if (uVar1 != 0) {
    LOCK();
    *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + 1;
    UNLOCK();
  }
  uVar1 = *(uint *)(uVar2 + 0x8c);
  if (uVar1 != 0) {
    LOCK();
    *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + 1;
    UNLOCK();
  }
  uVar3 = uVar3 + 0x28;
  iVar5 = 6;
  do {
    puVar4 = (uint *)(ulonglong)uVar3;
    if ((puVar4[-2] != 0x1039b4c8) && (uVar1 = *puVar4, uVar1 != 0)) {
      LOCK();
      *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + 1;
      UNLOCK();
    }
    if ((puVar4[-3] != 0) && (uVar1 = puVar4[-1], uVar1 != 0)) {
      LOCK();
      *(int *)(ulonglong)uVar1 = *(int *)(ulonglong)uVar1 + 1;
      UNLOCK();
    }
    uVar3 = uVar3 + 0x10;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_1408d3f19();
  return;
}

