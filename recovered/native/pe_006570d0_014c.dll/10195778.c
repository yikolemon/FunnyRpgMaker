/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10195778 */

void __fastcall FUN_10195778(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_38;
  iVar2 = *(int *)(param_1 + 0x48);
  sVar1 = *(short *)(iVar2 + 0x26);
  if (sVar1 != 0) {
    iVar3 = FUN_10192f56(sVar1);
    if (iVar3 != 0) goto LAB_10195807;
  }
  iVar3 = FUN_10192f56(0x20);
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  local_10 = 0xffffffff;
  local_38 = 0;
  if (iVar3 == 0) {
    local_34 = (float)(int)(*(float *)(param_1 + 0x10) * DAT_102b8e90 + DAT_102b70e0);
  }
  else {
    local_34 = *(float *)(iVar3 + 4);
  }
  iVar3 = FUN_1019032a(*(undefined4 *)(iVar2 + 4),param_1,0,&local_38);
LAB_10195807:
  *(int *)(param_1 + 0x30) = (iVar3 - *(int *)(param_1 + 0x2c) >> 2) * -0x45d1745d;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar3 + 4);
  if (DAT_10388d00 == (local_c ^ (uint)&local_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

