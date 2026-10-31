/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f03bc */

void FUN_1800f03bc(void)

{
  longlong lVar1;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  uint local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [32];
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_18019da0c();
  FUN_180001e04(local_58,"Game.ini",0);
  FUN_1800c8ca5(&local_38,0);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = local_38;
  uStack_74 = uStack_34;
  uStack_70 = uStack_30;
  uStack_6c = uStack_2c;
  local_28 = 0;
  uStack_20 = 7;
  local_38 = local_38 & 0xffff0000;
  FUN_180001bd8(&local_78,local_98);
  FUN_180001c90(local_b8,local_98,local_58);
  FUN_180001e4c(local_98);
  FUN_180001e4c(&local_78);
  FUN_1800010ec(&local_38);
  FUN_180001e4c(local_58);
  FUN_1800e54c8(local_58,local_b8);
  lVar1 = FUN_180014660(local_58,"SoftModeFlag=0",0);
  DAT_180418d24 = lVar1 == -1;
  local_18 = (undefined8 *)FUN_180239630(8);
  *local_18 = WolfRpgGameUI::vftable;
  FUN_1800e239d(local_18);
  FUN_180001ef2(local_58);
  FUN_180001e4c(local_b8);
  return;
}

