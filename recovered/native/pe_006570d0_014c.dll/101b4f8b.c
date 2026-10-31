/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b4f8b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b4f8b(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  cVar1 = FUN_10147d77("Tree Nodes");
  if (cVar1 != '\0') {
    FUN_101032c6("imgui_demo.cpp",0x1081,"Widgets/Tree Nodes");
    cVar1 = FUN_10147d77("Basic trees");
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x1085,"Widgets/Tree Nodes/Basic trees");
      iVar5 = 0;
      do {
        if (iVar5 == 0) {
          FUN_1014949d(1,2);
        }
        FUN_10113358(iVar5);
        cVar1 = FUN_10147bc2(&DAT_10356101,"Child %d",iVar5);
        if (cVar1 != '\0') {
          FUN_1012d08c("blah blah");
          FUN_10114a0e(0,0xbf800000);
          FUN_1012e1ca("button");
          FUN_10149387();
        }
        FUN_10113568();
        iVar5 = iVar5 + 1;
      } while (iVar5 != 5);
      FUN_10149387();
    }
    cVar1 = FUN_10147d77("Hierarchy lines");
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x109f,"Widgets/Tree Nodes/Hierarchy lines");
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_DrawLinesNone",&DAT_1038ece4,0x40000);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_DrawLinesFull",&DAT_1038ece4,0x80000);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_DrawLinesToNodes",&DAT_1038ece4,0x100000);
      cVar1 = FUN_10148b8c("Parent",DAT_1038ece4);
      if (cVar1 != '\0') {
        cVar1 = FUN_10148b8c("Child 1",DAT_1038ece4);
        if (cVar1 != '\0') {
          local_1c = 0;
          FUN_1012e1b7("Button for Child 1",&local_1c);
          FUN_10149387();
        }
        cVar1 = FUN_10148b8c("Child 2",DAT_1038ece4);
        if (cVar1 != '\0') {
          local_1c = 0;
          FUN_1012e1b7("Button for Child 2",&local_1c);
          FUN_10149387();
        }
        FUN_1012d08c("Remaining contents");
        FUN_1012d08c("Remaining contents");
        FUN_10149387();
      }
      FUN_10149387();
    }
    cVar1 = FUN_10147d77("Clipping Large Trees");
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x10bc,"Widgets/Tree Nodes/Clipping Large Trees");
      FUN_1012d238(
                  "- Using ImGuiListClipper with trees is a less easy than on arrays or grids.\n- Refer to \'Demo->Examples->Property Editor\' for an example of how to do that.\n- Discuss in #3823"
                  );
      FUN_10149387();
    }
    cVar1 = FUN_10147d77("Advanced, with Selectable nodes");
    if (cVar1 != '\0') {
      FUN_101032c6("imgui_demo.cpp",0x10c6,"Widgets/Tree Nodes/Advanced, with Selectable nodes");
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_OpenOnArrow",&DAT_1038ece8,0x80);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_OpenOnDoubleClick",&DAT_1038ece8,0x40);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_SpanAvailWidth",&DAT_1038ece8,0x800);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_SpanFullWidth",&DAT_1038ece8,0x1000);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_SpanLabelWidth",&DAT_1038ece8,0x2000);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_SpanAllColumns",&DAT_1038ece8,0x4000);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_AllowOverlap",&DAT_1038ece8,4);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_Framed",&DAT_1038ece8,2);
      FUN_10114a0e(0,0xbf800000);
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_FramePadding",&DAT_1038ece8,0x400);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_NavLeftJumpsToParent",&DAT_1038ece8,0x20000);
      FUN_1011eaad();
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_DrawLinesNone",&DAT_1038ece8,0x40000);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_DrawLinesFull",&DAT_1038ece8,0x80000);
      thunk_FUN_10130d81("ImGuiTreeNodeFlags_DrawLinesToNodes",&DAT_1038ece8,0x100000);
      FUN_1012ff1a("Align label with current X position",&DAT_103a4534);
      FUN_1012ff1a("Test tree node as drag source",&DAT_103a4535);
      FUN_1012d08c("Hello!");
      if (DAT_103a4534 != '\0') {
        fVar7 = (float10)FUN_10149479();
        FUN_101151af((float)fVar7);
      }
      uVar6 = 0xffffffff;
      uVar4 = 0;
      do {
        uVar3 = (DAT_1038ecec >> (uVar4 & 0x1f) & 1) != 0 | _DAT_1038ece8;
        if (uVar4 < 3) {
          cVar1 = FUN_10148c23(uVar4,uVar3,"Selectable Node %d",uVar4);
          cVar2 = FUN_1010bf79(0);
          if (cVar2 != '\0') {
            cVar2 = FUN_1010bf99();
            if (cVar2 == '\0') {
              uVar6 = uVar4;
            }
          }
          if (DAT_103a4535 == '\x01') {
            cVar2 = FUN_101179e3(0);
            if (cVar2 != '\0') {
              FUN_10117c4b("_TREENODE",0,0,0);
              FUN_1012d08c("This is a drag and drop source");
              FUN_10117c1f();
            }
          }
          if ((uVar4 == 2) && ((_DAT_1038ece8 & 0x2000) != 0)) {
            FUN_10114a0e(0,0xbf800000);
            FUN_1012e1ca("button");
          }
          if (cVar1 != '\0') {
            FUN_1012d551("Blah blah\nBlah Blah");
            FUN_10114a0e(0,0xbf800000);
            FUN_1012e1ca("Button");
            FUN_10149387();
          }
        }
        else {
          FUN_10148c23(uVar4,uVar3 | 0x108,"Selectable Leaf %d",uVar4);
          cVar1 = FUN_1010bf79(0);
          if (cVar1 != '\0') {
            cVar1 = FUN_1010bf99();
            if (cVar1 == '\0') {
              uVar6 = uVar4;
            }
          }
          if (DAT_103a4535 == '\x01') {
            cVar1 = FUN_101179e3(0);
            if (cVar1 != '\0') {
              FUN_10117c4b("_TREENODE",0,0,0);
              FUN_1012d08c("This is a drag and drop source");
              FUN_10117c1f();
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != 6);
      if (uVar6 != 0xffffffff) {
        iVar5 = FUN_1010330d();
        uVar4 = 0;
        if (*(char *)(iVar5 + 0xd4) != '\0') {
          uVar4 = DAT_1038ecec;
        }
        DAT_1038ecec = uVar4 ^ 1 << (uVar6 & 0x1f);
      }
      if (DAT_103a4534 == '\x01') {
        fVar7 = (float10)FUN_10149479();
        FUN_10115158((float)fVar7);
      }
      FUN_10149387();
    }
    FUN_10149387();
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

