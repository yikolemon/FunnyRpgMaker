/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180185d40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180185d40(void)

{
  undefined8 ***pppuVar1;
  char *pcVar2;
  undefined8 ****ppppuVar3;
  undefined *local_140;
  undefined8 local_138;
  undefined8 ***local_130;
  undefined8 local_128;
  char *local_120;
  undefined8 local_118;
  char *local_110;
  char *local_108;
  undefined4 local_f8 [2];
  undefined1 local_f0 [32];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 ***local_98;
  undefined8 ***pppuStack_90;
  undefined8 local_88;
  ulonglong local_80;
  char *local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_98 = (undefined8 ****)0x0;
  pppuStack_90 = (undefined8 ****)0x0;
  FUN_180001e92(local_f8,"$dataCommonEvents");
  FUN_180013de7(&local_70,local_f8);
  FUN_1800dcf0b(&local_110,&local_70,&local_98);
  FUN_1800137c6(&local_70);
  FUN_180001ef2(local_f8);
  for (pcVar2 = local_110; pcVar2 != local_108; pcVar2 = pcVar2 + 0x10) {
    if (*pcVar2 == '\x01') {
      local_140 = &DAT_18036a525;
      local_138 = 2;
      FUN_1800df105(&local_70,pcVar2,&local_140);
      local_98 = (undefined8 ***)((ulonglong)local_98 & 0xffffffff00000000);
      FUN_180057604(&DAT_1802b0ea8,&local_70,&local_98);
      local_f8[0] = local_98._0_4_;
      local_120 = "name";
      local_118 = 4;
      FUN_1800dfa68(&local_98,pcVar2,&local_120);
      local_130 = &local_98;
      if (0xf < local_80) {
        local_130 = local_98;
      }
      local_128 = local_88;
      FUN_18015ace8(local_f0,&local_130);
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      FUN_180001ef2(&local_98);
      FUN_1800137c6(&local_70);
      local_70 = "list";
      local_68 = 4;
      FUN_1800dcf0b(&local_98,pcVar2,&local_70);
      pppuVar1 = pppuStack_90;
      for (ppppuVar3 = (undefined8 ****)local_98; ppppuVar3 != (undefined8 ****)pppuVar1;
          ppppuVar3 = ppppuVar3 + 2) {
        FUN_180182b78(&local_d0,ppppuVar3);
      }
      FUN_180016e50(&local_98);
      FUN_180186380(&local_b8,local_f8);
      FUN_18017ff14(&local_d0);
      FUN_180001ef2(local_f0);
    }
  }
  FUN_180016e50(&local_110);
  FUN_180044980(&DAT_1804193d8);
  FUN_18017fd9e(&DAT_180419450);
  DAT_180419450 = local_b8;
  DAT_180419458 = uStack_b0;
  _DAT_180419460 = local_a8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  FUN_18023d6e0(&DAT_1804193d8);
  FUN_18017fd9e(&local_b8);
  return;
}

