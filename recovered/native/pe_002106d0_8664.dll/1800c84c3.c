/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c84c3 */

void Unwind_1800c84c3(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x39c);
  uVar2 = *(undefined8 *)(param_2 + 0x360);
  *(undefined8 *)(param_2 + 0x378) = uVar2;
  *(undefined1 *)(param_2 + 0x3a1) = 0;
  *(undefined1 *)(param_2 + 0x3a0) = uVar1;
  FUN_18005a604(param_2 + 0x1c8);
  *(undefined8 *)(param_2 + 0x378) = uVar2;
  *(undefined1 *)(param_2 + 0x3a1) = 0;
  *(undefined1 *)(param_2 + 0x3a0) = uVar1;
  return;
}

