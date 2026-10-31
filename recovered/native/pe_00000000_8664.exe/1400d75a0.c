/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d75a0 */

undefined1 FUN_1400d75a0(void)

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

