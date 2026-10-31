/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bec1a */

void FUN_1801bec1a(longlong param_1)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  float local_38;
  char *local_30;
  undefined4 local_28;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_180402640 ^ (ulonglong)auStack_58;
  FUN_180119400(0x228,0x40000);
  FUN_180135c3a("Grid",param_1 + 8);
  FUN_180119893(0,DAT_1802bb8e0);
  fVar2 = (float)FUN_180116c08();
  FUN_1800ffdb5(fVar2 * DAT_1802dc2dc);
  local_14 = *(float *)(param_1 + 0x14) * DAT_1802dbb34;
  local_38 = *(float *)(param_1 + 0x1c) * DAT_1802dbb34;
  local_30 = "%.0f%%";
  local_28 = 0x600;
  cVar1 = FUN_18013d2c2("##Zoom",&local_14,DAT_1802dc2d0,DAT_1802dbb34 * *(float *)(param_1 + 0x18))
  ;
  if (cVar1 != '\0') {
    *(float *)(param_1 + 0x14) = local_14 / DAT_1802dbb34;
  }
  if (DAT_180402640 == (local_10 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_10 ^ (ulonglong)auStack_58);
}

