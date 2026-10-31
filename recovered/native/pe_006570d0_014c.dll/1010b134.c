/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1010b134 */

void thunk_FUN_10112e00(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_1039d74c;
  iVar1 = *(int *)(DAT_1039d74c + 0x1f8c);
  if (iVar1 < 1) {
    FUN_100fcef5("Calling PopFont() too many times!");
  }
  else {
    iVar2 = *(int *)(DAT_1039d74c + 0x1f94);
    FUN_10112c4f(*(undefined4 *)(iVar2 + -0xc + iVar1 * 0xc),
                 *(undefined4 *)(iVar2 + -8 + iVar1 * 0xc),*(undefined4 *)(iVar2 + -4 + iVar1 * 0xc)
                );
    *(int *)(iVar3 + 0x1f8c) = *(int *)(iVar3 + 0x1f8c) + -1;
  }
  return;
}

