/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400135f4 */

void Unwind_1400135f4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x85);
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  if (*(char *)(param_2 + 0x86) == '\x01') {
    FUN_140002174((longlong *)(param_2 + 0x60));
  }
  *(undefined1 *)(param_2 + 0x84) = uVar1;
  return;
}

