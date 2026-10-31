/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801290a7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801290a7(undefined4 *param_1)

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
  char *local_128;
  char *local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  undefined1 local_c8 [16];
  char *local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  lVar3 = DAT_180419160;
  local_a0 = DAT_180402640 ^ (ulonglong)auStack_148;
  FUN_18014d8bf(1,2);
  if (*(longlong *)(param_1 + 0x1e) == 0) {
    local_120 = "N/A";
  }
  else {
    local_120 = *(char **)(*(longlong *)(param_1 + 0x1e) + 8);
  }
  local_128 = (char *)CONCAT44(local_128._4_4_,param_1[0xd]);
  cVar4 = FUN_18014c1c1(*param_1,"Viewport #%d, ID: 0x%08X, Parent: 0x%08X, Window: \"%s\"",
                        param_1[0x20],*param_1);
  cVar5 = FUN_18010759c(0);
  if (cVar5 != '\0') {
    *(undefined4 *)(lVar3 + 0x2b3c) = *param_1;
  }
  if (cVar4 != '\0') {
    uVar1 = param_1[1];
    local_e8 = (char *)(double)((float)param_1[0xc] * DAT_1802dbb34);
    local_f8 = (char *)(double)(float)param_1[0x55];
    local_100 = (char *)(double)(float)param_1[0x54];
    local_108 = (char *)(double)(float)param_1[0x53];
    local_110 = (char *)(double)(float)param_1[0x52];
    local_118 = (char *)(double)(float)param_1[7];
    local_120 = (char *)(double)(float)param_1[6];
    local_128 = (char *)(double)(float)param_1[5];
    local_f0 = (char *)CONCAT44(local_f0._4_4_,(int)*(short *)((longlong)param_1 + 0xaa));
    FUN_180133606("Main Pos: (%.0f,%.0f), Size: (%.0f,%.0f)\nFrameBufferScale: (%.2f,%.2f)\nWorkArea Inset Left: %.0f Top: %.0f, Right: %.0f, Bottom: %.0f\nMonitor: %d, DpiScale: %.0f%%"
                  ,(double)(float)param_1[2],(double)(float)param_1[3],(double)(float)param_1[4]);
    if (0 < (int)param_1[0x20]) {
      FUN_180119893();
      cVar4 = FUN_18013425f("Reset Pos");
      if (cVar4 != '\0') {
        *(undefined8 *)(param_1 + 2) = 0x4348000043480000;
        *(ulonglong *)(param_1 + 8) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x52) >> 0x20) +
                      DAT_1802dea30._4_4_,
                      (float)*(undefined8 *)(param_1 + 0x52) + (float)DAT_1802dea30);
        FUN_18012bf4a(param_1,&local_a8,param_1 + 0x52,param_1 + 0x54);
        *(undefined8 *)(param_1 + 10) = local_a8;
        if (*(longlong *)(param_1 + 0x1e) != 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x1e) + 0x60) = *(undefined8 *)(param_1 + 2);
        }
      }
    }
    local_d8 = " CanHostOtherWindows";
    if ((uVar1 >> 0xb & 1) == 0) {
      local_d8 = "";
    }
    auVar11._0_4_ = -(uint)((uVar1 & _DAT_1802dea60) == 0);
    auVar11._4_4_ = -(uint)((uVar1 & _UNK_1802dea64) == 0);
    auVar11._8_4_ = -(uint)((uVar1 & _UNK_1802dea68) == 0);
    auVar11._12_4_ = -(uint)((uVar1 & _UNK_1802dea6c) == 0);
    auVar9._0_4_ = -(uint)((_DAT_1802dea50 & uVar1) == 0);
    auVar9._4_4_ = -(uint)((_UNK_1802dea54 & uVar1) == 0);
    auVar9._8_4_ = -(uint)((_UNK_1802dea58 & uVar1) == 0);
    auVar9._12_4_ = -(uint)((_UNK_1802dea5c & uVar1) == 0);
    auVar12 = packssdw(auVar9,auVar11);
    auVar10._0_4_ = -(uint)((_DAT_1802dea40 & uVar1) == 0);
    auVar10._4_4_ = -(uint)((_UNK_1802dea44 & uVar1) == 0);
    auVar10._8_4_ = -(uint)((_UNK_1802dea48 & uVar1) == 0);
    auVar10._12_4_ = -(uint)((_UNK_1802dea4c & uVar1) == 0);
    auVar11 = packssdw(auVar10,auVar10);
    local_c8 = packsswb(auVar12,auVar11);
    local_e0 = " TopMost";
    if ((local_c8[0xb] & 1) != 0) {
      local_e0 = "";
    }
    local_e8 = " NoAutoMerge";
    if ((local_c8[10] & 1) != 0) {
      local_e8 = "";
    }
    local_f0 = " NoRendererClear";
    if ((local_c8[9] & 1) != 0) {
      local_f0 = "";
    }
    local_f8 = " NoInputs";
    if ((local_c8[8] & 1) != 0) {
      local_f8 = "";
    }
    local_100 = " NoFocusOnClick";
    if ((local_c8[7] & 1) != 0) {
      local_100 = "";
    }
    local_108 = " NoFocusOnAppearing";
    if ((local_c8[6] & 1) != 0) {
      local_108 = "";
    }
    local_110 = " NoTaskBarIcon";
    if ((local_c8[5] & 1) != 0) {
      local_110 = "";
    }
    local_118 = " NoDecoration";
    if ((local_c8[4] & 1) != 0) {
      local_118 = "";
    }
    local_120 = " OwnedByApp";
    if ((local_c8[3] & 1) != 0) {
      local_120 = "";
    }
    local_128 = " IsFocused";
    if ((local_c8[2] & 1) != 0) {
      local_128 = "";
    }
    pcVar7 = " IsMinimized";
    if ((local_c8[1] & 1) != 0) {
      pcVar7 = "";
    }
    pcVar6 = " IsPlatformMonitor";
    if ((auVar9._0_4_ & 1) != 0) {
      pcVar6 = "";
    }
    local_b0 = local_d8;
    FUN_180133606("Flags: 0x%04X =%s%s%s%s%s%s%s%s%s%s%s%s%s",param_1[1],pcVar6,pcVar7);
    iVar2 = param_1[0x36];
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x38);
      lVar8 = 0;
      do {
        FUN_1801284ac(0,param_1,*(undefined8 *)(lVar3 + lVar8),"DrawList");
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar2 * 8 != lVar8);
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_a0 ^ (ulonglong)auStack_148)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_a0 ^ (ulonglong)auStack_148);
}

