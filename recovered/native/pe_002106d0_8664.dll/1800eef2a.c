/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800eef2a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800eef2a(void)

{
  undefined8 *puVar1;
  undefined1 local_1d0 [400];
  undefined1 *local_40;
  undefined1 **local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1802a82f0(local_1d0,&PTR_DAT_1802dbce0,400);
  local_38 = &local_40;
  local_40 = local_1d0;
  FUN_18005a110(&DAT_180418880);
  FUN_18023d710(FUN_1800e1c28);
  FUN_18023d710(&LAB_1800e1c5b);
  FUN_1800e1c68(&DAT_1804188a0);
  FUN_18023d710(FUN_1800e1f28);
  FUN_1800e1c68(&DAT_1804189d0);
  FUN_18023d710(FUN_1800e1fe9);
  DAT_180418b00 = 0x3a4;
  DAT_180418b04 = 0x3a8;
  _DAT_180418b10 = 0;
  uRam0000000180418b18 = 0;
  _DAT_180418b20 = 0;
  uRam0000000180418b28 = 0;
  _DAT_180418b30 = 0;
  uRam0000000180418b38 = 0;
  _DAT_180418b40 = 0;
  uRam0000000180418b48 = 0;
  _DAT_180418b50 = 0xffffffff;
  _DAT_180418b08 = 2;
  _DAT_180418b54 = 0;
  DAT_180418b58._0_4_ = 0;
  DAT_180418b58._4_4_ = 0;
  uRam0000000180418b60 = 0;
  _DAT_180418b64 = 0;
  uRam0000000180418b6c = 0;
  _DAT_180418b70 = 0;
  uRam0000000180418b74 = 0;
  uRam0000000180418b78 = 0;
  puVar1 = (undefined8 *)FUN_180239630(0x10);
  puVar1[1] = 0;
  DAT_180418b58._0_4_ = SUB84(puVar1,0);
  DAT_180418b58._4_4_ = (undefined4)((ulonglong)puVar1 >> 0x20);
  *puVar1 = &DAT_180418b58;
  _DAT_180418b80 = 0;
  uRam0000000180418b88 = 0;
  _DAT_180418b90 = 0;
  FUN_18023d710(FUN_1800e20aa);
  FUN_1800e2138(&DAT_180418b98);
  FUN_18023d710(&LAB_1800e236b);
  return;
}

