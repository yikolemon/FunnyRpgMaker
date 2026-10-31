/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c6821 */

void FUN_1400c6821(undefined4 param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  if (*(char *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10e) == '\0') {
    *(byte *)(DAT_140f2a910 + 0x1fa8) = *(byte *)(DAT_140f2a910 + 0x1fa8) | 0x10;
    *(undefined4 *)(lVar1 + 0x1fd8) = param_1;
  }
  return;
}

