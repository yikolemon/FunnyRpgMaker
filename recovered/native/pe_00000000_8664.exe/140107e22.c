/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140107e22 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140107e22(char *param_1,undefined8 param_2,undefined1 *param_3)

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
  
  local_80 = DAT_140f17b40 ^ (ulonglong)auStack_d8;
  local_98 = (undefined4)DAT_140e8d460;
  uStack_94 = (uint)((ulonglong)DAT_140e8d460 >> 0x20);
  FUN_140085d59(&local_98,4);
  cVar5 = FUN_140085d7e(param_2,param_3,0);
  if (cVar5 == '\0') goto LAB_140108296;
  FUN_1400811b6("imgui_demo.cpp",0x23b4,"Examples/Console");
  cVar5 = FUN_140094b37(0,0);
  if (cVar5 != '\0') {
    cVar5 = FUN_1400b06d6("Close Console",0,0,1);
    if (cVar5 != '\0') {
      *param_3 = 0;
    }
    FUN_1400946ab();
  }
  FUN_1400ac1d0(
               "This example implements a console with basic coloring, completion (TAB key) and history (Up/Down keys). A more elaborate implementation may want to store entries along with extra data such as timestamp, emitter, etc."
               );
  FUN_1400ac1d0("Enter \'HELP\' for help.");
  cVar5 = FUN_1400ad18f("Add Debug Text");
  if (cVar5 != '\0') {
    FUN_140108340(param_1,"%d some text",*(undefined4 *)(param_1 + 0x100));
    FUN_140108340(param_1,"some more text");
    FUN_140108340(param_1,"display very important message here!");
  }
  FUN_140092bab(0,DAT_1401c86a4);
  cVar5 = FUN_1400ad18f("Add Debug Error");
  if (cVar5 != '\0') {
    FUN_140108340(param_1,"[error] something went wrong");
  }
  FUN_140092bab(0,DAT_1401c86a4);
  cVar5 = FUN_1400ad18f("Clear");
  if (cVar5 != '\0') {
    FUN_1401082e4(param_1);
  }
  FUN_140092bab(0,DAT_1401c86a4);
  cVar5 = FUN_1400ad18f(&DAT_140ec27a5);
  FUN_1400b0bd1();
  cVar6 = FUN_140094826("Options",0);
  if (cVar6 != '\0') {
    FUN_1400aeb6a("Auto-scroll",param_1 + 0x250);
    FUN_1400946ab();
  }
  FUN_140092718(0x1230,0x40000);
  local_98 = 0;
  uStack_94 = 0;
  cVar6 = FUN_1400ad187("Options");
  if (cVar6 != '\0') {
    FUN_140093f4a("Options",0);
  }
  FUN_140092bab(0,DAT_1401c86a4);
  FUN_14007901e(param_1 + 0x138,"Filter (\"incl,-excl\") (\"error\")",DAT_140e8d684);
  FUN_1400b0bd1();
  lVar7 = FUN_14007a54a();
  fVar13 = *(float *)(lVar7 + 0x100);
  fVar14 = *(float *)(lVar7 + 0x60);
  fVar12 = (float)FUN_14009378a();
  uStack_94 = (uint)(fVar12 + fVar13 + fVar14) ^ _DAT_1401c8590;
  local_98 = 0;
  cVar6 = FUN_14008a029("ScrollingRegion",&local_98,0x100,0x800);
  if (cVar6 != '\0') {
    cVar6 = FUN_140094baa(0,0);
    if (cVar6 != '\0') {
      local_98 = 0;
      uStack_94 = 0;
      cVar6 = FUN_1400b2126("Clear",0,0);
      if (cVar6 != '\0') {
        FUN_1401082e4(param_1);
      }
      FUN_1400946ab();
    }
    local_98 = (undefined4)DAT_140e8d690;
    uStack_94 = (uint)((ulonglong)DAT_140e8d690 >> 0x20);
    FUN_14007ae77(0xe);
    local_99 = cVar5;
    if (cVar5 != '\0') {
      FUN_14008e61f(0xffffffff);
    }
    uVar4 = DAT_140e8d6b0;
    uVar3 = _DAT_140e8d6a0;
    iVar1 = *(int *)(param_1 + 0x100);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x108);
      lVar11 = 0;
      do {
        pcVar2 = *(char **)(lVar7 + lVar11);
        cVar5 = FUN_14007922a(param_1 + 0x138,pcVar2,0);
        if (cVar5 != '\0') {
          local_98 = 0;
          uStack_94 = 0;
          uStack_90 = 0;
          uStack_8c = 0;
          lVar8 = FUN_1401908c0(pcVar2,"[error]");
          uVar15 = uVar3;
          if ((lVar8 == 0) && ((*pcVar2 != '#' || (uVar15 = uVar4, pcVar2[1] != ' ')))) {
            FUN_1400abfca(pcVar2,0);
          }
          else {
            local_98 = 0x3f800000;
            uStack_94 = (uint)uVar15;
            uStack_90 = (undefined4)((ulonglong)uVar15 >> 0x20);
            uStack_8c = 0x3f800000;
            FUN_14007a7b5(0,&local_98);
            FUN_1400abfca(pcVar2,0);
            FUN_14007a8e1(1);
          }
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar1 * 8 != lVar11);
    }
    if (local_99 != '\0') {
      FUN_14008f3dc();
    }
    if (param_1[0x251] == '\0') {
      if (param_1[0x250] == '\x01') {
        fVar13 = (float)FUN_1400939ce();
        fVar14 = (float)FUN_1400939fc();
        if (fVar14 <= fVar13) goto LAB_1401081d8;
      }
    }
    else {
LAB_1401081d8:
      FUN_140093b38(DAT_1401c86c8);
    }
    param_1[0x251] = '\0';
    FUN_14007af87(1);
  }
  FUN_14008a651();
  FUN_1400b0bd1();
  local_b8 = &LAB_14010849a;
  local_b0 = param_1;
  cVar5 = FUN_1400bed4f("Input",param_1,0x100,0xc00c0);
  if (cVar5 == '\0') {
    FUN_140090647();
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
      FUN_1401084a6(param_1,param_1);
    }
    *param_1 = '\0';
    FUN_140090647();
    FUN_140090580(0xffffffff);
  }
LAB_140108296:
  FUN_140088c18();
  if (DAT_140f17b40 == (local_80 ^ (ulonglong)auStack_d8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_80 ^ (ulonglong)auStack_d8);
}

