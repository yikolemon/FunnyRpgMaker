/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fe5a8 */

int __fastcall FUN_101fe5a8(int *param_1,int *param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&iStack_18;
  (*(code *)**(undefined4 **)(param_4 + 4))(param_1,0,0,param_3);
  param_1[0x12] = (int)param_2;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  iStack_18 = FUN_101c461e(param_2,0);
  iVar3 = iStack_18;
  if (iStack_18 == 0) {
    iStack_18 = FUN_101c4b69(param_2,0x11);
    iVar3 = iStack_18;
    if (iStack_18 == 0) {
      pcVar1 = (char *)param_2[8];
      auVar5[0] = -(*pcVar1 == s___PS_TrueTypeFont_10311720[0]);
      auVar5[1] = -(pcVar1[1] == s___PS_TrueTypeFont_10311720[1]);
      auVar5[2] = -(pcVar1[2] == s___PS_TrueTypeFont_10311720[2]);
      auVar5[3] = -(pcVar1[3] == s___PS_TrueTypeFont_10311720[3]);
      auVar5[4] = -(pcVar1[4] == s___PS_TrueTypeFont_10311720[4]);
      auVar5[5] = -(pcVar1[5] == s___PS_TrueTypeFont_10311720[5]);
      auVar5[6] = -(pcVar1[6] == s___PS_TrueTypeFont_10311720[6]);
      auVar5[7] = -(pcVar1[7] == s___PS_TrueTypeFont_10311720[7]);
      auVar5[8] = -(pcVar1[8] == s___PS_TrueTypeFont_10311720[8]);
      auVar5[9] = -(pcVar1[9] == s___PS_TrueTypeFont_10311720[9]);
      auVar5[10] = -(pcVar1[10] == s___PS_TrueTypeFont_10311720[10]);
      auVar5[0xb] = -(pcVar1[0xb] == s___PS_TrueTypeFont_10311720[0xb]);
      auVar5[0xc] = -(pcVar1[0xc] == s___PS_TrueTypeFont_10311720[0xc]);
      auVar5[0xd] = -(pcVar1[0xd] == s___PS_TrueTypeFont_10311720[0xd]);
      auVar5[0xe] = -(pcVar1[0xe] == s___PS_TrueTypeFont_10311720[0xe]);
      auVar5[0xf] = -(pcVar1[0xf] == s___PS_TrueTypeFont_10311720[0xf]);
      auVar6[0] = -(pcVar1[0x10] == s___PS_TrueTypeFont_10311720[0x10]);
      auVar6[1] = -(s___PS_TrueTypeFont_10311720[0x11] == '\0');
      auVar6[2] = -(s___PS_TrueTypeFont_10311720[0x12] == '\0');
      auVar6[3] = -(s___PS_TrueTypeFont_10311720[0x13] == '\0');
      auVar6[4] = -(UNK_10311734 == '\0');
      auVar6[5] = -(UNK_10311735 == '\0');
      auVar6[6] = -(UNK_10311736 == '\0');
      auVar6[7] = -(UNK_10311737 == '\0');
      auVar6[8] = -(UNK_10311738 == '\0');
      auVar6[9] = -(UNK_10311739 == '\0');
      auVar6[10] = -(UNK_1031173a == '\0');
      auVar6[0xb] = -(UNK_1031173b == '\0');
      auVar6[0xc] = -(UNK_1031173c == '\0');
      auVar6[0xd] = -(UNK_1031173d == '\0');
      auVar6[0xe] = -(UNK_1031173e == '\0');
      auVar6[0xf] = -(UNK_1031173f == '\0');
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
        FUN_101c4c66(param_2);
        iStack_18 = FUN_101c461e(param_2,0);
        iVar3 = iStack_18;
        if (iStack_18 == 0) {
          iVar4 = param_2[1];
          if (param_2[5] == 0) {
            param_1[0x13] = *param_2 + param_2[2];
            param_1[0x14] = iVar4;
            *(undefined1 *)(param_1 + 0x15) = 1;
            iVar3 = FUN_101c4672(param_2,iVar4);
            iStack_18 = iVar3;
            if (iVar3 == 0) {
              iVar4 = param_1[0x14];
LAB_101fe6fa:
              iVar3 = param_1[0x13];
              param_1[1] = iVar3;
              *param_1 = iVar3;
              param_1[2] = iVar4 + iVar3;
              iVar3 = 0;
              goto LAB_101fe681;
            }
          }
          else {
            iVar2 = FUN_101c21f6(param_3,iVar4,&iStack_18);
            param_1[0x13] = iVar2;
            iVar3 = iStack_18;
            if (iStack_18 == 0) {
              iVar3 = FUN_101c4659(param_2,iVar2,iVar4);
              iStack_18 = iVar3;
              if (iVar3 == 0) {
                param_1[0x14] = iVar4;
                goto LAB_101fe6fa;
              }
            }
          }
        }
      }
      else {
        iStack_18 = 2;
        FUN_101c4c66(param_2);
        iVar3 = 2;
      }
    }
  }
  if ((char)param_1[0x15] == '\0') {
    FUN_101c0017(param_3,param_1[0x13]);
    param_1[0x13] = 0;
    iVar3 = iStack_18;
  }
LAB_101fe681:
  if (DAT_10388d00 == (local_14 ^ (uint)&iStack_18)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

