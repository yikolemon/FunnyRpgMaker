/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fe7f8 */

undefined8 FUN_1800fe7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_FUN_1804039a0)(param_1,DAT_180419170);
  if (DAT_180419160 != 0) {
    FUN_180107e34(DAT_180419160 + 0x2b8c,*(undefined4 *)(DAT_180419160 + 4),param_3,param_1);
  }
  return uVar1;
}

