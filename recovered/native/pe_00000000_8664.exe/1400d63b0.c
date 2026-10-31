/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d63b0 */

void FUN_1400d63b0(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_140091d93(0x210);
  if (cVar1 != '\0') {
    cVar1 = FUN_1400d7695(0xa0);
    if (cVar1 == '\0') {
      FUN_1400d765a(param_1,0x210,0,0xa0,0xffffffff);
    }
  }
  cVar1 = FUN_140091d93(0x214);
  if (cVar1 != '\0') {
    cVar1 = FUN_1400d7695(0xa1);
    if (cVar1 == '\0') {
      FUN_1400d765a(param_1,0x214,0,0xa1,0xffffffff);
    }
  }
  cVar1 = FUN_140091d93(0x212);
  if (cVar1 != '\0') {
    cVar1 = FUN_1400d7695(0x5b);
    if (cVar1 == '\0') {
      FUN_1400d765a(param_1,0x212,0,0x5b,0xffffffff);
    }
  }
  cVar1 = FUN_140091d93(0x216);
  if (cVar1 != '\0') {
    cVar1 = FUN_1400d7695(0x5c);
    if (cVar1 == '\0') {
      FUN_1400d765a(param_1,0x216,0,0x5c,0xffffffff);
    }
  }
  return;
}

