/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180137ca1 */

void FUN_180137ca1(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(DAT_180419160 + 0x1608);
  if (*(char *)(lVar2 + 0x10e) != '\0') {
    return;
  }
  iVar1 = *(int *)(lVar2 + 0x214);
  lVar2 = *(longlong *)(lVar2 + 0x208);
  uVar3 = FUN_180102463(*(undefined4 *)(DAT_180419160 + 0xea8),DAT_1802ac570);
  FUN_180137a15((iVar1 == 0) + (lVar2 != 0) * '\x04' + '\x01',uVar3);
  return;
}

