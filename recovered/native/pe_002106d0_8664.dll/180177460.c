/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180177460 */

ulonglong FUN_180177460(undefined8 param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1801774e1();
  lVar2 = FUN_1801774e1(param_1);
  return lVar2 << 0x20 | (ulonglong)uVar1;
}

