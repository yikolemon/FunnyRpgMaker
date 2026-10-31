/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000a8cb */

char * FUN_18000a8cb(char *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_48;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    FUN_18000a984(*param_3);
LAB_18000a94b:
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_24 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_180009e54(param_1,param_2,&local_24);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      FUN_18000aad2(*param_3,local_24);
      goto LAB_18000a94b;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Invalid format string.");
}

