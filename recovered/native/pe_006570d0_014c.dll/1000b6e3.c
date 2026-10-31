/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b6e3 */

char * FUN_1000b6e3(char *param_1,char *param_2)

{
  char cVar1;
  undefined4 local_18;
  undefined1 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  cVar1 = *param_1;
  if ((cVar1 == '}') || (cVar1 == ':')) {
    FUN_1000b790(local_14);
LAB_1000b762:
    if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  if ((byte)(cVar1 - 0x30U) < 10) {
    local_18 = 0;
    if (cVar1 == '0') {
      param_1 = param_1 + 1;
    }
    else {
      param_1 = (char *)FUN_1000ae8c(param_1,param_2,&local_18);
    }
    if ((param_1 != param_2) && ((*param_1 == ':' || (*param_1 == '}')))) {
      FUN_1000b914(local_18);
      goto LAB_1000b762;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10006198("Invalid format string.");
}

