/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b4bd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4bd8(void)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float afStack_24 [2];
  ulonglong local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&fStack_38;
  cVar1 = FUN_10147d77();
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x101e,"Widgets/Tooltips");
    FUN_10132656();
    FUN_1011eaad();
    local_1c = (ulonglong)DAT_102b94bc;
    FUN_1012e1b7("Basic",&local_1c);
    FUN_10115d65();
    FUN_1012e1b7("Fancy",&local_1c);
    cVar1 = FUN_10115d1a();
    if (cVar1 != '\0') {
      FUN_1012d08c();
      FUN_1014c4a0("Curve",&DAT_1038ecc8,_DAT_10302930,_UNK_10302934,_UNK_10302938,_UNK_1030293c,
                   _DAT_10302920,_UNK_10302924,_UNK_10302928,_UNK_1030292c);
      fVar3 = (float10)FUN_10103354();
      local_28 = (float)fVar3;
      fVar3 = (float10)FUN_102704b0((double)local_28);
      fStack_2c = (float)fVar3;
      FUN_1012d08c("Sin(time) = %f",(double)fStack_2c);
      thunk_FUN_1010ad44();
    }
    FUN_10132656();
    FUN_10131233("Off",&DAT_103a4530,0);
    FUN_10114a0e(0,0xbf800000);
    FUN_10131233("Always On (Simple)",&DAT_103a4530,1);
    FUN_10114a0e(0,0xbf800000);
    FUN_10131233("Always On (Advanced)",&DAT_103a4530,2);
    if (DAT_103a4530 == 2) {
      cVar1 = FUN_10115b98();
      if (cVar1 != '\0') {
        fVar3 = (float10)FUN_10111f20();
        fStack_30 = (float)fVar3;
        afStack_24[0] = fStack_30 * _DAT_102b8f10;
        afStack_24[1] = 0.0;
        fVar3 = (float10)FUN_10103354();
        fStack_34 = (float)fVar3;
        fVar3 = (float10)FUN_102704b0((double)fStack_34);
        fStack_38 = (float)fVar3;
        FUN_1013125a(fStack_38 * DAT_102b70e0 + DAT_102b70e0,afStack_24,0);
        thunk_FUN_1010ad44();
      }
    }
    else if (DAT_103a4530 == 1) {
      FUN_10103022();
    }
    FUN_10132656();
    FUN_1011eaad();
    FUN_1012e1b7("Manual",&local_1c);
    cVar1 = FUN_10102a1a();
    if (cVar1 != '\0') {
      FUN_10103022();
    }
    FUN_1012e1b7("DelayNone",&local_1c);
    cVar1 = FUN_10102a1a();
    if (cVar1 != '\0') {
      FUN_10103022();
    }
    FUN_1012e1b7("DelayShort",&local_1c);
    cVar1 = FUN_10102a1a();
    if (cVar1 != '\0') {
      iVar2 = FUN_100fcb2d();
      FUN_10103022("I am a tooltip with a short delay (%0.2f sec).",
                   (double)*(float *)(iVar2 + 0x534));
    }
    FUN_1012e1b7("DelayLong",&local_1c);
    cVar1 = FUN_10102a1a();
    if (cVar1 != '\0') {
      iVar2 = FUN_100fcb2d();
      FUN_10103022("I am a tooltip with a long delay (%0.2f sec).",(double)*(float *)(iVar2 + 0x538)
                  );
    }
    FUN_1012e1b7("Stationary",&local_1c);
    cVar1 = FUN_10102a1a();
    if (cVar1 != '\0') {
      FUN_10103022();
    }
    FUN_10111871();
    FUN_1012e1b7("Disabled item",&local_1c);
    cVar1 = FUN_10102a1a();
    if (cVar1 != '\0') {
      FUN_10103022();
    }
    FUN_10111961();
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&fStack_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

