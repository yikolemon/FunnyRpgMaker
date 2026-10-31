/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10126ac3 */

void __fastcall FUN_10126ac3(int param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 in_XMM0_Da;
  undefined8 *local_88;
  float local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float local_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float local_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  float local_24;
  float fStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_88;
  local_6c = *(float *)(param_1 + 0x88);
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_88 = param_2;
  local_70 = in_XMM0_Da;
  FUN_101267b2();
  local_7c = *(float *)(&DAT_102b8624 + (int)param_2 * 0x1c);
  local_80 = DAT_102b90d4 + local_7c;
  local_5c = local_6c * (float)*(undefined8 *)(&DAT_102b860c + (int)param_2 * 0x1c);
  fStack_58 = local_6c *
              (float)((ulonglong)*(undefined8 *)(&DAT_102b860c + (int)param_2 * 0x1c) >> 0x20);
  fStack_54 = local_6c * 0.0;
  fStack_50 = local_6c * 0.0;
  local_3c = local_24;
  fStack_38 = fStack_20;
  uStack_34 = 0;
  uStack_30 = 0;
  local_4c = (float)local_1c - local_24;
  fStack_48 = (float)((ulonglong)local_1c >> 0x20) - fStack_20;
  uStack_44 = 0;
  uStack_40 = 0;
  uVar1 = *(undefined8 *)((int)&DAT_102b8614 + (int)param_2 * 0x1c);
  local_2c = CONCAT44((float)((ulonglong)uVar1 >> 0x20) * fStack_48 + fStack_20 + DAT_102b89c0._4_4_
                      + fStack_58,
                      (float)uVar1 * local_4c + local_24 + (float)DAT_102b89c0 + local_5c);
  local_78 = 0;
  local_84 = local_6c;
  local_88 = &local_2c;
  local_74 = local_7c;
  FUN_10189cf2();
  local_7c = DAT_102b90d8 + local_74;
  uVar1 = *(undefined8 *)((int)&DAT_102b861c + (int)param_2 * 0x1c);
  local_2c = CONCAT44((float)((ulonglong)uVar1 >> 0x20) * fStack_48 + fStack_38 + DAT_102b89c0._4_4_
                      + fStack_58,
                      (float)uVar1 * local_4c + local_3c + (float)DAT_102b89c0 + local_5c);
  local_78 = 0;
  local_80 = local_74;
  local_84 = local_6c;
  local_88 = &local_2c;
  FUN_10189cf2();
  iVar2 = *(int *)(param_1 + 0x2e8);
  local_84 = *(float *)(iVar2 + 0x38);
  local_88 = *(undefined8 **)(iVar2 + 0x40);
  local_78 = 0;
  local_7c = (float)local_70;
  local_80 = (float)param_3;
  FUN_101888a4();
  *(undefined4 *)(iVar2 + 0x38) = 0;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

