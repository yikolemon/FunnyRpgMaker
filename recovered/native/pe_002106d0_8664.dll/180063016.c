/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180063016 */

longlong * FUN_180063016(float *param_1,longlong *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [8];
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar3 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar3 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_18001c5bb(puVar3,param_3[2]);
  FUN_180043870(param_1,&local_68,param_3,uVar1);
  if (CONCAT44(uStack_5c,uStack_60) == 0) {
    if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_180239790("unordered_map/set too long");
    }
    FUN_1800667da(local_50,param_1 + 2,param_3,param_4);
    fVar4 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar4 && fVar4 != *param_1) {
      FUN_18006686a(param_1);
      FUN_180043870(param_1,&local_78,local_48 + 0x10,uVar1);
      local_68 = local_78;
      uStack_64 = uStack_74;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
    }
    lVar2 = local_48;
    local_48 = 0;
    lVar2 = FUN_180034bf8(param_1,uVar1,CONCAT44(uStack_64,local_68),lVar2);
    *param_2 = lVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    FUN_180066904(local_50);
  }
  else {
    *param_2 = CONCAT44(uStack_5c,uStack_60);
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

