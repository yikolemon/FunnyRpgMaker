/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011e650 */

void FUN_18011e650(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(DAT_180419160 + 0x2178);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(DAT_180419160 + 0x2180);
    lVar3 = 0;
    do {
      FUN_18011e4d3(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}

