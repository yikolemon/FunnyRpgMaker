/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140007eca */

longlong FUN_140007eca(longlong param_1,longlong param_2)

{
  FUN_1400d39b0(param_1,0);
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
    FUN_1400d3ce0(param_1,param_2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d9d60("bad locale name");
}

