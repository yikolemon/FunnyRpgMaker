/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004dcc2 */

char * FUN_14004dcc2(char *param_1,char *param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  if ((byte)(*param_1 - 0x31U) < 9) {
    local_28 = (undefined8 *)((ulonglong)local_28 & 0xffffffff00000000);
    param_1 = (char *)FUN_14004d9e9(param_1,param_2,&local_28);
    *(undefined4 *)*param_3 = local_28._0_4_;
  }
  else if (*param_1 == '{') {
    param_1 = param_1 + 1;
    if (param_1 != param_2) {
      local_28 = param_3;
      param_1 = (char *)FUN_14004e21d(param_1,param_2);
    }
    if ((param_1 == param_2) || (*param_1 != '}')) {
                    /* WARNING: Subroutine does not return */
      FUN_140049b0a("Invalid format string.");
    }
    param_1 = param_1 + 1;
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
}

