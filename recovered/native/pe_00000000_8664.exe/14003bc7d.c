/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003bc7d */

void Unwind_14003bc7d(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 600);
  uVar2 = *(undefined1 *)(param_2 + 0x259);
  *(undefined1 *)(param_2 + 0x226) = uVar2;
  *(undefined1 *)(param_2 + 0x225) = uVar1;
  if (*(char *)(param_2 + 599) == '\x01') {
    FUN_14000109c(param_2 + 0x120);
  }
  *(undefined1 *)(param_2 + 0x226) = uVar2;
  *(undefined1 *)(param_2 + 0x225) = uVar1;
  return;
}

