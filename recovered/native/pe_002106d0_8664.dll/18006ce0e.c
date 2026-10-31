/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006ce0e */

undefined8 * FUN_18006ce0e(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_18006cef4(param_1,&local_48);
  local_58 = local_48;
  uStack_54 = uStack_44;
  uStack_50 = (undefined4)uStack_40;
  uStack_4c = uStack_40._4_4_;
  cVar2 = FUN_18006cfae(param_1,local_38,param_3);
  if (cVar2 == '\0') {
    if (param_1[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180053f28();
    }
    FUN_18006d024(&local_48,param_1,*param_1,param_3);
    uVar1 = uStack_40;
    uStack_40 = 0;
    FUN_18006d0ca(&local_48);
    local_68 = local_58;
    uStack_64 = uStack_54;
    uStack_60 = uStack_50;
    uStack_5c = uStack_4c;
    local_38 = FUN_180053dd8(param_1,&local_68,uVar1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *param_2 = local_38;
  *(undefined1 *)(param_2 + 1) = uVar3;
  return param_2;
}

