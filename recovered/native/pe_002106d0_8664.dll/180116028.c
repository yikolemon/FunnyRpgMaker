/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116028 */

void FUN_180116028(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = DAT_180419160;
  iVar1 = *(int *)(DAT_180419160 + 0x2118);
  if (*(short *)(*(longlong *)(DAT_180419160 + 0x2ac0) + 0xc) < iVar1) {
    *(int *)(DAT_180419160 + 0x2118) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x2120) + -0x10 + (longlong)iVar1 * 8);
    }
    *(undefined4 *)(lVar2 + 0x1f9c) = uVar3;
    return;
  }
  FUN_180101698("Calling PopFocusScope() too many times!");
  return;
}

