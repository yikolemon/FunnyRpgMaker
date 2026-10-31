/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800b085e */

longlong * FUN_1800b085e(float *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar3 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar3 = (undefined8 *)*param_3;
  }
  uVar1 = FUN_18001c5bb(puVar3,param_3[2]);
  FUN_180043870(param_1,&local_58,param_3,uVar1);
  if (CONCAT44(uStack_4c,uStack_50) == 0) {
    if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
      FUN_180239790("unordered_map/set too long");
    }
    FUN_1800b09e0(local_48,param_1 + 2,param_3);
    fVar4 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar4 && fVar4 != *param_1) {
      FUN_1800ae5d8(param_1);
      FUN_180043870(param_1,&local_68,local_40 + 0x10,uVar1);
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
    }
    lVar2 = local_40;
    local_40 = 0;
    lVar2 = FUN_180034bf8(param_1,uVar1,CONCAT44(uStack_54,local_58),lVar2);
    *param_2 = lVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    FUN_1800ae672(local_48);
  }
  else {
    *param_2 = CONCAT44(uStack_4c,uStack_50);
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

