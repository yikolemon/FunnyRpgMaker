/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bc3c5 */

undefined8 FUN_1800bc3c5(undefined8 param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  if ((int)param_2 < 0 || param_3 == (longlong *)0x0) {
    FUN_1800bc564(param_1);
  }
  else {
    uVar2 = (ulonglong)param_2;
    lVar1 = *(longlong *)*param_3;
    uVar3 = (((longlong *)*param_3)[1] - lVar1 >> 4) * 0x2e8ba2e8ba2e8ba3;
    if (uVar3 < uVar2 || uVar3 - uVar2 == 0) {
      FUN_1800bc564(param_1);
    }
    else {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      plVar4 = (longlong *)(lVar1 + uVar2 * 0xb0);
      FUN_1800a2f9e(&local_58,*plVar4,plVar4[1] - *plVar4 >> 2);
      FUN_1800bc7d4(&local_40,plVar4[4],plVar4[5] - plVar4[4] >> 5);
      FUN_1800bc5ac(param_1,&local_58);
      FUN_180060538(&local_40);
      FUN_180004cea(&local_58);
    }
  }
  return param_1;
}

