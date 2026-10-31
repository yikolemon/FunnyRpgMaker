/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101268c4 */

void __fastcall FUN_101268c4(int param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  float local_40;
  undefined8 *local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  int local_24;
  float local_20;
  undefined8 local_1c;
  uint local_14;
  
  iVar4 = DAT_1039d74c;
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  local_28 = *(float *)(param_1 + 0x8c);
  local_3c = (undefined8 *)0x3f800000;
  local_40 = 7.00649e-45;
  fVar1 = (float)FUN_100fcb39();
  if (0.0 < local_28) {
    if ((*(byte *)(param_1 + 0xc) & 0x80) == 0) {
      local_34 = *(float *)(param_1 + 0x88);
      local_30 = *(float *)(param_1 + 0x8c);
      local_40 = (float)(param_1 + 0x50);
      local_1c = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20) +
                          (float)((ulonglong)*(undefined8 *)(param_1 + 0x50) >> 0x20),
                          (float)*(undefined8 *)(param_1 + 0x58) +
                          (float)*(undefined8 *)(param_1 + 0x50));
      local_3c = &local_1c;
      local_2c = 0;
      local_38 = fVar1;
      FUN_1018b762();
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x14);
      if ((uVar2 & 4) != 0) {
        local_40 = fVar1;
        FUN_10126ac3();
        uVar2 = *(uint *)(param_1 + 0x14);
      }
      if ((uVar2 & 8) != 0) {
        local_40 = fVar1;
        FUN_10126ac3();
      }
    }
  }
  if ((*(byte *)(param_1 + 0x105) & *(byte *)(param_1 + 0x106)) != 0xff) {
    local_24 = iVar4;
    local_40 = (float)((*(byte *)(param_1 + 0x106) != 0xff) + 0x1d);
    local_3c = (undefined8 *)0x3f800000;
    fVar3 = (float)FUN_100fcb39();
    local_3c = *(undefined8 **)(param_1 + 0x8c);
    local_40 = 2.0;
    fVar5 = (float10)FUN_100fdbca();
    iVar4 = local_24;
    local_20 = (float)fVar5;
    local_40 = fVar3;
    FUN_10126ac3();
  }
  if (((0.0 < *(float *)(iVar4 + 0xd18)) && ((*(byte *)(param_1 + 0xc) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x409) & 1) == 0)) {
    local_38 = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 0x90) + DAT_102b8a50;
    local_3c = (undefined8 *)
               ((*(float *)(param_1 + 0x58) + *(float *)(param_1 + 0x50)) - local_28 * DAT_102b70e0)
    ;
    local_40 = local_28 * DAT_102b70e0 + *(float *)(param_1 + 0x50);
    local_34 = fVar1;
    local_30 = *(float *)(iVar4 + 0xd18);
    FUN_1018b44e();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_40)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

