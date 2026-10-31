/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c831b */

void Unwind_1800c831b(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 0x3a7);
  uVar2 = *(undefined8 *)(param_2 + 0x390);
  *(undefined8 *)(param_2 + 0x388) = uVar2;
  *(undefined1 *)(param_2 + 0x3a5) = 0;
  *(undefined1 *)(param_2 + 0x3a4) = uVar1;
  FUN_18005a604(param_2 + 0x278);
  *(undefined8 *)(param_2 + 0x388) = uVar2;
  *(undefined1 *)(param_2 + 0x3a5) = 0;
  *(undefined1 *)(param_2 + 0x3a4) = uVar1;
  return;
}

