/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006d80c */

longlong * FUN_18006d80c(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_18006d914(local_40,param_1,*param_1,param_3);
  lVar2 = local_38 + 0x20;
  FUN_18006cef4(param_1,&local_70,lVar2);
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  cVar1 = FUN_18006cfae(param_1,local_60,lVar2);
  lVar2 = local_38;
  if (cVar1 == '\0') {
    if (param_1[1] == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180053f28();
    }
    local_38 = 0;
  }
  else {
    *param_2 = local_60;
    *(undefined1 *)(param_2 + 1) = 0;
    lVar2 = local_60;
  }
  FUN_18006d0ca(local_40);
  if (cVar1 == '\0') {
    local_88 = local_58;
    uStack_84 = uStack_54;
    uStack_80 = uStack_50;
    uStack_7c = uStack_4c;
    lVar2 = FUN_180053dd8(param_1,&local_88,lVar2);
    *param_2 = lVar2;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return param_2;
}

