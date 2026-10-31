/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c845b */

void Unwind_1800c845b(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x3a2);
  uVar2 = *(undefined8 *)(param_2 + 0x380);
  *(undefined8 *)(param_2 + 0x360) = uVar2;
  *(undefined1 *)(param_2 + 0x39c) = uVar1;
  if (*(char *)(param_2 + 0x3a3) == '\x01') {
    FUN_180001ef2(param_2 + 0x240);
  }
  *(undefined8 *)(param_2 + 0x360) = uVar2;
  *(undefined1 *)(param_2 + 0x39c) = uVar1;
  return;
}

