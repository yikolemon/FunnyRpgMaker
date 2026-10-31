/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b61b */

void Unwind_14003b61b(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar1 = *(undefined1 *)(param_2 + 0x264);
  uVar2 = *(undefined1 *)(param_2 + 0x265);
  uVar3 = *(undefined1 *)(param_2 + 0x266);
  uVar4 = *(undefined1 *)(param_2 + 0x267);
  *(undefined1 *)(param_2 + 0x246) = uVar4;
  *(undefined1 *)(param_2 + 0x245) = uVar3;
  *(undefined1 *)(param_2 + 0x244) = uVar2;
  *(undefined1 *)(param_2 + 0x243) = uVar1;
  if (*(char *)(param_2 + 0x263) == '\x01') {
    FUN_14000109c(param_2 + 0x1e0);
  }
  *(undefined1 *)(param_2 + 0x246) = uVar4;
  *(undefined1 *)(param_2 + 0x245) = uVar3;
  *(undefined1 *)(param_2 + 0x244) = uVar2;
  *(undefined1 *)(param_2 + 0x243) = uVar1;
  return;
}

