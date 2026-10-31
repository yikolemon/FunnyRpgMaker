/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14030fcc8 */

undefined8 FUN_14030fcc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (*DAT_140614e70)(param_1,DAT_14062a640);
  if (DAT_14062a630 != 0) {
    FUN_140319304(DAT_14062a630 + 0x2b8c,*(undefined4 *)(DAT_14062a630 + 4),param_3,param_1);
  }
  return uVar1;
}

