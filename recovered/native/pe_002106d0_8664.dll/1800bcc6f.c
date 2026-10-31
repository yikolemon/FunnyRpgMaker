/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bcc6f */

undefined8 FUN_1800bcc6f(undefined8 param_1,uint param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
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
    uVar1 = (ulonglong)param_2;
    lVar3 = *(longlong *)(*param_3 + 8);
    uVar2 = (*(longlong *)(*param_3 + 0x10) - lVar3 >> 3) * -0x30c30c30c30c30c3;
    if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
      FUN_1800bc564(param_1);
    }
    else {
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_30 = 0;
      lVar3 = lVar3 + uVar1 * 0xa8;
      FUN_1800a2f9e(&local_58,*(longlong *)(lVar3 + 8),
                    *(longlong *)(lVar3 + 0x10) - *(longlong *)(lVar3 + 8) >> 2);
      FUN_1800bce1e(&local_40,*(longlong *)(lVar3 + 0x30),
                    (*(longlong *)(lVar3 + 0x38) - *(longlong *)(lVar3 + 0x30) >> 3) *
                    -0x3333333333333333);
      FUN_1800bc5ac(param_1,&local_58);
      FUN_180060538(&local_40);
      FUN_180004cea(&local_58);
    }
  }
  return param_1;
}

