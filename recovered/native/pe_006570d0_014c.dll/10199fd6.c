/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10199fd6 */

undefined1 FUN_10199fd6(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar2 = GetMessageExtraInfo();
  uVar1 = 2;
  if ((uVar2 & 0xffffff80) != 0xff515700) {
    uVar1 = (uVar2 & 0xffffff80) == 0xff515780;
  }
  return uVar1;
}

