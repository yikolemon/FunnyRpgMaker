/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021bd9b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14021bd9b(char *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    FUN_14021be54(*param_3);
LAB_14021be1b:
    if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_24 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_14021b324(param_1,param_2,&local_24);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      FUN_14021bfa2(*param_3,local_24);
      goto LAB_14021be1b;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("ne.");
}

