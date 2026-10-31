/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14032dfe4 */

void FUN_14032dfe4(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  if ((*(byte *)(DAT_14062a630 + 0x242c) & 1) == 0) {
    thunk_FUN_140320dd0();
  }
  if (*(int *)(lVar1 + 0x244c) == -1) {
    FUN_14031c8c2();
  }
  *(undefined1 *)(lVar1 + 0x2429) = 0;
  return;
}

