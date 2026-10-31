/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14011a352 */

longlong * FUN_14011a352(float *param_1,longlong *param_2,double *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  float fVar3;
  double *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [8];
  longlong local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = (double *)(~-(ulonglong)(*param_3 == 0.0) & (ulonglong)*param_3);
  uVar1 = FUN_140070a42();
  FUN_14011a2fe(param_1,&local_68,param_3,uVar1);
  if (CONCAT44(uStack_5c,uStack_60) == 0) {
    if (*(longlong *)(param_1 + 4) == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_140189890("unordered_map/set too long");
    }
    local_78 = param_3;
    FUN_14011a4fe(local_50,param_1 + 2,&DAT_1401c8f3c,&local_78,&local_39);
    fVar3 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    if (*param_1 <= fVar3 && fVar3 != *param_1) {
      FUN_14011a57e(param_1);
      FUN_14011a2fe(param_1,&local_78,local_48 + 0x10,uVar1);
      local_68 = local_78;
      uStack_60 = uStack_70;
      uStack_5c = uStack_6c;
    }
    lVar2 = local_48;
    local_48 = 0;
    lVar2 = FUN_14002a77c(param_1,uVar1,local_68,lVar2);
    *param_2 = lVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    FUN_1400716b2(local_50);
  }
  else {
    *param_2 = CONCAT44(uStack_5c,uStack_60);
    *(undefined1 *)(param_2 + 1) = 0;
  }
  return param_2;
}

