/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005962b */

ulonglong FUN_14005962b(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = (longlong)param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
  uVar3 = FUN_140020a41((longlong)param_2,0);
  local_34 = (uint)uVar3;
  if (local_34 == 0) {
    local_34 = FUN_140021063(param_2,0x11);
    uVar3 = CONCAT44(extraout_var,local_34);
    if (local_34 == 0) {
      pcVar1 = (char *)param_2[7];
      auVar6[0] = -(*pcVar1 == s___PS_TrueTypeFont_1400f8910[0]);
      auVar6[1] = -(pcVar1[1] == s___PS_TrueTypeFont_1400f8910[1]);
      auVar6[2] = -(pcVar1[2] == s___PS_TrueTypeFont_1400f8910[2]);
      auVar6[3] = -(pcVar1[3] == s___PS_TrueTypeFont_1400f8910[3]);
      auVar6[4] = -(pcVar1[4] == s___PS_TrueTypeFont_1400f8910[4]);
      auVar6[5] = -(pcVar1[5] == s___PS_TrueTypeFont_1400f8910[5]);
      auVar6[6] = -(pcVar1[6] == s___PS_TrueTypeFont_1400f8910[6]);
      auVar6[7] = -(pcVar1[7] == s___PS_TrueTypeFont_1400f8910[7]);
      auVar6[8] = -(pcVar1[8] == s___PS_TrueTypeFont_1400f8910[8]);
      auVar6[9] = -(pcVar1[9] == s___PS_TrueTypeFont_1400f8910[9]);
      auVar6[10] = -(pcVar1[10] == s___PS_TrueTypeFont_1400f8910[10]);
      auVar6[0xb] = -(pcVar1[0xb] == s___PS_TrueTypeFont_1400f8910[0xb]);
      auVar6[0xc] = -(pcVar1[0xc] == s___PS_TrueTypeFont_1400f8910[0xc]);
      auVar6[0xd] = -(pcVar1[0xd] == s___PS_TrueTypeFont_1400f8910[0xd]);
      auVar6[0xe] = -(pcVar1[0xe] == s___PS_TrueTypeFont_1400f8910[0xe]);
      auVar6[0xf] = -(pcVar1[0xf] == s___PS_TrueTypeFont_1400f8910[0xf]);
      auVar7[0] = -(pcVar1[0x10] == s___PS_TrueTypeFont_1400f8910[0x10]);
      auVar7[1] = -(s___PS_TrueTypeFont_1400f8910[0x11] == '\0');
      auVar7[2] = -(s___PS_TrueTypeFont_1400f8910[0x12] == '\0');
      auVar7[3] = -(s___PS_TrueTypeFont_1400f8910[0x13] == '\0');
      auVar7[4] = -(UNK_1400f8924 == '\0');
      auVar7[5] = -(UNK_1400f8925 == '\0');
      auVar7[6] = -(UNK_1400f8926 == '\0');
      auVar7[7] = -(UNK_1400f8927 == '\0');
      auVar7[8] = -(UNK_1400f8928 == '\0');
      auVar7[9] = -(UNK_1400f8929 == '\0');
      auVar7[10] = -(UNK_1400f892a == '\0');
      auVar7[0xb] = -(UNK_1400f892b == '\0');
      auVar7[0xc] = -(UNK_1400f892c == '\0');
      auVar7[0xd] = -(UNK_1400f892d == '\0');
      auVar7[0xe] = -(UNK_1400f892e == '\0');
      auVar7[0xf] = -(UNK_1400f892f == '\0');
      auVar7 = auVar7 & auVar6;
      if ((ushort)((ushort)(SUB161(auVar7 >> 7,0) & 1) | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar7 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar7 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar7 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar7 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar7 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar7[0xf] >> 7) << 0xf) == 0xffff) {
        FUN_140021187(param_2);
        uVar3 = FUN_140020a41((longlong)param_2,0);
        local_34 = (uint)uVar3;
        if (local_34 == 0) {
          uVar5 = *(uint *)(param_2 + 1);
          if (param_2[4] == 0) {
            param_1[0x13] = (ulonglong)*(uint *)((longlong)param_2 + 0xc) + *param_2;
            *(uint *)(param_1 + 0x14) = uVar5;
            *(undefined1 *)((longlong)param_1 + 0xa4) = 1;
            uVar3 = FUN_140020a93((longlong)param_2,uVar5);
            local_34 = (uint)uVar3;
            if (local_34 == 0) {
              uVar5 = *(uint *)(param_1 + 0x14);
LAB_1400597d1:
              lVar2 = param_1[0x13];
              param_1[1] = lVar2;
              *param_1 = lVar2;
              param_1[2] = (int)uVar5 + lVar2;
              uVar3 = 0;
              goto LAB_14005972c;
            }
          }
          else {
            puVar4 = (undefined8 *)FUN_14001e961(param_3,uVar5,(int *)&local_34);
            param_1[0x13] = (longlong)puVar4;
            uVar3 = (ulonglong)local_34;
            if (local_34 == 0) {
              uVar3 = FUN_140020a85(param_2,puVar4,uVar5);
              local_34 = (uint)uVar3;
              if (local_34 == 0) {
                *(uint *)(param_1 + 0x14) = uVar5;
                goto LAB_1400597d1;
              }
            }
          }
        }
      }
      else {
        local_34 = 2;
        FUN_140021187(param_2);
        uVar3 = 2;
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0xa4) == '\0') {
    FUN_14001c53d(param_3,param_1[0x13]);
    param_1[0x13] = 0;
    uVar3 = (ulonglong)local_34;
  }
LAB_14005972c:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

