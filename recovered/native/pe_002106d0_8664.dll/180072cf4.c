/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180072cf4 */

undefined1 *
FUN_180072cf4(undefined1 *param_1,undefined8 param_2,int *param_3,int *param_4,undefined2 *param_5)

{
  *param_1 = 0;
  *(int *)(param_1 + 4) = *param_3;
  *(undefined2 *)(param_1 + 8) = *param_5;
  param_1[10] = *(undefined1 *)(param_5 + 1);
  *(int *)(param_1 + 0xc) = *param_4;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  FUN_180073356();
  if (*param_3 == 1) {
    if (DAT_180417ca1 == '\x01') {
      FUN_1800735b2(param_2);
    }
    FUN_180073784(param_1 + 0x58,param_2);
    if (1 < *param_4 - 3U) {
      FUN_18007f392(param_1 + 0x58);
    }
  }
  else if (*param_3 == 0) {
    FUN_180075cb4(param_1 + 0x10,param_2);
    FUN_1800733fa(param_1);
  }
  return param_1;
}

