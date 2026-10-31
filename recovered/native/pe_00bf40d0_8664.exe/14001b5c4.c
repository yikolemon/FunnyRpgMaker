/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001b5c4 */

undefined8 FUN_14001b5c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR__malloc_base_14012ebb8)(param_1,DAT_14013cea0);
  if (DAT_14013ce90 != 0) {
    FUN_14001b64d((int *)(DAT_14013ce90 + 0x2b8c),*(int *)(DAT_14013ce90 + 4),param_3,param_1);
  }
  return uVar1;
}

