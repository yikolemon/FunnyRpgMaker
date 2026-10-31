/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10123519 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123519(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  byte bStack_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  undefined8 local_20;
  uint local_18;
  
  iVar2 = DAT_1039d74c;
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_1014949d(1,2);
  cVar3 = FUN_10147c9d();
  cVar4 = FUN_10102a1a();
  if (cVar4 != '\0') {
    *(undefined4 *)(iVar2 + 0x2818) = *param_1;
  }
  if (cVar3 != '\0') {
    uVar1 = param_1[1];
    FUN_1012d551("Main Pos: (%.0f,%.0f), Size: (%.0f,%.0f)\nFrameBufferScale: (%.2f,%.2f)\nWorkArea Inset Left: %.0f Top: %.0f, Right: %.0f, Bottom: %.0f\nMonitor: %d, DpiScale: %.0f%%"
                 ,(double)(float)param_1[2],(double)(float)param_1[3],(double)(float)param_1[4],
                 (double)(float)param_1[5],(double)(float)param_1[6],(double)(float)param_1[7],
                 (double)(float)param_1[0x40],(double)(float)param_1[0x41],
                 (double)(float)param_1[0x42],(double)(float)param_1[0x43],
                 (int)*(short *)((int)param_1 + 0x86),(double)((float)param_1[0xc] * DAT_102b8c10));
    if (0 < (int)param_1[0x17]) {
      FUN_10114a0e(0,0xbf800000);
      cVar3 = FUN_1012e1ca();
      if (cVar3 != '\0') {
        param_1[2] = 0x43480000;
        param_1[3] = 0x43480000;
        *(ulonglong *)(param_1 + 8) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x40) >> 0x20) +
                      DAT_102b9010._4_4_,
                      (float)*(undefined8 *)(param_1 + 0x40) + (float)DAT_102b9010);
        FUN_10126046(&local_20,param_1 + 0x40,param_1 + 0x42);
        *(undefined8 *)(param_1 + 10) = local_20;
        if (param_1[0x16] != 0) {
          *(undefined8 *)(param_1[0x16] + 0x50) = *(undefined8 *)(param_1 + 2);
        }
      }
    }
    pcVar5 = " CanHostOtherWindows";
    if ((uVar1 >> 0xb & 1) == 0) {
      pcVar5 = "";
    }
    auVar21._0_4_ = -(uint)((uVar1 & _DAT_102b9040) == 0);
    auVar21._4_4_ = -(uint)((uVar1 & _UNK_102b9044) == 0);
    auVar21._8_4_ = -(uint)((uVar1 & _UNK_102b9048) == 0);
    auVar21._12_4_ = -(uint)((uVar1 & _UNK_102b904c) == 0);
    auVar19._0_4_ = -(uint)((_DAT_102b9030 & uVar1) == 0);
    auVar19._4_4_ = -(uint)((_UNK_102b9034 & uVar1) == 0);
    auVar19._8_4_ = -(uint)((_UNK_102b9038 & uVar1) == 0);
    auVar19._12_4_ = -(uint)((_UNK_102b903c & uVar1) == 0);
    auVar21 = packssdw(auVar19,auVar21);
    auVar20._0_4_ = -(uint)((_DAT_102b9020 & uVar1) == 0);
    auVar20._4_4_ = -(uint)((_UNK_102b9024 & uVar1) == 0);
    auVar20._8_4_ = -(uint)((_UNK_102b9028 & uVar1) == 0);
    auVar20._12_4_ = -(uint)((_UNK_102b902c & uVar1) == 0);
    auVar20 = packssdw(auVar20,auVar20);
    auVar20 = packsswb(auVar21,auVar20);
    pcVar7 = " TopMost";
    bStack_65 = auVar20[0xb];
    if ((bStack_65 & 1) != 0) {
      pcVar7 = "";
    }
    bStack_66 = auVar20[10];
    pcVar8 = " NoAutoMerge";
    if ((bStack_66 & 1) != 0) {
      pcVar8 = "";
    }
    pcVar9 = " NoRendererClear";
    bStack_67 = auVar20[9];
    if ((bStack_67 & 1) != 0) {
      pcVar9 = "";
    }
    bStack_68 = auVar20[8];
    pcVar10 = " NoInputs";
    if ((bStack_68 & 1) != 0) {
      pcVar10 = "";
    }
    bStack_69 = auVar20[7];
    pcVar11 = " NoFocusOnClick";
    if ((bStack_69 & 1) != 0) {
      pcVar11 = "";
    }
    bStack_6a = auVar20[6];
    pcVar12 = " NoFocusOnAppearing";
    if ((bStack_6a & 1) != 0) {
      pcVar12 = "";
    }
    bStack_6b = auVar20[5];
    pcVar13 = " NoTaskBarIcon";
    if ((bStack_6b & 1) != 0) {
      pcVar13 = "";
    }
    bStack_6c = auVar20[4];
    pcVar14 = " NoDecoration";
    if ((bStack_6c & 1) != 0) {
      pcVar14 = "";
    }
    bStack_6d = auVar20[3];
    pcVar16 = " OwnedByApp";
    if ((bStack_6d & 1) != 0) {
      pcVar16 = "";
    }
    bStack_6e = auVar20[2];
    pcVar15 = " IsFocused";
    if ((bStack_6e & 1) != 0) {
      pcVar15 = "";
    }
    bStack_6f = auVar20[1];
    pcVar6 = " IsMinimized";
    if ((bStack_6f & 1) != 0) {
      pcVar6 = "";
    }
    pcVar17 = " IsPlatformMonitor";
    if ((auVar19._0_4_ & 1) != 0) {
      pcVar17 = "";
    }
    FUN_1012d551("Flags: 0x%04X =%s%s%s%s%s%s%s%s%s%s%s%s%s",param_1[1],pcVar17,pcVar6,pcVar15,
                 pcVar16,pcVar14,pcVar13,pcVar12,pcVar11,pcVar10,pcVar9,pcVar8,pcVar7,pcVar5);
    iVar2 = param_1[0x2a];
    if (iVar2 != 0) {
      iVar18 = 0;
      do {
        FUN_10122b20();
        iVar18 = iVar18 + 4;
      } while (iVar2 << 2 != iVar18);
    }
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

