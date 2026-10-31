/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c8597 */

void Unwind_1800c8597(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x39b);
  uVar2 = *(undefined8 *)(param_2 + 0x358);
  *(undefined8 *)(param_2 + 0x370) = uVar2;
  *(undefined1 *)(param_2 + 0x39f) = 0;
  *(undefined1 *)(param_2 + 0x39e) = uVar1;
  FUN_18005a604(param_2 + 0x2e8);
  *(undefined8 *)(param_2 + 0x370) = uVar2;
  *(undefined1 *)(param_2 + 0x39f) = 0;
  *(undefined1 *)(param_2 + 0x39e) = uVar1;
  return;
}

