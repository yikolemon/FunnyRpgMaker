/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101afc63 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101afc63(void)

{
  double dVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  float10 fVar5;
  float fVar6;
  undefined1 auStack_34 [32];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  cVar2 = FUN_10147d77("Plotting");
  if (cVar2 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x85c,"Widgets/Plotting");
    FUN_1012d08c("Need better plotting and graphing? Consider using ImPlot:");
    FUN_10131c6c("https://github.com/epezent/implot",0);
    FUN_10132188();
    FUN_1012ff1a("Animate",&DAT_1038ab48);
    FUN_1014c4a0("Frame Times",&DAT_1038ab4c,_DAT_10302930,_UNK_10302934,_UNK_10302938,_UNK_1030293c
                 ,_DAT_10302920,_UNK_10302924,_UNK_10302928,_UNK_1030292c);
    FUN_1014c5ed("Histogram",&DAT_1038ab4c,DAT_1028f590,0,0,0,_DAT_10302940,_UNK_10302944,
                 _UNK_10302948,_UNK_1030294c);
    if ((DAT_1038ab48 != '\x01') || ((DAT_103a4018 == 0.0 && (!NAN(DAT_103a4018))))) {
      fVar5 = (float10)FUN_10103354();
      DAT_103a4018 = (double)fVar5;
    }
    dVar1 = DAT_103a4018;
    fVar5 = (float10)FUN_10103354();
    if (dVar1 < (double)fVar5) {
      do {
        fVar5 = (float10)FUN_1026d4b0((double)_DAT_103a4020);
        (&DAT_103a3ea8)[DAT_103a4010] = (float)fVar5;
        iVar3 = (int)((ulonglong)((longlong)(DAT_103a4010 + 1) * -0x49f49f49) >> 0x20) +
                DAT_103a4010 + 1;
        DAT_103a4010 = ((iVar3 >> 6) - (iVar3 >> 0x1f)) * -0x5a + DAT_103a4010 + 1;
        _DAT_103a4020 = (float)DAT_103a4010 * DAT_102b71b8 + _DAT_103a4020;
        dVar1 = DAT_103a4018 + _DAT_10302950;
        DAT_103a4018 = dVar1;
        fVar5 = (float10)FUN_10103354();
      } while (dVar1 < (double)fVar5);
    }
    fVar6 = 0.0;
    iVar3 = -0x168;
    do {
      fVar6 = fVar6 + *(float *)((int)&DAT_103a4010 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar3 != 0);
    FUN_101b5fc7(auStack_34,"avg %f",(double)(fVar6 / _DAT_10302958));
    FUN_1014c4a0("Lines",&DAT_103a3ea8,0x5a,DAT_103a4010,auStack_34,_DAT_10302960,_UNK_10302964,
                 _UNK_10302968,_UNK_1030296c,4);
    FUN_10132656("Functions");
    fVar5 = (float10)FUN_10111f20();
    FUN_100fb68f((float)fVar5 * DAT_102b8f18);
    FUN_10133e42(&DAT_1033b3a4,&DAT_103a4024,&DAT_10355f7b,0xffffffff);
    FUN_10114a0e(0,0xbf800000);
    FUN_1013d499("Sample count",&DAT_1038ab68,1,400,&DAT_1033b386,0);
    puVar4 = &LAB_101b606a;
    if (DAT_103a4024 == 0) {
      puVar4 = &LAB_101b6032;
    }
    FUN_1014c564("Lines##2",puVar4,0,DAT_1038ab68,0,0,_DAT_10302960,_UNK_10302964,_UNK_10302968,
                 _UNK_1030296c);
    FUN_1014c69f("Histogram##2",puVar4,0,DAT_1038ab68,0,0,_DAT_10302960,_UNK_10302964,_UNK_10302968,
                 _UNK_1030296c);
    FUN_10149387();
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

