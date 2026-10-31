/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c8387 */

void Unwind_1800c8387(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x3a4);
  uVar2 = *(undefined8 *)(param_2 + 0x388);
  *(undefined8 *)(param_2 + 0x368) = uVar2;
  *(undefined1 *)(param_2 + 0x39d) = uVar1;
  if (*(char *)(param_2 + 0x3a5) == '\x01') {
    FUN_180001ef2(param_2 + 0x278);
  }
  *(undefined8 *)(param_2 + 0x368) = uVar2;
  *(undefined1 *)(param_2 + 0x39d) = uVar1;
  return;
}

