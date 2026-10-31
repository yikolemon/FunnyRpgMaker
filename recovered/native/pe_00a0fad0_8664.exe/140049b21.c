/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140049b21 */

char * FUN_140049b21(char *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_48;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    FUN_140049bda(*param_3);
LAB_140049ba1:
    if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_48);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_24 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_1400490aa(param_1,param_2,&local_24);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      FUN_140049d28(*param_3,local_24);
      goto LAB_140049ba1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Invalid format string.");
}

