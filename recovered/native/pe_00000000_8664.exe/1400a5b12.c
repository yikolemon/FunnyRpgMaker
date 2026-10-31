/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a5b12 */

void FUN_1400a5b12(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_140076e46(DAT_140f2a910,param_1);
  *puVar1 = param_2;
  *(undefined4 *)(puVar1 + 0xc) = param_3;
  return;
}

