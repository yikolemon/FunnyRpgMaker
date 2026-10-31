/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c8603 */

void Unwind_1800c8603(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x39e);
  uVar2 = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_2 + 0x350) = uVar2;
  *(undefined1 *)(param_2 + 0x39a) = uVar1;
  if (*(char *)(param_2 + 0x39f) == '\x01') {
    FUN_180001ef2(param_2 + 0x2e8);
  }
  *(undefined8 *)(param_2 + 0x350) = uVar2;
  *(undefined1 *)(param_2 + 0x39a) = uVar1;
  return;
}

