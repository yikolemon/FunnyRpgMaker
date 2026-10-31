/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f7664 */

void FUN_1800f7664(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  lVar1 = *param_1;
  local_28 = param_2;
  if ((lVar1 != 0) && (((char)param_1[1] != '\x01' || (*(char *)(lVar1 + 0xb8) != '\x01')))) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_180247290(&local_38,param_2);
    FUN_1800f779c(lVar1,&local_38,param_3);
    FUN_180247230(local_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1800f7329(4);
}

