/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005dda2 */

void Unwind_18005dda2(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4ce);
  *(undefined1 *)(param_2 + 0x4da) = uVar1;
  if (*(char *)(param_2 + 0x4cf) == '\x01') {
    FUN_18006ab70(param_2 + 0x208);
  }
  *(undefined1 *)(param_2 + 0x4da) = uVar1;
  return;
}

