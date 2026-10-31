/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1403274f8 */

void FUN_1403274f8(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = DAT_14062a630;
  iVar1 = *(int *)(DAT_14062a630 + 0x2118);
  if (*(short *)(*(longlong *)(DAT_14062a630 + 0x2ac0) + 0xc) < iVar1) {
    *(int *)(DAT_14062a630 + 0x2118) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x2120) + -0x10 + (longlong)iVar1 * 8);
    }
    *(undefined4 *)(lVar2 + 0x1f9c) = uVar3;
    return;
  }
  FUN_140312b68("boolean, but is ");
  return;
}

