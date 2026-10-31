/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408b7eb8 */

undefined1 FUN_1408b7eb8(void)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((byte)(cVar1 - 0x20U) < 0x5b) {
    bVar2 = *(byte *)((ulonglong)((int)cVar1 - 0x20U & 0x7f) * 2 + 0x10323f41);
  }
  else {
    bVar2 = 0;
  }
  return *(undefined1 *)
          ((ulonglong)
           ((uint)*(byte *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc) +
            (uint)bVar2 * 8 & 0x7f) * 2 + 0x10323f40);
}

