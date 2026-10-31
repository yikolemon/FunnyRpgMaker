/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b717 */

void Unwind_14003b717(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar1 = *(undefined1 *)(param_2 + 0x23f);
  uVar2 = *(undefined1 *)(param_2 + 0x240);
  uVar3 = *(undefined1 *)(param_2 + 0x241);
  uVar4 = *(undefined1 *)(param_2 + 0x242);
  *(undefined1 *)(param_2 + 0x23d) = uVar4;
  *(undefined1 *)(param_2 + 0x23c) = uVar3;
  *(undefined1 *)(param_2 + 0x23b) = uVar2;
  *(undefined1 *)(param_2 + 0x23a) = uVar1;
  if (*(char *)(param_2 + 0x23e) == '\x01') {
    FUN_140001056(param_2 + 0xa0);
  }
  *(undefined1 *)(param_2 + 0x23d) = uVar4;
  *(undefined1 *)(param_2 + 0x23c) = uVar3;
  *(undefined1 *)(param_2 + 0x23b) = uVar2;
  *(undefined1 *)(param_2 + 0x23a) = uVar1;
  return;
}

