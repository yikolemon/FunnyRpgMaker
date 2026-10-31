/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140752921 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140752921(void)

{
  longlong lVar1;
  uint *puVar2;
  byte bVar3;
  uint unaff_retaddr;
  uint unaff_retaddr_00;
  
  puVar2 = (uint *)(ulonglong)unaff_retaddr;
  bVar3 = (byte)unaff_retaddr_00;
  if (unaff_retaddr_00 < 0x80) {
    *(byte *)puVar2 = bVar3;
    lVar1 = 0;
  }
  else if (unaff_retaddr_00 < 0x800) {
    *(byte *)puVar2 = (byte)(unaff_retaddr_00 >> 6) | 0xc0;
    *(byte *)((longlong)puVar2 + 1) = bVar3 & 0x3f | 0x80;
    lVar1 = 2;
  }
  else if (unaff_retaddr_00 < 0x10000) {
    *(byte *)puVar2 = (byte)(unaff_retaddr_00 >> 0xc) | 0xe0;
    *(byte *)((longlong)puVar2 + 1) = (byte)(unaff_retaddr_00 >> 6) & 0x3f | 0x80;
    *(byte *)((longlong)puVar2 + 2) = bVar3 & 0x3f | 0x80;
    lVar1 = 3;
  }
  else {
    lVar1 = 0;
    if (unaff_retaddr_00 < 0x110000) {
      *puVar2 = (unaff_retaddr_00 << 0x18 |
                (unaff_retaddr_00 & 0x3fc0) << 10 |
                unaff_retaddr_00 >> 4 & 0xff00 | unaff_retaddr_00 >> 0x12) & (uint)DAT_150a0b390 |
                (uint)DAT_150a0b3a8;
      lVar1 = 4;
    }
  }
  *(undefined1 *)((longlong)puVar2 + lVar1) = 0;
  return;
}

