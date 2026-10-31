/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400aef14 */

undefined8 FUN_1400aef14(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  byte local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1400aefe0(param_1,&local_48,param_2,param_3);
  uVar1 = local_40;
  if ((local_38 & 1) == 0) {
    if (param_1[1] == 0x2aaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_14000fcec();
    }
    FUN_1400af19c(&local_48,param_1,*param_1,param_3);
    uVar2 = local_40;
    local_40 = 0;
    FUN_1400af242(&local_48);
    local_58 = local_48;
    local_50 = uVar1;
    local_48 = FUN_14000fb9c(param_1,&local_58,uVar2);
  }
  return local_48;
}

