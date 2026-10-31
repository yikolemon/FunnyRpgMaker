/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023f160 */

undefined8 * FUN_18023f160(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    FUN_180004c8c();
    if ((ulonglong)param_2[3] < 0x10) {
      FUN_1802a82f0(param_1,param_2,param_2[2] + 1);
    }
    else {
      *param_1 = *param_2;
    }
    param_1[3] = param_2[3];
    param_1[2] = param_2[2];
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  return param_1;
}

