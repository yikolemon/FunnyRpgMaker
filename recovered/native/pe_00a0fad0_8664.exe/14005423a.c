/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14005423a */

void Unwind_14005423a(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x29a);
  *(undefined1 *)(param_2 + 0x29e) = uVar1;
  *(undefined1 *)(param_2 + 0x29d) = uVar1;
  FUN_140052e84(param_2 + 0x138);
  *(undefined1 *)(param_2 + 0x29e) = uVar1;
  *(undefined1 *)(param_2 + 0x29d) = uVar1;
  return;
}

