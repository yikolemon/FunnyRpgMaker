/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b139 */

char * FUN_1000b139(char *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 *local_18;
  undefined4 local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_18;
  if ((byte)(*param_1 - 0x31U) < 9) {
    local_14 = 0;
    param_1 = (char *)FUN_1000ae8c(param_1,param_2,&local_14);
    *(undefined4 *)*param_3 = local_14;
  }
  else if (*param_1 == '{') {
    param_1 = param_1 + 1;
    if (param_1 != param_2) {
      local_18 = param_3;
      param_1 = (char *)FUN_1000b6e3(param_1,param_2,&local_18);
    }
    if ((param_1 == param_2) || (*param_1 != '}')) {
                    /* WARNING: Subroutine does not return */
      FUN_10006198("Invalid format string.");
    }
    param_1 = param_1 + 1;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_18)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

