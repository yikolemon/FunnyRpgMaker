/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801995f2 */

void Unwind_1801995f2(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1800fe8d4();
  }
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  return;
}

