/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140884800 */

void FUN_140884800(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  undefined1 auStack_8 [4];
  undefined1 auStack_4 [4];
  
  uVar2 = (uint)auStack_4 - in_EAX & ~-(uint)((uint)auStack_4 < in_EAX);
  for (uVar1 = (uint)auStack_8 & 0xfffff000; uVar2 < uVar1; uVar1 = uVar1 - 0x1000) {
  }
  *(undefined4 *)(ulonglong)uVar2 = *(undefined4 *)((ulonglong)&stack0x00000000 & 0xffffffff);
  return;
}

