/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076b4e0 */

undefined4 FUN_14076b4e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint unaff_retaddr;
  
  uVar3 = (ulonglong)unaff_retaddr;
  if (unaff_retaddr != 0) {
    if (((unaff_retaddr & 0xf000) != 0) && ((unaff_retaddr - 1 & unaff_retaddr) == 0)) {
      uVar1 = 0;
      if (unaff_retaddr != 0) {
        for (; (unaff_retaddr >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
        }
      }
      if ((uVar1 & 0x1c) == 0xc) {
        uVar3 = (ulonglong)(uVar1 + 0x28b);
      }
    }
    uVar2 = 0x10335a9b;
    if ((int)uVar3 - 0x200U < 0x9b) {
      uVar2 = *(undefined4 *)(uVar3 * 4 + 0x102b7930);
    }
    return uVar2;
  }
  return 0x1033914f;
}

