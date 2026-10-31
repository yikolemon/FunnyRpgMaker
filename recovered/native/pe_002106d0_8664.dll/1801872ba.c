/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801872ba */

void Unwind_1801872ba(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0xce);
  uVar2 = *(undefined1 *)(param_2 + 0xcf);
  *(undefined1 *)(param_2 + 0xcd) = uVar2;
  *(undefined1 *)(param_2 + 0xc9) = uVar1;
  FUN_180001ef2(param_2 + 0x78);
  *(undefined1 *)(param_2 + 0xcd) = uVar2;
  *(undefined1 *)(param_2 + 0xc9) = uVar1;
  return;
}

