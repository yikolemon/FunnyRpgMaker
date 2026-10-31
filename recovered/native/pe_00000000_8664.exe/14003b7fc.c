/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b7fc */

void Unwind_14003b7fc(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x253);
  uVar2 = *(undefined1 *)(param_2 + 0x254);
  uVar3 = *(undefined1 *)(param_2 + 0x255);
  *(undefined1 *)(param_2 + 0x262) = uVar3;
  *(undefined1 *)(param_2 + 0x261) = uVar2;
  *(undefined1 *)(param_2 + 0x260) = 0;
  *(undefined1 *)(param_2 + 0x25f) = uVar1;
  *(undefined1 *)(param_2 + 0x25e) = uVar1;
  if (*(char *)(param_2 + 0x252) == '\x01') {
    FUN_140001056(param_2 + 0x180);
  }
  *(undefined1 *)(param_2 + 0x262) = uVar3;
  *(undefined1 *)(param_2 + 0x261) = uVar2;
  *(undefined1 *)(param_2 + 0x260) = 0;
  *(undefined1 *)(param_2 + 0x25f) = uVar1;
  *(undefined1 *)(param_2 + 0x25e) = uVar1;
  return;
}

