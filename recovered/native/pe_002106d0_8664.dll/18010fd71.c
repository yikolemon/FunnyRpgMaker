/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010fd71 */

void thunk_FUN_180117b11(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_180419160;
  if (0 < (longlong)*(int *)(DAT_180419160 + 0x2108)) {
    lVar1 = *(longlong *)(DAT_180419160 + 0x2110);
    lVar3 = (longlong)*(int *)(DAT_180419160 + 0x2108) * 0x10;
    FUN_18011794a(*(undefined8 *)(lVar1 + -0x10 + lVar3),*(undefined4 *)(lVar1 + -8 + lVar3),
                  *(undefined4 *)(lVar1 + -4 + lVar3));
    *(int *)(lVar2 + 0x2108) = *(int *)(lVar2 + 0x2108) + -1;
    return;
  }
  FUN_180101698("Calling PopFont() too many times!");
  return;
}

