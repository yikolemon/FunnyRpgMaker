/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14001527e */

undefined8 * FUN_14001527e(undefined8 param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14001190c(param_3,param_2,0,1);
  }
  else if (*(longlong *)(param_3 + 0x10) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
  }
  else {
    FUN_140006874(param_2,param_3 + 0x88);
  }
  return param_2;
}

