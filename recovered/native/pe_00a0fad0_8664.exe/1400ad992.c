/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ad992 */

void Unwind_1400ad992(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x36e);
  *(longlong *)(param_2 + 0x350) = param_2 + 0x138;
  *(undefined1 *)(param_2 + 0x36f) = uVar1;
  FUN_14007bf0e(param_2 + 0x228);
  *(longlong *)(param_2 + 0x350) = param_2 + 0x138;
  *(undefined1 *)(param_2 + 0x36f) = uVar1;
  return;
}

