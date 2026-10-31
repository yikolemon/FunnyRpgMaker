/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021bb6d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14021bb6d(char *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = ram0x000140613b10 ^ (ulonglong)auStack_68;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    param_3 = (undefined8 *)*param_3;
    FUN_14021bcba(param_3,local_38);
LAB_14021bc08:
    uVar2 = FUN_14021bc4e(local_38);
    *(undefined4 *)*param_3 = uVar2;
    if (ram0x000140613b10 == (local_20 ^ (ulonglong)auStack_68)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_20 ^ (ulonglong)auStack_68);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_3c = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_14021b324(param_1,param_2,&local_3c);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      param_3 = (undefined8 *)*param_3;
      FUN_14021bd5e(param_3,local_38,local_3c);
      goto LAB_14021bc08;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("ne.");
}

