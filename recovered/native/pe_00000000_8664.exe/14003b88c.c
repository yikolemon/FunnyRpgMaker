/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b88c */

void Unwind_14003b88c(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar1 = *(undefined1 *)(param_2 + 0x25f);
  uVar2 = *(undefined1 *)(param_2 + 0x260);
  uVar3 = *(undefined1 *)(param_2 + 0x261);
  uVar4 = *(undefined1 *)(param_2 + 0x262);
  *(undefined1 *)(param_2 + 0x239) = uVar4;
  *(undefined1 *)(param_2 + 0x238) = uVar3;
  *(undefined1 *)(param_2 + 0x237) = uVar2;
  *(undefined1 *)(param_2 + 0x236) = uVar1;
  if (*(char *)(param_2 + 0x25e) == '\x01') {
    FUN_14000109c(param_2 + 0x1a0);
  }
  *(undefined1 *)(param_2 + 0x239) = uVar4;
  *(undefined1 *)(param_2 + 0x238) = uVar3;
  *(undefined1 *)(param_2 + 0x237) = uVar2;
  *(undefined1 *)(param_2 + 0x236) = uVar1;
  return;
}

