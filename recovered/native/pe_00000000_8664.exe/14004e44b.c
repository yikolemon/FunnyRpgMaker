/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004e44b */

char * FUN_14004e44b(char *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    FUN_14004e504(*param_3);
LAB_14004e4cb:
    if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_20 ^ (ulonglong)auStack_48);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_24 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_14004d9e9(param_1,param_2,&local_24);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      FUN_14004e652(*param_3,local_24);
      goto LAB_14004e4cb;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("Invalid format string.");
}

