/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bab4 */

void Unwind_14003bab4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x25b);
  uVar2 = *(undefined1 *)(param_2 + 0x25c);
  uVar3 = *(undefined1 *)(param_2 + 0x25d);
  *(undefined1 *)(param_2 + 0x22e) = uVar3;
  *(undefined1 *)(param_2 + 0x22d) = uVar2;
  *(undefined1 *)(param_2 + 0x22c) = uVar1;
  if (*(char *)(param_2 + 0x25a) == '\x01') {
    FUN_14000109c(param_2 + 0x160);
  }
  *(undefined1 *)(param_2 + 0x22e) = uVar3;
  *(undefined1 *)(param_2 + 0x22d) = uVar2;
  *(undefined1 *)(param_2 + 0x22c) = uVar1;
  return;
}

