/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a14d6 */

undefined1 FUN_1801a14d6(void)

{
  undefined1 uVar1;
  uint uVar2;
  LPARAM LVar3;
  
  LVar3 = GetMessageExtraInfo();
  uVar2 = (uint)LVar3 & 0xffffff80;
  uVar1 = 2;
  if (uVar2 != 0xff515700) {
    uVar1 = uVar2 == 0xff515780;
  }
  return uVar1;
}

