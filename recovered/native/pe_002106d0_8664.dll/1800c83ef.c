/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c83ef */

void Unwind_1800c83ef(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x39d);
  uVar2 = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_2 + 0x380) = uVar2;
  *(undefined1 *)(param_2 + 0x3a3) = 0;
  *(undefined1 *)(param_2 + 0x3a2) = uVar1;
  FUN_18005a604(param_2 + 0x240);
  *(undefined8 *)(param_2 + 0x380) = uVar2;
  *(undefined1 *)(param_2 + 0x3a3) = 0;
  *(undefined1 *)(param_2 + 0x3a2) = uVar1;
  return;
}

