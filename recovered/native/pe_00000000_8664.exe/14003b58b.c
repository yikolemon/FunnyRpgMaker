/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14003b58b */

void Unwind_14003b58b(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 0x248);
  uVar2 = *(undefined1 *)(param_2 + 0x249);
  uVar3 = *(undefined1 *)(param_2 + 0x24a);
  *(undefined1 *)(param_2 + 0x267) = uVar3;
  *(undefined1 *)(param_2 + 0x266) = uVar2;
  *(undefined1 *)(param_2 + 0x265) = 0;
  *(undefined1 *)(param_2 + 0x264) = uVar1;
  *(undefined1 *)(param_2 + 0x263) = uVar1;
  if (*(char *)(param_2 + 0x247) == '\x01') {
    FUN_140001056(param_2 + 0x1c0);
  }
  *(undefined1 *)(param_2 + 0x267) = uVar3;
  *(undefined1 *)(param_2 + 0x266) = uVar2;
  *(undefined1 *)(param_2 + 0x265) = 0;
  *(undefined1 *)(param_2 + 0x264) = uVar1;
  *(undefined1 *)(param_2 + 0x263) = uVar1;
  return;
}

