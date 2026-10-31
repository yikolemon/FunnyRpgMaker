/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801b9633 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801b9633(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined *puVar14;
  longlong lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  double dVar21;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  ulonglong local_c0;
  
  local_c0 = DAT_180402640 ^ (ulonglong)auStack_128;
  cVar7 = FUN_18014c2cb("Selectables");
  if (cVar7 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x9a3,"Widgets/Selectables");
    FUN_180107e9e("imgui_demo.cpp",0x9aa,"Widgets/Selectables/Basic");
    cVar7 = FUN_18014c2cb("Basic");
    if (cVar7 != '\0') {
      local_e8 = 0;
      FUN_18014daf9("1. I am selectable",&DAT_180404a38,0,&local_e8);
      local_e8 = 0;
      FUN_18014daf9("2. I am selectable",&DAT_180404a39,0,&local_e8);
      local_e8 = 0;
      FUN_18014daf9("3. I am selectable",&DAT_180404a3a,0,&local_e8);
      local_e8 = 0;
      cVar7 = FUN_1801391f6("4. I am double clickable",DAT_180404a3b,4,&local_e8);
      if ((cVar7 != '\0') && (cVar7 = FUN_180118db8(0), cVar7 != '\0')) {
        DAT_180404a3b = DAT_180404a3b ^ 1;
      }
      FUN_18014d7a9();
    }
    FUN_180107e9e("imgui_demo.cpp",0x9b7,"Widgets/Selectables/Rendering more items on the same line"
                 );
    cVar7 = FUN_18014c2cb("Multiple items on the same line");
    if (cVar7 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x9ba,"Widgets/Selectables/Multiple items on the same line");
      FUN_180110c97();
      uVar10 = 0;
      local_e8 = 0;
      FUN_18014daf9("main.c",&DAT_18041fe82,0,&local_e8);
      FUN_180119893(0);
      FUN_18013425f("Link 1");
      FUN_180110c97();
      local_e8 = 0;
      FUN_18014daf9("hello.cpp",&DAT_18041fe83,0,&local_e8);
      FUN_180119893(0);
      FUN_18013425f("Link 2");
      FUN_180110c97();
      local_e8 = 0;
      FUN_18014daf9("hello.h",&DAT_18041fe84,0,&local_e8);
      FUN_180119893(0);
      FUN_18013425f(&DAT_18036e421);
      FUN_1801377c5();
      local_108 = 0xbf800000;
      FUN_1801023ca(&local_e8,"x",0,0);
      uVar6 = local_e8;
      uVar4 = DAT_180329280;
      uVar3 = DAT_180328ff0._4_4_;
      uVar2 = (uint)DAT_180328ff0;
      uVar11 = _DAT_1802deb20;
      auVar1 = _DAT_1802dc280;
      do {
        uVar9 = (uint)uVar10;
        FUN_18011810d(uVar10 & 0xffffffff);
        FUN_18013799d();
        local_e8 = 0;
        cVar7 = FUN_1801391f6("##selectable",uVar10 == DAT_18041fe8c,0x10,&local_e8);
        if (cVar7 != '\0') {
          DAT_18041fe8c = uVar9;
        }
        FUN_180119893(0);
        FUN_180135c3a("##check",&DAT_18041fe85 + uVar10);
        FUN_180119893(0);
        uVar20 = CONCAT44(-(uint)((uVar9 & uVar3) == 0),-(uint)((uVar9 & uVar2) == 0));
        local_e8 = uVar20 & uVar11 | ~uVar20 & auVar1._0_8_;
        uStack_e0 = uVar4;
        local_f0 = uVar6 & 0xffffffff;
        FUN_180149615("##color",&local_e8,0x40,&local_f0);
        FUN_180119893(0);
        FUN_1801330a5("Some label");
        FUN_18011834f();
        uVar10 = uVar10 + 1;
      } while (uVar10 != 5);
      FUN_18014d7a9();
    }
    cVar7 = FUN_18014c2cb("In Tables");
    if (cVar7 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x9e3,"Widgets/Selectables/In Tables");
      local_e8 = 0;
      local_108 = 0;
      cVar7 = FUN_180164c18("split1",3,0x791);
      if (cVar7 != '\0') {
        uVar11 = 0;
        do {
          FUN_1801bf199(&local_e8,"Item %d",uVar11 & 0xffffffff);
          FUN_18016ab34();
          local_f0 = 0;
          FUN_18014daf9(&local_e8,&DAT_18041fe90 + uVar11,0,&local_f0);
          uVar11 = uVar11 + 1;
        } while (uVar11 != 10);
        FUN_180168430();
      }
      FUN_1801377c5();
      local_e8 = 0;
      local_108 = 0;
      cVar7 = FUN_180164c18("split2",3,0x791);
      if (cVar7 != '\0') {
        uVar11 = 0;
        do {
          FUN_1801bf199(&local_e8,"Item %d",uVar11 & 0xffffffff);
          FUN_18016a67b(0);
          FUN_18016ab34();
          local_f0 = 0;
          FUN_18014daf9(&local_e8,&DAT_18041fe90 + uVar11,2,&local_f0);
          FUN_18016ab34();
          FUN_1801330a5("Some other contents");
          FUN_18016ab34();
          FUN_1801330a5("123456");
          uVar11 = uVar11 + 1;
        } while (uVar11 != 10);
        FUN_180168430();
      }
      FUN_18014d7a9();
    }
    cVar7 = FUN_18014c2cb("Grid");
    if (cVar7 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xa07,"Widgets/Selectables/Grid");
      dVar21 = (double)FUN_180107f34();
      puVar12 = &DAT_180404a40;
      lVar8 = FUN_1802a8150(&DAT_180404a40,0,0x10);
      if (lVar8 == 0) {
        fVar17 = (float)FUN_18028a830(DAT_1802dbb3c * (float)dVar21);
        fVar18 = (float)FUN_180284590();
        local_e8 = CONCAT44(fVar17 * DAT_1802de570._4_4_ + DAT_1802de570._4_4_,
                            fVar18 * (float)DAT_1802de570 + (float)DAT_1802de570);
        FUN_180101bbb(0x25);
      }
      local_108 = 0xbf800000;
      iVar16 = 0;
      FUN_1801023ca(&local_e8,"Sailor",0,0);
      uVar5 = (undefined4)local_e8;
      lVar13 = 0;
      do {
        lVar15 = 0;
        do {
          if (lVar15 != 0) {
            FUN_180119893(0);
          }
          FUN_18011810d(iVar16 + (int)lVar15);
          local_e8 = CONCAT44(uVar5,uVar5);
          cVar7 = FUN_1801391f6("Sailor",puVar12[lVar15] != '\0',0,&local_e8);
          if (cVar7 != '\0') {
            puVar12[lVar15] = puVar12[lVar15] ^ 1;
            if ((lVar15 == 0) || (puVar12[lVar15 + -1] = puVar12[lVar15 + -1] ^ 1, lVar15 != 3)) {
              puVar12[lVar15 + 1] = puVar12[lVar15 + 1] ^ 1;
            }
            if ((lVar13 == 0) || (puVar12[lVar15 + -4] = puVar12[lVar15 + -4] ^ 1, lVar13 != 3)) {
              puVar12[lVar15 + 4] = puVar12[lVar15 + 4] ^ 1;
            }
          }
          FUN_18011834f();
          lVar15 = lVar15 + 1;
        } while (lVar15 != 4);
        lVar13 = lVar13 + 1;
        puVar12 = puVar12 + 4;
        iVar16 = iVar16 + 4;
      } while (lVar13 != 4);
      if (lVar8 == 0) {
        FUN_180101ccb(1);
      }
      FUN_18014d7a9();
    }
    cVar7 = FUN_18014c2cb("Alignment");
    if (cVar7 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0xa29,"Widgets/Selectables/Alignment");
      FUN_180124063(
                   "By default, Selectables uses style.SelectableTextAlign but it can be overridden on a per-item basis using PushStyleVar(). You\'ll probably want to always keep your default situation to left-align otherwise it becomes difficult to layout multiple items on a same line"
                   );
      local_108 = 0xbf800000;
      uVar11 = 0;
      FUN_1801023ca(&local_e8,"(1.0,1.0)",0,0);
      fVar17 = DAT_1802dbb2c;
      uVar5 = (undefined4)local_e8;
      puVar14 = &DAT_180404a50;
      do {
        fVar18 = (float)uVar11 * fVar17;
        lVar8 = 0;
        do {
          fVar19 = (float)(int)lVar8 * fVar17;
          local_f0 = CONCAT44(fVar18,fVar19);
          FUN_1801bf199(&local_e8,"(%.1f,%.1f)",(double)fVar19,SUB84((double)fVar18,0));
          if (lVar8 != 0) {
            FUN_180119893();
          }
          FUN_180101bbb(0x25,&local_f0);
          local_f8 = uVar5;
          local_f4 = uVar5;
          FUN_18014daf9(&local_e8,puVar14 + lVar8,0,&local_f8);
          FUN_180101ccb(1);
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        uVar11 = uVar11 + 1;
        puVar14 = puVar14 + 3;
      } while (uVar11 != 3);
      FUN_18014d7a9();
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_c0 ^ (ulonglong)auStack_128)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_c0 ^ (ulonglong)auStack_128);
}

