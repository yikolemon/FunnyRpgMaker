/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140013ce0 */

longlong FUN_140013ce0(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  FUN_140188dc0(param_1,0);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  if (param_2 != 0) {
    FUN_1401890b0(param_1,param_2);
    return param_1;
  }
  FUN_1401898f0("bad locale name");
  pcVar1 = (code *)swi(3);
  lVar2 = (*pcVar1)();
  return lVar2;
}

