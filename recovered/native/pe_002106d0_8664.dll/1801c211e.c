/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c211e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801c211e(char *param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  size_t sVar9;
  char *pcVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  char *local_b0;
  char local_99;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_80;
  
  local_80 = DAT_180402640 ^ (ulonglong)auStack_d8;
  local_98 = (undefined4)DAT_1803290c0;
  uStack_94 = (uint)((ulonglong)DAT_1803290c0 >> 0x20);
  FUN_18010ca41(&local_98,4);
  cVar5 = FUN_18010ca66(param_2,param_3,0);
  if (cVar5 == '\0') goto LAB_1801c2592;
  FUN_180107e9e("imgui_demo.cpp",0x23b4,"Examples/Console");
  cVar5 = FUN_18011b87b(0,0);
  if (cVar5 != '\0') {
    cVar5 = FUN_1801377a6("Close Console",0,0,1);
    if (cVar5 != '\0') {
      *param_3 = 0;
    }
    FUN_18011b3ef();
  }
  FUN_1801332a0(
               "This example implements a console with basic coloring, completion (TAB key) and history (Up/Down keys). A more elaborate implementation may want to store entries along with extra data such as timestamp, emitter, etc."
               );
  FUN_1801332a0("Enter \'HELP\' for help.");
  cVar5 = FUN_18013425f("Add Debug Text");
  if (cVar5 != '\0') {
    FUN_1801c263c(param_1,"%d some text",*(undefined4 *)(param_1 + 0x100));
    FUN_1801c263c(param_1,"some more text");
    FUN_1801c263c(param_1,"display very important message here!");
  }
  FUN_180119893(0,DAT_1802bb8e0);
  cVar5 = FUN_18013425f("Add Debug Error");
  if (cVar5 != '\0') {
    FUN_1801c263c(param_1,"[error] something went wrong");
  }
  FUN_180119893(0,DAT_1802bb8e0);
  cVar5 = FUN_18013425f("Clear");
  if (cVar5 != '\0') {
    FUN_1801c25e0(param_1);
  }
  FUN_180119893(0,DAT_1802bb8e0);
  cVar5 = FUN_18013425f(&DAT_1803605a3);
  FUN_180137ca1();
  cVar6 = FUN_18011b56a("Options",0);
  if (cVar6 != '\0') {
    FUN_180135c3a("Auto-scroll",param_1 + 0x250);
    FUN_18011b3ef();
  }
  FUN_180119400(0x1230,0x40000);
  local_98 = 0;
  uStack_94 = 0;
  cVar6 = FUN_180134257("Options");
  if (cVar6 != '\0') {
    FUN_18011ac8e("Options",0);
  }
  FUN_180119893(0,DAT_1802bb8e0);
  FUN_1800ffd62(param_1 + 0x138,"Filter (\"incl,-excl\") (\"error\")",DAT_1803292f4);
  FUN_180137ca1();
  lVar7 = FUN_18010128e();
  fVar13 = *(float *)(lVar7 + 0x100);
  fVar14 = *(float *)(lVar7 + 0x60);
  fVar12 = (float)FUN_18011a472();
  uStack_94 = (uint)(fVar12 + fVar13 + fVar14) ^ _DAT_1802b0ce0;
  local_98 = 0;
  cVar6 = FUN_180110d11("ScrollingRegion",&local_98,0x100,0x800);
  if (cVar6 != '\0') {
    cVar6 = FUN_18011b8ee(0,0);
    if (cVar6 != '\0') {
      local_98 = 0;
      uStack_94 = 0;
      cVar6 = FUN_1801391f6("Clear",0,0);
      if (cVar6 != '\0') {
        FUN_1801c25e0(param_1);
      }
      FUN_18011b3ef();
    }
    local_98 = (undefined4)DAT_180329300;
    uStack_94 = (uint)((ulonglong)DAT_180329300 >> 0x20);
    FUN_180101bbb(0xe);
    local_99 = cVar5;
    if (cVar5 != '\0') {
      FUN_180115307(0xffffffff);
    }
    uVar4 = DAT_180329320;
    uVar3 = _DAT_180329310;
    iVar1 = *(int *)(param_1 + 0x100);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x108);
      lVar11 = 0;
      do {
        pcVar2 = *(char **)(lVar7 + lVar11);
        cVar5 = FUN_1800fff6e(param_1 + 0x138,pcVar2,0);
        if (cVar5 != '\0') {
          local_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = 0;
          lVar8 = FUN_18026ee50(pcVar2,"[error]");
          uVar15 = uVar3;
          if ((lVar8 == 0) && ((*pcVar2 != '#' || (uVar15 = uVar4, pcVar2[1] != ' ')))) {
            FUN_18013309a(pcVar2,0);
          }
          else {
            local_98 = 0x3f800000;
            uStack_94 = (uint)uVar15;
            uStack_90 = (undefined4)((ulonglong)uVar15 >> 0x20);
            uStack_8c = 0x3f800000;
            FUN_1801014f9(0,&local_98);
            FUN_18013309a(pcVar2,0);
            FUN_180101625(1);
          }
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar1 * 8 != lVar11);
    }
    if (local_99 != '\0') {
      FUN_1801160c4();
    }
    if (param_1[0x251] == '\0') {
      if (param_1[0x250] == '\x01') {
        fVar13 = (float)FUN_18011a712();
        fVar14 = (float)FUN_18011a740();
        if (fVar14 <= fVar13) goto LAB_1801c24d4;
      }
    }
    else {
LAB_1801c24d4:
      FUN_18011a87c(DAT_1802ac570);
    }
    param_1[0x251] = '\0';
    FUN_180101ccb(1);
  }
  FUN_180111339();
  FUN_180137ca1();
  local_b8 = &LAB_1801c2796;
  local_b0 = param_1;
  cVar5 = FUN_180145e1f("Input",param_1,0x100,0xc00c0);
  if (cVar5 == '\0') {
    FUN_18011732f();
  }
  else {
    sVar9 = strlen(param_1);
    pcVar2 = param_1 + sVar9;
    do {
      pcVar10 = pcVar2;
      if (pcVar10 <= param_1) break;
      pcVar2 = pcVar10 + -1;
    } while (pcVar10[-1] == ' ');
    *pcVar10 = '\0';
    if (*param_1 != '\0') {
      FUN_1801c27a2(param_1,param_1);
    }
    *param_1 = '\0';
    FUN_18011732f();
    FUN_180117268(0xffffffff);
  }
LAB_1801c2592:
  FUN_18010f900();
  if (DAT_180402640 == (local_80 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_80 ^ (ulonglong)auStack_d8);
}

