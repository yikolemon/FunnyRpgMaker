/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140095dd0 */

void FUN_140095dd0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  if ((*(byte *)(DAT_140f2a910 + 0x242c) & 1) == 0) {
    thunk_FUN_140088c18();
  }
  if (*(int *)(lVar1 + 0x244c) == -1) {
    FUN_14008470a();
  }
  *(undefined1 *)(lVar1 + 0x2429) = 0;
  return;
}

