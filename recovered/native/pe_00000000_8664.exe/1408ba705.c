/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408ba705 */

undefined1 FUN_1408ba705(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = (undefined4 *)FUN_1408c0ecd();
    *puVar1 = 0x16;
    FUN_1408cbd78();
    return 0;
  }
  return 1;
}

