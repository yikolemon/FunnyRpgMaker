/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14006f1c0 */

longlong * FUN_14006f1c0(float *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
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
  FUN_140071414(local_40,param_1 + 2);
  lVar3 = local_38 + 0x10;
  uVar1 = FUN_140070a42(lVar3);
  FUN_1400713c8(param_1,&local_58,lVar3,uVar1);
  lVar3 = CONCAT44(uStack_4c,uStack_50);
  if (lVar3 == 0) {
    if (*(longlong *)(param_1 + 4) == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
      FUN_140189890("unordered_map/set too long");
    }
    fVar4 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar4 && fVar4 != *param_1) {
      FUN_140071490(param_1);
      FUN_1400713c8(param_1,&local_68,local_38 + 0x10,uVar1);
      local_58 = local_68;
      uStack_54 = uStack_64;
      uStack_50 = uStack_60;
      uStack_4c = uStack_5c;
    }
    lVar3 = local_38;
    local_38 = 0;
    lVar3 = FUN_14002a77c(param_1,uVar1,CONCAT44(uStack_54,local_58),lVar3);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  *param_2 = lVar3;
  *(undefined1 *)(param_2 + 1) = uVar2;
  FUN_14007152a(local_40);
  return param_2;
}

