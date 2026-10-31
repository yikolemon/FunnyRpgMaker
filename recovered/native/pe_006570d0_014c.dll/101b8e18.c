/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b8e18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_101b8e18(char *param_1,undefined4 param_2,undefined1 *param_3)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  int iVar8;
  float10 fVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined1 auStack_48 [3];
  char cStack_45;
  char *pcStack_44;
  float fStack_40;
  char *pcStack_3c;
  float fStack_38;
  char *pcStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  uint uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_48;
  local_24 = (undefined4)DAT_10302760;
  uStack_20 = (uint)((ulonglong)DAT_10302760 >> 0x20);
  FUN_10107cf6(&local_24,4);
  cVar3 = FUN_10107d2b(param_2,param_3,0);
  if (cVar3 == '\0') goto LAB_101b9268;
  FUN_101032c6("imgui_demo.cpp",0x23b4,"Examples/Console");
  cVar3 = FUN_10116a0f(0,0);
  if (cVar3 != '\0') {
    cVar3 = FUN_10131d08("Close Console",0,0,1);
    if (cVar3 != '\0') {
      *param_3 = 0;
    }
    FUN_101165cb();
  }
  FUN_1012d238(
              "This example implements a console with basic coloring, completion (TAB key) and history (Up/Down keys). A more elaborate implementation may want to store entries along with extra data such as timestamp, emitter, etc."
              );
  FUN_1012d238("Enter \'HELP\' for help.");
  cVar3 = FUN_1012e1ca("Add Debug Text");
  if (cVar3 != '\0') {
    FUN_101b92e6(param_1,"%d some text",*(undefined4 *)(param_1 + 0x100));
    FUN_101b92e6(param_1,"some more text");
    FUN_101b92e6(param_1,"display very important message here!");
  }
  FUN_10114a0e(0,0xbf800000);
  cVar3 = FUN_1012e1ca("Add Debug Error");
  if (cVar3 != '\0') {
    FUN_101b92e6(param_1,"[error] something went wrong");
  }
  FUN_10114a0e(0,0xbf800000);
  cVar3 = FUN_1012e1ca("Clear");
  if (cVar3 != '\0') {
    FUN_101b9292();
  }
  FUN_10114a0e(0,0xbf800000);
  cStack_45 = FUN_1012e1ca(&DAT_10330487);
  FUN_10132188();
  cVar3 = FUN_10116736("Options",0);
  if (cVar3 != '\0') {
    FUN_1012ff1a("Auto-scroll",param_1 + 0x238);
    FUN_101165cb();
  }
  FUN_101145b7(0x1230,0x40000);
  local_24 = 0;
  uStack_20 = 0;
  cVar3 = FUN_1012e1b7("Options",&local_24);
  if (cVar3 != '\0') {
    FUN_10115ea4("Options",0);
  }
  FUN_10114a0e(0,0xbf800000);
  pcStack_44 = param_1 + 0x128;
  FUN_100fb638("Filter (\"incl,-excl\") (\"error\")",0x43340000);
  FUN_10132188();
  iVar4 = FUN_100fcb2d();
  pcStack_34 = (char *)(*(float *)(iVar4 + 0x100) + *(float *)(iVar4 + 0x60));
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  fVar9 = (float10)FUN_1011561d();
  fStack_38 = (float)fVar9;
  uStack_20 = (uint)((float)pcStack_34 + fStack_38) ^ _DAT_1028f620;
  local_24 = 0;
  cVar3 = FUN_1010c081("ScrollingRegion",&local_24,0x100,0x800);
  if (cVar3 != '\0') {
    cVar3 = FUN_10116a7b(0,0);
    if (cVar3 != '\0') {
      local_24 = 0;
      uStack_20 = 0;
      cVar3 = FUN_10133727("Clear",0,0,&local_24);
      if (cVar3 != '\0') {
        FUN_101b9292();
      }
      FUN_101165cb();
    }
    local_24 = (undefined4)DAT_10302a70;
    uStack_20 = (uint)((ulonglong)DAT_10302a70 >> 0x20);
    FUN_100fd3bc(0xe,&local_24);
    if (cStack_45 != '\0') {
      FUN_10110666(0xffffffff);
    }
    iVar4 = *(int *)(param_1 + 0x100);
    pcStack_34 = param_1;
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x108);
      iVar8 = 0;
      do {
        pcVar2 = *(char **)(iVar1 + iVar8);
        cVar3 = FUN_100fb858(pcVar2,0);
        if (cVar3 != '\0') {
          local_24 = 0;
          uStack_20 = 0;
          uStack_1c = 0;
          uStack_18 = 0;
          iVar5 = FUN_1025bc20(pcVar2,"[error]");
          uVar10 = _DAT_10302a80;
          uVar11 = _UNK_10302a84;
          if (iVar5 == 0) {
            if (*pcVar2 == '#') {
              uVar10 = (uint)DAT_10302a90;
              uVar11 = (undefined4)((ulonglong)DAT_10302a90 >> 0x20);
              if (pcVar2[1] == ' ') goto LAB_101b9129;
            }
            FUN_1012d079(pcVar2,0);
          }
          else {
LAB_101b9129:
            local_24 = 0x3f800000;
            uStack_18 = 0x3f800000;
            uStack_20 = uVar10;
            uStack_1c = uVar11;
            FUN_100fcd80(0,&local_24);
            FUN_1012d079(pcVar2,0);
            FUN_100fce8e(1);
          }
        }
        iVar8 = iVar8 + 4;
      } while (iVar4 << 2 != iVar8);
    }
    if (cStack_45 != '\0') {
      FUN_1011147d();
    }
    param_1 = pcStack_34;
    if (pcStack_34[0x239] == '\0') {
      if (pcStack_34[0x238] == '\x01') {
        fVar9 = (float10)FUN_101158db();
        pcStack_44 = (char *)(float)fVar9;
        pcStack_3c = pcStack_44;
        fVar9 = (float10)FUN_101158ff();
        fStack_40 = (float)fVar9;
        if (fStack_40 <= (float)pcStack_44) goto LAB_101b91a5;
      }
    }
    else {
LAB_101b91a5:
      FUN_10115acd(0x3f800000);
    }
    param_1[0x239] = '\0';
    FUN_100fd4c4(1);
  }
  FUN_1010c644();
  FUN_10132188();
  cVar3 = FUN_10141729("Input",param_1,0x100,0xc00c0,&LAB_101b941c,param_1);
  if (cVar3 == '\0') {
    FUN_1011262c();
  }
  else {
    sVar6 = _strlen(param_1);
    pcVar2 = param_1 + sVar6;
    do {
      pcVar7 = pcVar2;
      if (pcVar7 <= param_1) break;
      pcVar2 = pcVar7 + -1;
    } while (pcVar7[-1] == ' ');
    *pcVar7 = '\0';
    if (*param_1 != '\0') {
      FUN_101b942a(param_1);
    }
    *param_1 = '\0';
    FUN_1011262c();
    FUN_10112577(0xffffffff);
  }
LAB_101b9268:
  FUN_1010ad44();
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

