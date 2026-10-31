/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400535c0 */

undefined8 * FUN_1400535c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar1 = (undefined8 *)*param_2;
    }
    FUN_14000ffc0(param_1,puVar1,param_2[2]);
    if ((ulonglong)param_2[7] < 8) {
      puVar1 = param_2 + 4;
    }
    else {
      puVar1 = (undefined8 *)param_2[4];
    }
    FUN_14000ffc0(param_1 + 4,puVar1,param_2[6]);
    if ((ulonglong)param_2[0xb] < 8) {
      puVar1 = param_2 + 8;
    }
    else {
      puVar1 = (undefined8 *)param_2[8];
    }
    FUN_14000ffc0(param_1 + 8,puVar1,param_2[10]);
    if ((ulonglong)param_2[0xf] < 8) {
      puVar1 = param_2 + 0xc;
    }
    else {
      puVar1 = (undefined8 *)param_2[0xc];
    }
    FUN_14000ffc0(param_1 + 0xc,puVar1,param_2[0xe]);
    if ((ulonglong)param_2[0x13] < 8) {
      puVar1 = param_2 + 0x10;
    }
    else {
      puVar1 = (undefined8 *)param_2[0x10];
    }
    FUN_14000ffc0(param_1 + 0x10,puVar1,param_2[0x12]);
  }
  param_1[0x14] = param_2[0x14];
  return param_1;
}

