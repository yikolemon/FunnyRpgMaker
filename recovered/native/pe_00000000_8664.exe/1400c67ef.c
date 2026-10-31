/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400c67ef */

void FUN_1400c67ef(undefined1 param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  if (*(char *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10e) == '\0') {
    *(byte *)(DAT_140f2a910 + 0x1fa8) = *(byte *)(DAT_140f2a910 + 0x1fa8) | 2;
    *(undefined1 *)(lVar1 + 0x1fcc) = param_1;
    *(char *)(lVar1 + 0x1fcd) = (char)param_2 + (param_2 == 0);
  }
  return;
}

