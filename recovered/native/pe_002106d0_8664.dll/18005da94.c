/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005da94 */

void Unwind_18005da94(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4d1);
  *(undefined1 *)(param_2 + 0x4d9) = uVar1;
  FUN_180001ef2(param_2 + 0x2b8);
  *(undefined1 *)(param_2 + 0x4d9) = uVar1;
  return;
}

