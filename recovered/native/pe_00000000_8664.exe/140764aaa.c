/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140764aaa */

void FUN_140764aaa(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint unaff_retaddr;
  longlong alStack_18 [3];
  
  alStack_18[1] = 0;
  alStack_18[0] = (ulonglong)unaff_retaddr << 0x20;
  alStack_18[2] = 0;
  uVar1 = FUN_140752593();
  uVar2 = (ulonglong)((int)alStack_18 + 0xc);
  *(undefined8 *)(uVar2 - 8) = uVar1;
  *(undefined8 *)(uVar2 - 0x10) = 0x140764ac0;
  FUN_140764a95();
  return;
}

