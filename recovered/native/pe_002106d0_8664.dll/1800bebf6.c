/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800bebf6 */

longlong FUN_1800bebf6(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  undefined8 local_70;
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
    uVar1 = (ulonglong)param_2;
    lVar4 = *(longlong *)(*param_3 + 8);
    uVar2 = (*(longlong *)(*param_3 + 0x10) - lVar4 >> 3) * -0x30c30c30c30c30c3;
    if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else {
      lVar3 = uVar1 * 0xa8;
      local_90 = *(undefined8 *)(lVar4 + lVar3);
      local_88 = 0;
      lStack_80 = 0;
      local_78 = 0;
      local_48 = param_1;
      FUN_1800bf0a6(&local_90,
                    *(longlong *)(lVar4 + lVar3 + 0x10) - *(longlong *)(lVar4 + lVar3 + 8) >> 2);
      lVar4 = lVar4 + lVar3;
      local_70 = *(undefined8 *)(lVar4 + 0x28);
      local_68 = 0;
      lStack_60 = 0;
      local_58 = 0;
      FUN_1800bf190(&local_70,
                    (*(longlong *)(lVar4 + 0x38) - *(longlong *)(lVar4 + 0x30) >> 3) *
                    -0x3333333333333333,lVar4 + 0x30,lVar4 + 0x38);
      FUN_1800bf4ae(lVar4,*param_4,param_4[1] - *param_4 >> 2);
      FUN_1800bf602(lVar4 + 0x28,param_4[3],param_4[4] - param_4[3] >> 5);
      local_d0 = local_90;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_d8 = lVar4;
      FUN_1800bf0a6(&local_d0,lStack_80 - local_88 >> 2);
      local_b0 = local_70;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = 0;
      FUN_1800bf190(&local_b0,(lStack_60 - local_68 >> 3) * -0x3333333333333333);
      *(undefined8 *)(local_48 + 0x38) = 0;
      local_50 = 0;
      local_50 = FUN_1800bfab8(&local_d8);
      *(undefined8 *)(local_48 + 0x38) = local_50;
      FUN_1800bf45a(&local_b0);
      if (local_c8 != 0) {
        (*DAT_180417870)();
      }
      FUN_1800bf45a(&local_70);
      param_1 = local_48;
      if (local_88 != 0) {
        (*DAT_180417870)();
        param_1 = local_48;
      }
    }
  }
  return param_1;
}

