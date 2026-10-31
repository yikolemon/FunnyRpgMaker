/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180196fa8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180196fa8(undefined8 param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined8 local_c0;
  char local_b8 [54];
  undefined1 local_82;
  float local_7c;
  float local_64;
  float local_44;
  byte local_40;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) {
    FUN_180195a16(local_b8);
    local_82 = 1;
  }
  else {
    FUN_1802a82f0(local_b8,param_2,0xa0);
  }
  fVar1 = local_7c;
  if (local_7c <= 0.0) {
    local_7c = 13.0;
    local_40 = local_40 | 0x10;
    fVar1 = DAT_1802de928;
  }
  if (local_b8[0] == '\0') {
    FUN_1800fead5(local_b8,0x28,"ProggyForever.ttf");
    fVar1 = local_7c;
  }
  local_c8 = local_b8;
  local_44 = local_44 * _DAT_180327374;
  local_64 = DAT_180327378 * fVar1 * DAT_1802dbb2c + local_64;
  local_c0 = 0;
  FUN_1801971be(param_1,&DAT_180323270);
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_e8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_e8);
}

