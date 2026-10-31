/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18010fb06 */

void FUN_18010fb06(void)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  
  lVar2 = DAT_180419160;
  if (*(longlong *)(DAT_180419160 + 0x23e8) != 0) {
    FUN_18012eea7();
  }
  if (*(longlong *)(lVar2 + 0x2200) != 0) {
    cVar3 = FUN_18011c165();
    if ((cVar3 != '\0') &&
       (uVar1 = *(uint *)(lVar2 + 0x22a4), -1 < (char)uVar1 && (uVar1 & 0xf) != 0)) {
      FUN_18012f051();
      return;
    }
  }
  return;
}

