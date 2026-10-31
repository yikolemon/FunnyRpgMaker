/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008d1ec */

void FUN_14008d1ec(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140005242(param_1 + 0xdb8);
  FUN_140005242(param_1 + 0xd98);
  lVar2 = param_1 + 0xd78;
  lVar1 = -0xd58;
  do {
    FUN_140005242(lVar2);
    lVar1 = lVar1 + 0x20;
    lVar2 = lVar2 + -0x20;
  } while (lVar1 != -0xd8);
  FUN_140016e5c(param_1 + 0x100);
  FUN_14008d65c(param_1 + 0xe8);
  FUN_14008d6d4(param_1 + 0xd0);
  FUN_140016e5c(param_1 + 0xb8);
  FUN_140041304(param_1 + 0xa0);
  FUN_140005242(param_1 + 0x80);
  FUN_140005242(param_1 + 0x60);
  FUN_1400317d4(param_1 + 0x48);
  FUN_140005242(param_1 + 0x28);
  FUN_140016e5c(param_1 + 0x10);
  return;
}

