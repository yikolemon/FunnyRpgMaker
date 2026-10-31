/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ae770 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ae770(void)

{
  longlong lVar1;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined8 *local_c8 [4];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 ***local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  longlong local_50;
  undefined8 **local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  local_48 = (undefined8 **)local_168;
  FUN_14000f628(local_48,L".wolf");
  local_48 = (undefined8 **)local_148;
  FUN_14000f628(local_148,L".data");
  local_48 = (undefined8 **)local_128;
  FUN_14000f628(local_128,L".pak");
  local_48 = (undefined8 **)local_108;
  FUN_14000f628(local_108,L".bin");
  local_48 = (undefined8 **)local_e8;
  FUN_14000f628(local_e8,L".assets");
  local_48 = local_c8;
  FUN_14000f628(local_c8,L".content");
  local_48 = (undefined8 **)local_a8;
  FUN_14000f628(local_48,L".res");
  local_48 = (undefined8 **)local_88;
  FUN_14000f628(local_88,L".resource");
  local_60 = local_168;
  local_68 = &local_68;
  DAT_1401cc980 = 0;
  DAT_1401cc988 = 0;
  _DAT_1401cc990 = 0;
  local_48 = (undefined8 **)local_88;
  FUN_1400411ce(&DAT_1401cc980,8);
  lVar1 = 0xc0;
  do {
    local_50 = lVar1;
    FUN_140005242(local_148 + lVar1);
    lVar1 = local_50 + -0x20;
  } while (lVar1 != -0x40);
  FUN_1400d3740(&LAB_1400ae14c);
  local_58 = local_168;
  FUN_14000f628(local_58,L"Game");
  local_58 = local_148;
  FUN_14000f628(local_148,L"List");
  local_58 = local_128;
  FUN_14000f628(local_128,L"Data2");
  local_58 = local_108;
  FUN_14000f628(local_108,L"GameFile");
  local_58 = local_e8;
  FUN_14000f628(local_e8,L"BasicData2");
  DAT_1401cc998 = 0;
  DAT_1401cc9a0 = 0;
  _DAT_1401cc9a8 = 0;
  local_60 = local_168;
  local_68 = (undefined8 ***)local_c8;
  local_58 = local_e8;
  FUN_1400411ce(&DAT_1401cc998,5);
  lVar1 = 0x60;
  do {
    local_50 = lVar1;
    FUN_140005242(local_148 + lVar1);
    lVar1 = local_50 + -0x20;
  } while (lVar1 != -0x40);
  FUN_1400d3740(&LAB_1400ae158);
  FUN_1400d3740(&LAB_1400ae164);
  return;
}

