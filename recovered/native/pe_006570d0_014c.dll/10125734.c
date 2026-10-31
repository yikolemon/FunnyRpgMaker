/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10125734 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10125734(undefined4 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  float10 fVar5;
  float local_40;
  float local_3c;
  uint local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  iVar2 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  local_38 = param_2;
  fVar5 = (float10)FUN_101155f9();
  local_3c = (float)fVar5;
  local_40 = *(float *)(iVar2 + 0xd24) + local_3c;
  bVar1 = false;
  local_34 = param_1;
  local_30 = local_3c;
  FUN_100fdb2e(&local_2c,param_1,0,0,0xbf800000);
  uVar3 = local_38;
  local_1c = local_40 + local_2c;
  local_18 = local_3c;
  FUN_1012c54c();
  if (uVar3 == 1) {
    if (*(int *)(iVar2 + 0x27d4) < 1) {
      bVar1 = false;
    }
    else {
      local_2c = (_DAT_102b8dd0 - *(float *)(iVar2 + 0xe00)) * _DAT_102b90c0 +
                 *(float *)(iVar2 + 0xe00);
      fStack_28 = (_UNK_102b8dd4 - *(float *)(iVar2 + 0xe04)) * _UNK_102b90c4 +
                  *(float *)(iVar2 + 0xe04);
      fStack_24 = (_UNK_102b8dd8 - *(float *)(iVar2 + 0xe08)) * _UNK_102b90c8 +
                  *(float *)(iVar2 + 0xe08);
      fStack_20 = (_UNK_102b8ddc - *(float *)(iVar2 + 0xe0c)) * _UNK_102b90cc +
                  *(float *)(iVar2 + 0xe0c);
      FUN_100fcd80(0,&local_2c);
      bVar1 = true;
    }
  }
  cVar4 = thunk_FUN_10130d81(local_34,(uint *)(iVar2 + 0x27b4),uVar3);
  if (((cVar4 != '\0') && (*(char *)(iVar2 + 0x105) == '\x01')) &&
     ((*(uint *)(iVar2 + 0x27b4) & uVar3) != 0)) {
    *(undefined1 *)(iVar2 + 0x27dc) = 2;
    *(uint *)(iVar2 + 0x27d8) = *(uint *)(iVar2 + 0x27d8) | uVar3;
  }
  if (bVar1) {
    FUN_100fce8e(1);
    FUN_10115d65("%d past errors skipped.",*(undefined4 *)(iVar2 + 0x27d4));
  }
  else {
    FUN_10115d65(
                "Hold Shift when clicking to enable for 2 frames only (useful for spammy log entries)"
                );
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_40)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

