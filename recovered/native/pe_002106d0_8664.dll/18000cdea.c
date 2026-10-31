/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000cdea */

longlong FUN_18000cdea(longlong param_1,longlong param_2)

{
  FUN_18023d240(param_1,0);
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
    FUN_18023ccf0(param_1,param_2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802397f0("bad locale name");
}

