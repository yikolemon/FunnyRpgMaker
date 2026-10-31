/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10198bcb */

void FUN_10198bcb(void)

{
  char cVar1;
  
  cVar1 = FUN_10113c70(0x210);
  if (cVar1 != '\0') {
    cVar1 = FUN_1019a0a3();
    if (cVar1 == '\0') {
      FUN_1019a076(0,0xa0,0xffffffff);
    }
  }
  cVar1 = FUN_10113c70(0x214);
  if (cVar1 != '\0') {
    cVar1 = FUN_1019a0a3();
    if (cVar1 == '\0') {
      FUN_1019a076(0,0xa1,0xffffffff);
    }
  }
  cVar1 = FUN_10113c70(0x212);
  if (cVar1 != '\0') {
    cVar1 = FUN_1019a0a3();
    if (cVar1 == '\0') {
      FUN_1019a076(0,0x5b,0xffffffff);
    }
  }
  cVar1 = FUN_10113c70(0x216);
  if (cVar1 != '\0') {
    cVar1 = FUN_1019a0a3();
    if (cVar1 == '\0') {
      FUN_1019a076(0,0x5c,0xffffffff);
    }
  }
  return;
}

