/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018fb4c */

void FUN_1018fb4c(undefined4 param_1,undefined4 param_2,float param_3,undefined4 *param_4,
                 int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_94 [10];
  undefined4 local_6c;
  undefined4 local_68;
  uint local_5c;
  int local_58;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_94;
  if (param_4 == (undefined4 *)0x0) {
    FUN_1018e2b2();
  }
  else {
    puVar2 = auStack_94;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_4;
      param_4 = param_4 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  local_6c = param_1;
  local_68 = param_2;
  local_5c = ~-(uint)(0.0 < param_3) & local_5c | (uint)param_3 & -(uint)(0.0 < param_3);
  if (param_5 != 0) {
    local_58 = param_5;
  }
  FUN_1018f01e(auStack_94);
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_94)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

