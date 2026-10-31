/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400498f3 */

char * FUN_1400498f3(char *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_68;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    param_3 = (undefined8 *)*param_3;
    FUN_140049a40(param_3,local_38);
LAB_14004998e:
    uVar2 = FUN_1400499d4(local_38);
    *(undefined4 *)*param_3 = uVar2;
    if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_68)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_20 ^ (ulonglong)auStack_68);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_3c = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_1400490aa(param_1,param_2,&local_3c);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      param_3 = (undefined8 *)*param_3;
      FUN_140049ae4(param_3,local_38,local_3c);
      goto LAB_14004998e;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400451d8("Invalid format string.");
}

