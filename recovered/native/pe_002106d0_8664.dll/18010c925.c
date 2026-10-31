/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010c925 */

void FUN_18010c925(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  
  lVar1 = DAT_180419160;
  iVar3 = 0;
  if ((*(int *)(DAT_180419160 + 0x2b84) + 1 == *(int *)(DAT_180419160 + 4)) &&
     (iVar3 = *(int *)(DAT_180419160 + 0x1668), iVar3 == 0)) {
    iVar3 = *(int *)(DAT_180419160 + 0x167c);
  }
  uVar2 = FUN_180132904(DAT_180419160 + 0x2b48,iVar3);
  *(undefined4 *)(lVar1 + 0x1660) = uVar2;
  return;
}

