/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c852f */

void Unwind_1800c852f(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x3a0);
  uVar2 = *(undefined8 *)(param_2 + 0x378);
  *(undefined8 *)(param_2 + 0x358) = uVar2;
  *(undefined1 *)(param_2 + 0x39b) = uVar1;
  if (*(char *)(param_2 + 0x3a1) == '\x01') {
    FUN_180001ef2(param_2 + 0x1c8);
  }
  *(undefined8 *)(param_2 + 0x358) = uVar2;
  *(undefined1 *)(param_2 + 0x39b) = uVar1;
  return;
}

