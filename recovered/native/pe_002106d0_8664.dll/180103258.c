/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180103258 */

undefined8 FUN_180103258(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1801006f9();
  uVar2 = FUN_1800fe7f8(0x2d28);
  FUN_1801032a8(uVar2,param_1);
  FUN_180103250(uVar2);
  FUN_18010491f();
  if (lVar1 != 0) {
    FUN_180103250(lVar1);
  }
  return uVar2;
}

