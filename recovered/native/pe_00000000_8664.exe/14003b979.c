/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b979 */

void Unwind_14003b979(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x233);
  uVar2 = *(undefined1 *)(param_2 + 0x234);
  uVar3 = *(undefined1 *)(param_2 + 0x235);
  *(undefined1 *)(param_2 + 0x231) = uVar3;
  *(undefined1 *)(param_2 + 0x230) = uVar2;
  *(undefined1 *)(param_2 + 0x22f) = uVar1;
  if (*(char *)(param_2 + 0x232) == '\x01') {
    FUN_140001056(param_2 + 0x80);
  }
  *(undefined1 *)(param_2 + 0x231) = uVar3;
  *(undefined1 *)(param_2 + 0x230) = uVar2;
  *(undefined1 *)(param_2 + 0x22f) = uVar1;
  return;
}

