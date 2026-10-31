/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18008ea3e */

void FUN_18008ea3e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1800010ec(param_1 + 0xdb8);
  FUN_1800010ec(param_1 + 0xd98);
  lVar2 = param_1 + 0xd78;
  lVar1 = -0xd58;
  do {
    FUN_1800010ec(lVar2);
    lVar1 = lVar1 + 0x20;
    lVar2 = lVar2 + -0x20;
  } while (lVar1 != -0xd8);
  FUN_180004cea(param_1 + 0x100);
  FUN_18008eeae(param_1 + 0xe8);
  FUN_18008ef26(param_1 + 0xd0);
  FUN_180004cea(param_1 + 0xb8);
  FUN_18006db58(param_1 + 0xa0);
  FUN_1800010ec(param_1 + 0x80);
  FUN_1800010ec(param_1 + 0x60);
  FUN_180042932(param_1 + 0x48);
  FUN_1800010ec(param_1 + 0x28);
  FUN_180004cea(param_1 + 0x10);
  return;
}

