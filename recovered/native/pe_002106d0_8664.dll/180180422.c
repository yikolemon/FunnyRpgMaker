/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180180422 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180180422(longlong param_1)

{
  undefined *puVar1;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_28;
  
  uStack_28 = 0x180180430;
  local_48 = 0xfffffffffffffffe;
  FUN_18001799f(&local_68,*(undefined4 *)(param_1 + 8));
  FUN_180018514(&local_e8,"MAP_ID",1);
  FUN_180020bbc(&local_88,&DAT_18037da16,&local_e8,&local_68,0);
  FUN_1800185bc(&local_e8);
  FUN_180001ef2(&local_68);
  puVar1 = PTR_DAT_180403bf0;
  FUN_180018514(&local_e8,"LOAD_DATA_FUNCTION_CODE",1);
  FUN_1800af03c(&local_68,&local_88,&local_e8,puVar1,0);
  FUN_180004c8c(&local_88);
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_88 = local_68;
  uStack_84 = uStack_64;
  uStack_80 = uStack_60;
  uStack_7c = uStack_5c;
  local_58 = 0;
  uStack_50 = 0xf;
  local_68 = local_68 & 0xffffff00;
  FUN_180001ef2(&local_68);
  FUN_1800185bc(&local_e8);
  FUN_180013de7(&local_68,&local_88);
  FUN_180044980(&DAT_1804193d8);
  if ((char)local_68 == '\0') {
    DAT_180403bfc = 0xfffffffe;
  }
  else if ((local_68 & 0xff) == 1) {
    FUN_180180912(&local_e8,&local_68);
    FUN_180042932(&DAT_180419470);
    DAT_180419470._0_4_ = (undefined4)local_e8;
    DAT_180419470._4_4_ = local_e8._4_4_;
    uRam0000000180419478 = (undefined4)uStack_e0;
    uRam000000018041947c = uStack_e0._4_4_;
    _DAT_180419480 = local_d8;
    local_d8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_180022ada(&DAT_180419488,local_d0);
    FUN_180004cea(&DAT_180419498);
    DAT_180419498._0_4_ = (undefined4)local_c0;
    DAT_180419498._4_4_ = local_c0._4_4_;
    DAT_1804194a0._0_4_ = (undefined4)uStack_b8;
    DAT_1804194a0._4_4_ = uStack_b8._4_4_;
    _DAT_1804194a8 = local_b0;
    local_b0 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    FUN_18017ffd8(&DAT_1804194b0);
    DAT_1804194b0._0_4_ = (undefined4)local_a8;
    DAT_1804194b0._4_4_ = local_a8._4_4_;
    DAT_1804194b8._0_4_ = (undefined4)uStack_a0;
    DAT_1804194b8._4_4_ = uStack_a0._4_4_;
    _DAT_1804194c0 = (undefined4)local_98;
    uRam00000001804194c4 = local_98._4_4_;
    DAT_1804194c8 = uStack_90;
    DAT_1804194cc = uStack_8c;
    local_98 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_18017002c(&local_e8);
    DAT_180403bfc = *(undefined4 *)(param_1 + 8);
  }
  else if ((local_68 & 0xff) == 9) {
    DAT_180403bfc = 0xfffffffd;
  }
  FUN_18023d6e0(&DAT_1804193d8);
  FUN_1800137c6(&local_68);
  FUN_180001ef2(&local_88);
  DAT_1804195e4 = 0;
  return;
}

