/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1402d75dc */

undefined8 FUN_1402d75dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1402d76a8(param_1,&local_48,param_2,param_3);
  uVar1 = local_40;
  if ((local_38 & 1) == 0) {
    if (param_1[1] == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
      FUN_1402653f8();
    }
    FUN_1402d793c(&local_48,param_1,*param_1,param_3);
    uVar2 = local_40;
    local_40 = 0;
    FUN_14027887a(&local_48);
    local_58 = local_48;
    local_50 = uVar1;
    local_48 = FUN_1402652a8(param_1,&local_58,uVar2);
  }
  return local_48;
}

