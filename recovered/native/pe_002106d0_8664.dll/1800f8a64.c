/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f8a64 */

void FUN_1800f8a64(longlong *param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2;
  if ((*param_1 != 0) && (((char)param_1[1] != '\x01' || (*(char *)(*param_1 + 0xb8) != '\x01')))) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_180247290(&local_38,param_2);
    FUN_1800f7664(param_1,&local_38,0);
    FUN_180247230(local_20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800f7329(4);
}

