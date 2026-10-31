/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cf29b */

void FUN_1408cf29b(void)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  puVar2 = (undefined4 *)(ulonglong)uVar1;
  puVar3 = (uint *)(ulonglong)(uVar1 + 0xc);
  if (((*puVar3 >> 0xd & 1) != 0) && ((*puVar3 >> 6 & 1) != 0)) {
    FUN_1408cbff0();
    LOCK();
    *puVar3 = *puVar3 & 0xfffffebf;
    UNLOCK();
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[2] = 0;
  }
  return;
}

