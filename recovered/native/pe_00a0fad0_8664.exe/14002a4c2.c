/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14002a4c2 */

ulonglong FUN_14002a4c2(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_2;
  if (*(longlong *)(param_1 + 0x70) == *(longlong *)(param_1 + 0x78)) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x21);
    uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
    uVar2 = *(undefined1 *)(param_1 + 0x22);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    FUN_140020d68(&local_68,*(longlong *)(param_1 + 0x78) - *(longlong *)(param_1 + 0x70) >> 5,
                  param_1 + 0x70,param_1 + 0x78);
    local_48 = *local_28;
    uStack_44 = local_28[1];
    uStack_40 = local_28[2];
    uStack_3c = local_28[3];
    local_38 = local_28[4];
    uStack_34 = local_28[5];
    uStack_30 = local_28[6];
    uStack_2c = local_28[7];
    *(undefined8 *)(local_28 + 4) = 0;
    *(undefined8 *)(local_28 + 6) = 0xf;
    *(undefined1 *)local_28 = 0;
    lVar3 = FUN_14002650f(&local_48,&local_68,CONCAT71(uVar5,uVar1) & 0xffffffff,
                          CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar2) & 0xffffffff);
    uVar4 = CONCAT71(uVar5,-1 < lVar3);
  }
  FUN_1400017de(local_28);
  return uVar4 & 0xffffffff;
}

