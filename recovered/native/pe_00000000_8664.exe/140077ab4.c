/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140077ab4 */

undefined8 FUN_140077ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR__malloc_base_140f17ad8)(param_1,DAT_140f2a920);
  if (DAT_140f2a910 != 0) {
    FUN_14008114c(DAT_140f2a910 + 0x2b8c,*(undefined4 *)(DAT_140f2a910 + 4),param_3,param_1);
  }
  return uVar1;
}

