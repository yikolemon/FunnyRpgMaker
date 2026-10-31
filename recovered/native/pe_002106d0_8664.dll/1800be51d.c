/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800be51d */

longlong FUN_1800be51d(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong local_c0;
  longlong local_b8 [10];
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if ((int)param_2 < 0 || param_3 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    uVar4 = (ulonglong)param_2;
    lVar3 = *(longlong *)*param_3;
    uVar5 = (((longlong *)*param_3)[1] - lVar3 >> 3) * -0x79435e50d79435e5;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      lVar1 = lVar3 + uVar4 * 0x98;
      local_b8[6] = 0;
      local_b8[7] = 0;
      local_b8[8] = 0;
      plVar2 = (longlong *)(lVar3 + uVar4 * 0x98);
      local_48 = param_1;
      FUN_1800bd52c(local_b8 + 6,plVar2[1] - *plVar2 >> 2,lVar1);
      local_68 = 0;
      lStack_60 = 0;
      local_58 = 0;
      FUN_1800bd612(&local_68,*(longlong *)(lVar1 + 0x28) - *(longlong *)(lVar1 + 0x20) >> 5,
                    lVar1 + 0x20,lVar1 + 0x28);
      FUN_1800bd90c(lVar1,*param_4,param_4[1] - *param_4 >> 2);
      FUN_1800bda52(lVar1 + 0x20,param_4[3],param_4[4] - param_4[3] >> 5);
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_b8[2] = 0;
      local_c0 = lVar1;
      FUN_1800bd52c(local_b8,local_b8[7] - local_b8[6] >> 2,local_b8 + 6);
      local_b8[3] = 0;
      local_b8[4] = 0;
      local_b8[5] = 0;
      FUN_1800bd612(local_b8 + 3,lStack_60 - local_68 >> 5,&local_68);
      *(undefined8 *)(local_48 + 0x38) = 0;
      local_50 = 0;
      local_50 = FUN_1800be8d6(&local_c0);
      *(undefined8 *)(local_48 + 0x38) = local_50;
      FUN_1800bd8be(local_b8 + 3);
      if (local_b8[0] != 0) {
        (*DAT_180417870)();
      }
      FUN_1800bd8be(&local_68);
      param_1 = local_48;
      if (local_b8[6] != 0) {
        (*DAT_180417870)();
        param_1 = local_48;
      }
    }
  }
  return param_1;
}

