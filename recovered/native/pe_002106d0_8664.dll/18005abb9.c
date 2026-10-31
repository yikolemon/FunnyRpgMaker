/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005abb9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18005abb9(void)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = local_44;
  local_58 = _DAT_1802b7140;
  uStack_50 = _UNK_1802b7148;
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_40 = &local_58;
  FUN_1800448ea(&local_38,0x14);
  local_18 = (undefined1 *)CONCAT44(local_18._4_4_,0x10);
  FUN_18005a854(&DAT_180417c68,&local_38);
  FUN_180004cea(&local_38);
  FUN_18023d710(FUN_18005ac67);
  return;
}

