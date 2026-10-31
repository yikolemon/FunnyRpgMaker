/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e4b66 */

void Unwind_1400e4b66(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_140077b90();
  }
  *(undefined8 *)(param_2 + 0x60) = uVar1;
  return;
}

