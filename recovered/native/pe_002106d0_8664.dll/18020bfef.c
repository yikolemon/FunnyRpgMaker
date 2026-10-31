/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18020bfef */

ulonglong FUN_18020bfef(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  char *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  uVar2 = FUN_1801ce63e(param_2,0);
  local_34 = (uint)uVar2;
  if (local_34 == 0) {
    uVar2 = FUN_1801cec60(param_2,0x11);
    local_34 = (uint)uVar2;
    if (local_34 == 0) {
      pcVar1 = (char *)param_2[7];
      auVar5[0] = -(*pcVar1 == s___PS_TrueTypeFont_18033b7e0[0]);
      auVar5[1] = -(pcVar1[1] == s___PS_TrueTypeFont_18033b7e0[1]);
      auVar5[2] = -(pcVar1[2] == s___PS_TrueTypeFont_18033b7e0[2]);
      auVar5[3] = -(pcVar1[3] == s___PS_TrueTypeFont_18033b7e0[3]);
      auVar5[4] = -(pcVar1[4] == s___PS_TrueTypeFont_18033b7e0[4]);
      auVar5[5] = -(pcVar1[5] == s___PS_TrueTypeFont_18033b7e0[5]);
      auVar5[6] = -(pcVar1[6] == s___PS_TrueTypeFont_18033b7e0[6]);
      auVar5[7] = -(pcVar1[7] == s___PS_TrueTypeFont_18033b7e0[7]);
      auVar5[8] = -(pcVar1[8] == s___PS_TrueTypeFont_18033b7e0[8]);
      auVar5[9] = -(pcVar1[9] == s___PS_TrueTypeFont_18033b7e0[9]);
      auVar5[10] = -(pcVar1[10] == s___PS_TrueTypeFont_18033b7e0[10]);
      auVar5[0xb] = -(pcVar1[0xb] == s___PS_TrueTypeFont_18033b7e0[0xb]);
      auVar5[0xc] = -(pcVar1[0xc] == s___PS_TrueTypeFont_18033b7e0[0xc]);
      auVar5[0xd] = -(pcVar1[0xd] == s___PS_TrueTypeFont_18033b7e0[0xd]);
      auVar5[0xe] = -(pcVar1[0xe] == s___PS_TrueTypeFont_18033b7e0[0xe]);
      auVar5[0xf] = -(pcVar1[0xf] == s___PS_TrueTypeFont_18033b7e0[0xf]);
      auVar6[0] = -(pcVar1[0x10] == s___PS_TrueTypeFont_18033b7e0[0x10]);
      auVar6[1] = -(s___PS_TrueTypeFont_18033b7e0[0x11] == '\0');
      auVar6[2] = -(s___PS_TrueTypeFont_18033b7e0[0x12] == '\0');
      auVar6[3] = -(s___PS_TrueTypeFont_18033b7e0[0x13] == '\0');
      auVar6[4] = -(UNK_18033b7f4 == '\0');
      auVar6[5] = -(UNK_18033b7f5 == '\0');
      auVar6[6] = -(UNK_18033b7f6 == '\0');
      auVar6[7] = -(UNK_18033b7f7 == '\0');
      auVar6[8] = -(UNK_18033b7f8 == '\0');
      auVar6[9] = -(UNK_18033b7f9 == '\0');
      auVar6[10] = -(UNK_18033b7fa == '\0');
      auVar6[0xb] = -(UNK_18033b7fb == '\0');
      auVar6[0xc] = -(UNK_18033b7fc == '\0');
      auVar6[0xd] = -(UNK_18033b7fd == '\0');
      auVar6[0xe] = -(UNK_18033b7fe == '\0');
      auVar6[0xf] = -(UNK_18033b7ff == '\0');
      auVar6 = auVar6 & auVar5;
      if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar6[0xf] >> 7) << 0xf) == 0xffff) {
        FUN_1801ced84(param_2);
        uVar2 = FUN_1801ce63e(param_2,0);
        local_34 = (uint)uVar2;
        if (local_34 == 0) {
          iVar4 = (int)param_2[1];
          if (param_2[4] == 0) {
            param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
            *(int *)(param_1 + 0x14) = iVar4;
            *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
            uVar2 = FUN_1801ce690(param_2,iVar4);
            local_34 = (uint)uVar2;
            if (local_34 == 0) {
              iVar4 = (int)param_1[0x14];
LAB_18020c195:
              lVar3 = param_1[0x13];
              param_1[1] = lVar3;
              *param_1 = lVar3;
              param_1[2] = iVar4 + lVar3;
              uVar2 = 0;
              goto LAB_18020c0f0;
            }
          }
          else {
            lVar3 = FUN_1801cc006(param_3,iVar4,&local_34);
            param_1[0x13] = lVar3;
            uVar2 = (ulonglong)local_34;
            if (local_34 == 0) {
              uVar2 = FUN_1801ce682(param_2,lVar3,iVar4);
              local_34 = (uint)uVar2;
              if (local_34 == 0) {
                *(int *)(param_1 + 0x14) = iVar4;
                goto LAB_18020c195;
              }
            }
          }
        }
      }
      else {
        local_34 = 2;
        FUN_1801ced84(param_2);
        uVar2 = 2;
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
    FUN_1801c9b65(param_3,param_1[0x13]);
    param_1[0x13] = 0;
    uVar2 = (ulonglong)local_34;
  }
LAB_18020c0f0:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

