/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011cb14 */

void FUN_18011cb14(void)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  if ((*(byte *)(DAT_180419160 + 0x242c) & 1) == 0) {
    thunk_FUN_18010f900();
  }
  if (*(int *)(lVar1 + 0x244c) == -1) {
    FUN_18010b3f2();
  }
  *(undefined1 *)(lVar1 + 0x2429) = 0;
  return;
}

