/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18000a69d */

char * FUN_18000a69d(char *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_68;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    param_3 = (undefined8 *)*param_3;
    FUN_18000a7ea(param_3,local_38);
LAB_18000a738:
    uVar2 = FUN_18000a77e(local_38);
    *(undefined4 *)*param_3 = uVar2;
    if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_68)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_3c = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_180009e54(param_1,param_2,&local_3c);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      param_3 = (undefined8 *)*param_3;
      FUN_18000a88e(param_3,local_38,local_3c);
      goto LAB_18000a738;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180005ebc("Invalid format string.");
}

