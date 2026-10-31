/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eac44 */

longlong * FUN_1800eac44(float *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 uVar3;
  float fVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_40 [8];
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1800eae52(local_40,param_1 + 2);
  lVar2 = local_38 + 0x10;
  uVar1 = FUN_18001c5bb(*(undefined8 *)(local_38 + 0x10),*(undefined8 *)(local_38 + 0x18));
  FUN_1800eaede(param_1,&local_58,lVar2,uVar1);
  lVar2 = CONCAT44(uStack_4c,uStack_50);
  if (lVar2 == 0) {
    if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180239790("unordered_map/set too long");
    }
    fVar4 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar4 && fVar4 != *param_1) {
      FUN_1800eaf5c(param_1);
      FUN_1800eaede(param_1,&local_68,local_38 + 0x10,uVar1);
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
    }
    lVar2 = local_38;
    local_38 = 0;
    lVar2 = FUN_180034bf8(param_1,uVar1,CONCAT44(uStack_54,local_58),lVar2);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *param_2 = lVar2;
  *(undefined1 *)(param_2 + 1) = uVar3;
  FUN_18006117a(local_40);
  return param_2;
}

