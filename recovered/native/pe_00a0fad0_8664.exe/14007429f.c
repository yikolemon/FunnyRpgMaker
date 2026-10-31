/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007429f */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007429f(void)

{
  longlong lVar1;
  undefined1 local_70 [32];
  undefined1 local_50 [32];
  longlong local_30;
  undefined1 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = local_70;
  FUN_14000f628(local_28,L"Game.exe");
  local_28 = local_50;
  FUN_14000f628(local_50,L"GamePro.exe");
  DAT_1401cc1e0 = 0;
  DAT_1401cc1e8 = 0;
  _DAT_1401cc1f0 = 0;
  local_28 = local_50;
  FUN_1400411ce(&DAT_1401cc1e0,2);
  lVar1 = 0;
  do {
    local_30 = lVar1;
    FUN_140005242(local_50 + lVar1);
    lVar1 = local_30 + -0x20;
  } while (lVar1 != -0x40);
  FUN_1400d3740(&LAB_140051e84);
  return;
}

