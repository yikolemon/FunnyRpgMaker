/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400052f6 */

int * FUN_1400052f6(int *param_1,char *param_2)

{
  FUN_140086460(param_1,0);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  if (param_2 != (char *)0x0) {
    FUN_1400865d0((longlong)param_1,param_2);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086b10(0x14011b35c);
}

