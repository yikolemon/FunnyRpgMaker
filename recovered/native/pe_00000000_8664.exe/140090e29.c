/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140090e29 */

void FUN_140090e29(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_140f2a910;
  if (0 < (longlong)*(int *)(DAT_140f2a910 + 0x2108)) {
    lVar1 = *(longlong *)(DAT_140f2a910 + 0x2110);
    lVar3 = (longlong)*(int *)(DAT_140f2a910 + 0x2108) * 0x10;
    FUN_140090c62(*(undefined8 *)(lVar1 + -0x10 + lVar3),*(undefined4 *)(lVar1 + -8 + lVar3),
                  *(undefined4 *)(lVar1 + -4 + lVar3));
    *(int *)(lVar2 + 0x2108) = *(int *)(lVar2 + 0x2108) + -1;
    return;
  }
  FUN_14007a954("Calling PopFont() too many times!");
  return;
}

