/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14010489e */

void FUN_14010489e(longlong param_1)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_58 [32];
  float local_38;
  char *local_30;
  undefined4 local_28;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  FUN_140092718(0x228,0x40000);
  FUN_1400aeb6a("Grid",param_1 + 8);
  FUN_140092bab(0,DAT_1401c86a4);
  fVar2 = (float)FUN_14008ff20();
  FUN_140079071(fVar2 * DAT_1401c86d0);
  local_14 = *(float *)(param_1 + 0x14) * DAT_1402114b0;
  local_38 = *(float *)(param_1 + 0x1c) * DAT_1402114b0;
  local_30 = "%.0f%%";
  local_28 = 0x600;
  cVar1 = FUN_1400b61f2("##Zoom",&local_14,DAT_1401c86c0,DAT_1402114b0 * *(float *)(param_1 + 0x18))
  ;
  if (cVar1 != '\0') {
    *(float *)(param_1 + 0x14) = local_14 / DAT_1402114b0;
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_58);
}

