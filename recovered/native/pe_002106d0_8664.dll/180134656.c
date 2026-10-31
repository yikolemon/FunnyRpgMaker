/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180134656 */

void FUN_180134656(undefined8 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_18011a456();
  FUN_18013443d(param_1,param_2,uVar1 << 0x20 | uVar1 & 0xffffffff,0);
  return;
}

