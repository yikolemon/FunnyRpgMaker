/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14002a460 */

longlong * FUN_14002a460(float *param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [8];
  longlong local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  uVar1 = FUN_14002a847(param_3);
  FUN_14002a5e6(param_1,&local_68,param_3,uVar1);
  if (CONCAT44(uStack_5c,uStack_60) == 0) {
    if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_140189890("unordered_map/set too long");
    }
    local_78 = param_3;
    FUN_14002a630(local_50,param_1 + 2,&DAT_1401c8f3c,&local_78,&local_39);
    fVar3 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar3 && fVar3 != *param_1) {
      FUN_14002a6e2(param_1);
      FUN_14002a5e6(param_1,&local_78,local_48 + 0x10,uVar1);
      local_68 = (undefined4)local_78;
      uStack_64 = local_78._4_4_;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
    }
    lVar2 = local_48;
    local_48 = 0;
    lVar2 = FUN_14002a77c(param_1,uVar1,CONCAT44(uStack_64,local_68),lVar2);
    *param_2 = lVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    FUN_14002a7c8(local_50);
  }
  else {
    *param_2 = CONCAT44(uStack_5c,uStack_60);
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

