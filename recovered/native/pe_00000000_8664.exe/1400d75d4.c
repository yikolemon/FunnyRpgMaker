/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d75d4 */

void FUN_1400d75d4(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_1400d7695(0x11);
  FUN_140076e86(param_1,0x1000,uVar2);
  uVar2 = FUN_1400d7695(0x10);
  FUN_140076e86(param_1,0x2000,uVar2);
  uVar2 = FUN_1400d7695(0x12);
  FUN_140076e86(param_1,0x4000,uVar2);
  cVar1 = FUN_1400d7695(0x5b);
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = FUN_1400d7695(0x5c);
  }
  FUN_140076e86(param_1,0x8000,uVar2);
  return;
}

