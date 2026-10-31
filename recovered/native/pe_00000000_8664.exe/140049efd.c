/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140049efd */

char * FUN_140049efd(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    uVar2 = *(ulonglong *)(*param_3 + 0x18);
    if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140049b0a("Can not switch from manual to automatic indexing");
    }
    *(ulonglong *)(*param_3 + 0x18) = uVar2 + 1;
LAB_140049f90:
    param_3[1] = uVar2;
    if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_1c = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_14004d9e9(param_1,param_2,&local_1c);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      if (0 < *(longlong *)(*param_3 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_140049b0a("Can not switch from automatic to manual indexing");
      }
      uVar2 = (ulonglong)local_1c;
      *(undefined8 *)(*param_3 + 0x18) = 0xffffffffffffffff;
      goto LAB_140049f90;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_140049b0a("Invalid format string.");
}

