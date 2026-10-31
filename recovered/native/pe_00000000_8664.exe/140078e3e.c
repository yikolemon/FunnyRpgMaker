/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140078e3e */

undefined1 * FUN_140078e3e(undefined1 *param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (param_2 != 0) {
    FUN_140077a57(param_1,param_2,0x100);
    FUN_140078ecc(param_1);
  }
  return param_1;
}

