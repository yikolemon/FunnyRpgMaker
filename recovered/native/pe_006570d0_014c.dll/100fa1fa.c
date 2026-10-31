/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fa1fa */

undefined4 FUN_100fa1fa(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_thunk_FUN_1026faa0_10389dc8)(param_1,DAT_1039d754);
  if (DAT_1039d74c != 0) {
    FUN_10103257(DAT_1039d74c + 0x2858,*(undefined4 *)(DAT_1039d74c + 4));
  }
  return uVar1;
}

