/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18018739e */

void Unwind_18018739e(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xcb);
  uVar2 = *(undefined1 *)(param_2 + 0xcc);
  *(undefined1 *)(param_2 + 200) = uVar2;
  *(undefined1 *)(param_2 + 0xca) = uVar1;
  FUN_180001ef2(param_2 + 0x78);
  *(undefined1 *)(param_2 + 200) = uVar2;
  *(undefined1 *)(param_2 + 0xca) = uVar1;
  return;
}

