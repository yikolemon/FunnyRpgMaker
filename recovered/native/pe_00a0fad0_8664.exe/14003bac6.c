/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003bac6 */

undefined8 FUN_14003bac6(undefined8 param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 local_1b0 [8];
  undefined1 local_1a8 [224];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_68 = param_4;
  FUN_140019bc0(local_1b0,1);
  plVar3 = (longlong *)*param_2;
  plVar1 = (longlong *)param_2[1];
  FUN_14003cda6(local_1b0,&local_88);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    FUN_14003cda6(local_1b0,&local_a0);
    if (CONCAT44(uStack_7c,uStack_80) + CONCAT44(uStack_84,local_88) <
        CONCAT44(uStack_94,uStack_98) + CONCAT44(uStack_9c,local_a0)) {
      FUN_1400058b9(local_1b0,local_68);
      local_78 = local_90;
      local_88 = local_a0;
      uStack_84 = uStack_9c;
      uStack_80 = uStack_98;
      uStack_7c = uStack_94;
    }
    lVar2 = *plVar3;
    if ((lVar2 == *(longlong *)(param_3 + 0x210)) || (lVar2 == *(longlong *)(param_3 + 0x218))) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      local_b0 = 0xf;
    }
    else {
      FUN_14001190c(lVar2,&local_c8,0,1);
    }
    FUN_1400058b9(local_1b0,&local_c8);
    FUN_1400017de(&local_c8);
  }
  FUN_1400170f8(local_1a8,param_1);
  FUN_140019cf4(local_1b0);
  FUN_1400017de(local_68);
  return param_1;
}

