/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400a2024 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unwind_1400a2024(char param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  char *in_RAX;
  char *pcVar5;
  undefined4 *unaff_RSI;
  longlong unaff_RDI;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_stack_00000020;
  undefined4 uVar13;
  byte bStack0000000000000081;
  byte bStack0000000000000082;
  undefined8 in_stack_000000a0;
  ulonglong in_stack_000000a8;
  
  uVar13 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x75] = in_RAX[-0x75] + param_1;
  FUN_1400c67ef(1,2);
  cVar3 = FUN_1400c50f1(*unaff_RSI,"Viewport #%d, ID: 0x%08X, Parent: 0x%08X, Window: \"%s\"",
                        unaff_RSI[0x20],*unaff_RSI,CONCAT44(uVar13,unaff_RSI[0xd]));
  cVar4 = FUN_1400808b4(0);
  if (cVar4 != '\0') {
    *(undefined4 *)(unaff_RDI + 0x2b3c) = *unaff_RSI;
  }
  if (cVar3 != '\0') {
    uVar1 = unaff_RSI[1];
    FUN_1400ac536("Main Pos: (%.0f,%.0f), Size: (%.0f,%.0f)\nFrameBufferScale: (%.2f,%.2f)\nWorkArea Inset Left: %.0f Top: %.0f, Right: %.0f, Bottom: %.0f\nMonitor: %d, DpiScale: %.0f%%"
                  ,(double)(float)unaff_RSI[2],(double)(float)unaff_RSI[3],
                  (double)(float)unaff_RSI[4],(double)(float)unaff_RSI[5]);
    if (0 < (int)unaff_RSI[0x20]) {
      FUN_140092bab();
      cVar3 = FUN_1400ad18f("Reset Pos");
      if (cVar3 != '\0') {
        *(undefined8 *)(unaff_RSI + 2) = 0x4348000043480000;
        *(ulonglong *)(unaff_RSI + 8) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(unaff_RSI + 0x52) >> 0x20) +
                      DAT_1402117a0._4_4_,
                      (float)*(undefined8 *)(unaff_RSI + 0x52) + (float)DAT_1402117a0);
        FUN_1400a4e7a();
        *(undefined8 *)(unaff_RSI + 10) = in_stack_000000a0;
        if (*(longlong *)(unaff_RSI + 0x1e) != 0) {
          *(undefined8 *)(*(longlong *)(unaff_RSI + 0x1e) + 0x60) = *(undefined8 *)(unaff_RSI + 2);
        }
      }
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
    auVar11 = packsswb(auVar12,auVar11);
    pcVar5 = " IsFocused";
    bStack0000000000000082 = auVar11[2];
    if ((bStack0000000000000082 & 1) != 0) {
      pcVar5 = "";
    }
    bStack0000000000000081 = auVar11[1];
    pcVar7 = " IsMinimized";
    if ((bStack0000000000000081 & 1) != 0) {
      pcVar7 = "";
    }
    pcVar6 = " IsPlatformMonitor";
    if ((auVar9._0_4_ & 1) != 0) {
      pcVar6 = "";
    }
    FUN_1400ac536("Flags: 0x%04X =%s%s%s%s%s%s%s%s%s%s%s%s%s",unaff_RSI[1],pcVar6,pcVar7,pcVar5);
    iVar2 = unaff_RSI[0x36];
    if ((longlong)iVar2 != 0) {
      lVar8 = 0;
      do {
        FUN_1400a13dc(0);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar2 * 8 != lVar8);
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (in_stack_000000a8 ^ (ulonglong)&stack0x00000000)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(in_stack_000000a8 ^ (ulonglong)&stack0x00000000);
}

