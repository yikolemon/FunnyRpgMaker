/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a02a0 */

void FUN_1801a02a0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_180118a7b(0x210);
  if (cVar1 != '\0') {
    cVar1 = FUN_1801a15cb(0xa0);
    if (cVar1 == '\0') {
      FUN_1801a1590(param_1,0x210,0,0xa0,0xffffffff);
    }
  }
  cVar1 = FUN_180118a7b(0x214);
  if (cVar1 != '\0') {
    cVar1 = FUN_1801a15cb(0xa1);
    if (cVar1 == '\0') {
      FUN_1801a1590(param_1,0x214,0,0xa1,0xffffffff);
    }
  }
  cVar1 = FUN_180118a7b(0x212);
  if (cVar1 != '\0') {
    cVar1 = FUN_1801a15cb(0x5b);
    if (cVar1 == '\0') {
      FUN_1801a1590(param_1,0x212,0,0x5b,0xffffffff);
    }
  }
  cVar1 = FUN_180118a7b(0x216);
  if (cVar1 != '\0') {
    cVar1 = FUN_1801a15cb(0x5c);
    if (cVar1 == '\0') {
      FUN_1801a1590(param_1,0x216,0,0x5c,0xffffffff);
    }
  }
  return;
}

