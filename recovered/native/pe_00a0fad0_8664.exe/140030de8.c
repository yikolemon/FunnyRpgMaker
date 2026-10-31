/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140030de8 */

ulonglong FUN_140030de8(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  undefined7 uVar3;
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
  undefined4 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  uVar1 = *(undefined1 *)(param_1 + 0x21);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_20 = param_2;
  FUN_140020d68(&local_68,*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) >> 5,
                param_1 + 0x28,param_1 + 0x30);
  local_48 = *local_20;
  uStack_44 = local_20[1];
  uStack_40 = local_20[2];
  uStack_3c = local_20[3];
  local_38 = local_20[4];
  uStack_34 = local_20[5];
  uStack_30 = local_20[6];
  uStack_2c = local_20[7];
  *(undefined8 *)(local_20 + 4) = 0;
  *(undefined8 *)(local_20 + 6) = 0xf;
  *(undefined1 *)local_20 = 0;
  lVar2 = FUN_14002650f(&local_48,&local_68,CONCAT71(uVar3,uVar1) & 0xffffffff,0);
  FUN_1400017de(local_20);
  return CONCAT71(uVar3,-1 < lVar2) & 0xffffffff;
}

