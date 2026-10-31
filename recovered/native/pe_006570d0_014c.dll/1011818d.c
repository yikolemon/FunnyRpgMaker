/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1011818d */

void FUN_1011818d(float *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_28;
  float *local_24;
  undefined4 local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint local_c;
  
  iVar2 = DAT_1039d74c;
  local_c = DAT_10388d00 ^ (uint)&local_28;
  iVar1 = *(int *)(DAT_1039d74c + 0x14cc);
  uVar3 = -(uint)(*(float *)(DAT_1039d74c + 0x22a8) <= *param_1);
  uVar4 = -(uint)(*(float *)(DAT_1039d74c + 0x22ac) <= param_1[1]);
  uVar5 = -(uint)(param_1[2] < *(float *)(DAT_1039d74c + 0x22b0));
  uVar6 = -(uint)(param_1[3] < *(float *)(DAT_1039d74c + 0x22b4));
  fStack_10 = *(float *)(DAT_1039d74c + 0xda4);
  local_1c = (float)(~uVar3 & (uint)*(float *)(DAT_1039d74c + 0x22a8) | (uint)*param_1 & uVar3) -
             fStack_10;
  fStack_18 = (float)(~uVar4 & (uint)*(float *)(DAT_1039d74c + 0x22ac) | (uint)param_1[1] & uVar4) -
              fStack_10;
  fStack_14 = fStack_10 +
              (float)(~uVar5 & (uint)*(float *)(DAT_1039d74c + 0x22b0) | (uint)param_1[2] & uVar5);
  fStack_10 = fStack_10 +
              (float)(~uVar6 & (uint)*(float *)(DAT_1039d74c + 0x22b4) | (uint)param_1[3] & uVar6);
  if ((((local_1c < *(float *)(iVar1 + 0x28c)) || (fStack_18 < *(float *)(iVar1 + 0x290))) ||
      (*(float *)(iVar1 + 0x294) < fStack_14)) || (*(float *)(iVar1 + 0x298) < fStack_10)) {
    FUN_10188332();
    local_20 = *(undefined4 *)(iVar2 + 0xd9c);
    local_28 = *(undefined4 *)(iVar1 + 0x2e8);
    local_24 = &local_1c;
    FUN_101180df();
    FUN_10188384();
  }
  else {
    local_20 = *(undefined4 *)(DAT_1039d74c + 0xd9c);
    local_28 = *(undefined4 *)(iVar1 + 0x2e8);
    local_24 = &local_1c;
    FUN_101180df();
  }
  if (DAT_10388d00 == (local_c ^ (uint)&local_28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

