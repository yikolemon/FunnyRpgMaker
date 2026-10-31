/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140088778 */

undefined1 *
FUN_140088778(undefined1 *param_1,undefined8 param_2,int *param_3,int *param_4,undefined2 *param_5)

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
  FUN_140088b70();
  if (*param_3 == 1) {
    if (DAT_1401cc8c5 == '\x01') {
      FUN_140088dcc(param_2);
    }
    FUN_140088f9e(param_1 + 0x58,param_2);
    if (1 < *param_4 - 3U) {
      FUN_14008cb80(param_1 + 0x58);
    }
  }
  else if (*param_3 == 0) {
    FUN_140089508(param_1 + 0x10,param_2);
    FUN_140088c14(param_1);
  }
  return param_1;
}

