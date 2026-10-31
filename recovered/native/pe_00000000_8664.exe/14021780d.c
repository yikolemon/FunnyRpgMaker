/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14021780d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_14021780d(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    uVar2 = *(ulonglong *)(*param_3 + 0x18);
    if ((longlong)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14021738c("isplaySize: %.2f,%.2f");
    }
    *(ulonglong *)(*param_3 + 0x18) = uVar2 + 1;
LAB_1402178a0:
    param_3[1] = uVar2;
    if (ram0x000140613b10 == (local_18 ^ (ulonglong)auStack_48)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14044aba0(local_18 ^ (ulonglong)auStack_48);
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_1c = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_14021b324(param_1,param_2,&local_1c);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      if (0 < *(longlong *)(*param_3 + 0x18)) {
                    /* WARNING: Subroutine does not return */
        FUN_14021738c("cing: %.2f,%.2f");
      }
      uVar2 = (ulonglong)local_1c;
      *(undefined8 *)(*param_3 + 0x18) = 0xffffffffffffffff;
      goto LAB_1402178a0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14021738c("ne.");
}

