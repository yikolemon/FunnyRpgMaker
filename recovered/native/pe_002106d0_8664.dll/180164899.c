/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180164899 */

void FUN_180164899(void)

{
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 *local_48;
  undefined8 **local_40;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1802a82f0(&local_1d8,&PTR_DAT_1802df400,400);
  local_40 = &local_48;
  local_48 = &local_1d8;
  FUN_18005a110(&DAT_1804192a0);
  FUN_18023d710(FUN_18015aaf4);
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  FUN_180002d74(&local_1d8);
  local_21 = 1;
  FUN_180001e92(&local_48,"Game/ts_rgmk_uxow.bin");
  local_22 = 0;
  FUN_1800cc381(&DAT_1804192b0,&local_48,&local_1d8);
  local_22 = 0;
  FUN_180001ef2(&local_48);
  local_21 = 0;
  FUN_18023d710(&LAB_18015ab27);
  FUN_18005acf6(&DAT_1804192d0);
  FUN_18023d710(FUN_18015ab33);
  FUN_1800247f0(&DAT_180419300);
  FUN_18023d710(FUN_18015aba5);
  return;
}

