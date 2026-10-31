/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007bc19 */

void Unwind_14007bc19(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x868);
  if ((param_2 + 0x60 != lVar1 & *(byte *)(param_2 + 0x8e9)) == 1) {
    do {
      lVar1 = lVar1 + -0x50;
      FUN_140074620(lVar1);
    } while (lVar1 != param_2 + 0x60);
  }
  return;
}

