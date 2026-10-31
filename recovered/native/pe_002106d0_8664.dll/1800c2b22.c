/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c2b22 */

longlong * FUN_1800c2b22(float *param_1,longlong *param_2,undefined8 param_3)

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
  uVar1 = FUN_1800611df(param_3);
  FUN_18006101a(param_1,&local_68,param_3,uVar1);
  if (CONCAT44(uStack_5c,uStack_60) == 0) {
    if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_180239790("unordered_map/set too long");
    }
    local_78 = param_3;
    FUN_1800c2ca8(local_50,param_1 + 2,&DAT_1802b2a08,&local_78,&local_39);
    fVar3 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar3 && fVar3 != *param_1) {
      FUN_1800c2d2a(param_1);
      FUN_18006101a(param_1,&local_78,local_48 + 0x10,uVar1);
      local_68 = (undefined4)local_78;
      uStack_64 = local_78._4_4_;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
    }
    lVar2 = local_48;
    local_48 = 0;
    lVar2 = FUN_180034bf8(param_1,uVar1,CONCAT44(uStack_64,local_68),lVar2);
    *param_2 = lVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    FUN_1800c2dc4(local_50);
  }
  else {
    *param_2 = CONCAT44(uStack_5c,uStack_60);
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

