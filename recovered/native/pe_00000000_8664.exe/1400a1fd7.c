/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a1fd7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400a1fd7(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_148 [32];
  char *pcStack_128;
  char *pcStack_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  char *pcStack_100;
  char *pcStack_f8;
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 auStack_c8 [16];
  char *pcStack_b0;
  undefined8 uStack_a8;
  ulonglong uStack_a0;
  
  lVar3 = DAT_140f2a910;
  uStack_a0 = DAT_140f17b40 ^ (ulonglong)auStack_148;
  FUN_1400c67ef(1,2);
  if (*(longlong *)(param_1 + 0x1e) == 0) {
    pcStack_120 = "N/A";
  }
  else {
    pcStack_120 = *(char **)(*(longlong *)(param_1 + 0x1e) + 8);
  }
  pcStack_128 = (char *)CONCAT44(pcStack_128._4_4_,param_1[0xd]);
  cVar4 = FUN_1400c50f1(*param_1,"Viewport #%d, ID: 0x%08X, Parent: 0x%08X, Window: \"%s\"",
                        param_1[0x20],*param_1);
  cVar5 = FUN_1400808b4(0);
  if (cVar5 != '\0') {
    *(undefined4 *)(lVar3 + 0x2b3c) = *param_1;
  }
  if (cVar4 != '\0') {
    uVar1 = param_1[1];
    pcStack_e8 = (char *)(double)((float)param_1[0xc] * DAT_1402114b0);
    pcStack_f8 = (char *)(double)(float)param_1[0x55];
    pcStack_100 = (char *)(double)(float)param_1[0x54];
    pcStack_108 = (char *)(double)(float)param_1[0x53];
    pcStack_110 = (char *)(double)(float)param_1[0x52];
    pcStack_118 = (char *)(double)(float)param_1[7];
    pcStack_120 = (char *)(double)(float)param_1[6];
    pcStack_128 = (char *)(double)(float)param_1[5];
    pcStack_f0 = (char *)CONCAT44(pcStack_f0._4_4_,(int)*(short *)((longlong)param_1 + 0xaa));
    FUN_1400ac536("Main Pos: (%.0f,%.0f), Size: (%.0f,%.0f)\nFrameBufferScale: (%.2f,%.2f)\nWorkArea Inset Left: %.0f Top: %.0f, Right: %.0f, Bottom: %.0f\nMonitor: %d, DpiScale: %.0f%%"
                  ,(double)(float)param_1[2],(double)(float)param_1[3],(double)(float)param_1[4]);
    if (0 < (int)param_1[0x20]) {
      FUN_140092bab();
      cVar4 = FUN_1400ad18f("Reset Pos");
      if (cVar4 != '\0') {
        *(undefined8 *)(param_1 + 2) = 0x4348000043480000;
        *(ulonglong *)(param_1 + 8) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x52) >> 0x20) +
                      DAT_1402117a0._4_4_,
                      (float)*(undefined8 *)(param_1 + 0x52) + (float)DAT_1402117a0);
        FUN_1400a4e7a(param_1,&uStack_a8,param_1 + 0x52,param_1 + 0x54);
        *(undefined8 *)(param_1 + 10) = uStack_a8;
        if (*(longlong *)(param_1 + 0x1e) != 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x1e) + 0x60) = *(undefined8 *)(param_1 + 2);
        }
      }
    }
    pcStack_d8 = " CanHostOtherWindows";
    if ((uVar1 >> 0xb & 1) == 0) {
      pcStack_d8 = "";
    }
    auVar11._0_4_ = -(uint)((uVar1 & _DAT_1402117d0) == 0);
    auVar11._4_4_ = -(uint)((uVar1 & _UNK_1402117d4) == 0);
    auVar11._8_4_ = -(uint)((uVar1 & _UNK_1402117d8) == 0);
    auVar11._12_4_ = -(uint)((uVar1 & _UNK_1402117dc) == 0);
    auVar9._0_4_ = -(uint)((_DAT_1402117c0 & uVar1) == 0);
    auVar9._4_4_ = -(uint)((_UNK_1402117c4 & uVar1) == 0);
    auVar9._8_4_ = -(uint)((_UNK_1402117c8 & uVar1) == 0);
    auVar9._12_4_ = -(uint)((_UNK_1402117cc & uVar1) == 0);
    auVar12 = packssdw(auVar9,auVar11);
    auVar10._0_4_ = -(uint)((_DAT_1402117b0 & uVar1) == 0);
    auVar10._4_4_ = -(uint)((_UNK_1402117b4 & uVar1) == 0);
    auVar10._8_4_ = -(uint)((_UNK_1402117b8 & uVar1) == 0);
    auVar10._12_4_ = -(uint)((_UNK_1402117bc & uVar1) == 0);
    auVar11 = packssdw(auVar10,auVar10);
    auStack_c8 = packsswb(auVar12,auVar11);
    pcStack_e0 = " TopMost";
    if ((auStack_c8[0xb] & 1) != 0) {
      pcStack_e0 = "";
    }
    pcStack_e8 = " NoAutoMerge";
    if ((auStack_c8[10] & 1) != 0) {
      pcStack_e8 = "";
    }
    pcStack_f0 = " NoRendererClear";
    if ((auStack_c8[9] & 1) != 0) {
      pcStack_f0 = "";
    }
    pcStack_f8 = " NoInputs";
    if ((auStack_c8[8] & 1) != 0) {
      pcStack_f8 = "";
    }
    pcStack_100 = " NoFocusOnClick";
    if ((auStack_c8[7] & 1) != 0) {
      pcStack_100 = "";
    }
    pcStack_108 = " NoFocusOnAppearing";
    if ((auStack_c8[6] & 1) != 0) {
      pcStack_108 = "";
    }
    pcStack_110 = " NoTaskBarIcon";
    if ((auStack_c8[5] & 1) != 0) {
      pcStack_110 = "";
    }
    pcStack_118 = " NoDecoration";
    if ((auStack_c8[4] & 1) != 0) {
      pcStack_118 = "";
    }
    pcStack_120 = " OwnedByApp";
    if ((auStack_c8[3] & 1) != 0) {
      pcStack_120 = "";
    }
    pcStack_128 = " IsFocused";
    if ((auStack_c8[2] & 1) != 0) {
      pcStack_128 = "";
    }
    pcVar7 = " IsMinimized";
    if ((auStack_c8[1] & 1) != 0) {
      pcVar7 = "";
    }
    pcVar6 = " IsPlatformMonitor";
    if ((auVar9._0_4_ & 1) != 0) {
      pcVar6 = "";
    }
    pcStack_b0 = pcStack_d8;
    FUN_1400ac536("Flags: 0x%04X =%s%s%s%s%s%s%s%s%s%s%s%s%s",param_1[1],pcVar6,pcVar7);
    iVar2 = param_1[0x36];
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      lVar8 = 0;
      do {
        FUN_1400a13dc(0,param_1,*(undefined8 *)(lVar3 + lVar8),"DrawList");
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar2 * 8 != lVar8);
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (uStack_a0 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(uStack_a0 ^ (ulonglong)auStack_148);
}

