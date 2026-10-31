/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ad586 */

void FUN_1400ad586(undefined8 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_14009376e();
  FUN_1400ad36d(param_1,param_2,uVar1 << 0x20 | uVar1 & 0xffffffff,0);
  return;
}

