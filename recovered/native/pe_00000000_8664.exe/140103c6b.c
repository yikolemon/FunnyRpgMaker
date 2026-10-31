/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140103c6b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140103c6b(void)

{
  undefined4 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  cVar2 = FUN_1400c51fb("Tree Nodes");
  if (cVar2 != '\0') {
    FUN_1400811b6("imgui_demo.cpp",0x1081,"Widgets/Tree Nodes");
    cVar2 = FUN_1400c51fb("Basic trees");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x1085,"Widgets/Tree Nodes/Basic trees");
      uVar1 = DAT_1401c86a4;
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          FUN_1400c67ef(1,2);
        }
        FUN_140091425(iVar7);
        cVar2 = FUN_1400c4fe4(&DAT_140edcdbf,"Child %d",iVar7);
        if (cVar2 != '\0') {
          FUN_1400abfd5("blah blah");
          FUN_140092bab(0,uVar1);
          FUN_1400ad18f("button");
          FUN_1400c66d9();
        }
        FUN_140091667();
        iVar7 = iVar7 + 1;
      } while (iVar7 != 5);
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Hierarchy lines");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x109f,"Widgets/Tree Nodes/Hierarchy lines");
      FUN_14009cf92("Default option for DrawLinesXXX is stored in style.TreeLinesFlags");
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_DrawLinesNone",&DAT_140f1c34c,0x40000);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_DrawLinesFull",&DAT_140f1c34c,0x80000);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_DrawLinesToNodes",&DAT_140f1c34c,0x100000);
      cVar2 = FUN_1400c5ee6("Parent",DAT_140f1c34c);
      if (cVar2 != '\0') {
        cVar2 = FUN_1400c5ee6("Child 1",DAT_140f1c34c);
        if (cVar2 != '\0') {
          local_68 = 0;
          FUN_1400ad187("Button for Child 1");
          FUN_1400c66d9();
        }
        cVar2 = FUN_1400c5ee6("Child 2",DAT_140f1c34c);
        if (cVar2 != '\0') {
          local_68 = 0;
          FUN_1400ad187("Button for Child 2");
          FUN_1400c66d9();
        }
        FUN_1400abfd5("Remaining contents");
        FUN_1400abfd5("Remaining contents");
        FUN_1400c66d9();
      }
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Clipping Large Trees");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x10bc,"Widgets/Tree Nodes/Clipping Large Trees");
      FUN_1400ac1d0(
                   "- Using ImGuiListClipper with trees is a less easy than on arrays or grids.\n- Refer to \'Demo->Examples->Property Editor\' for an example of how to do that.\n- Discuss in #3823"
                   );
      FUN_1400c66d9();
    }
    cVar2 = FUN_1400c51fb("Advanced, with Selectable nodes");
    if (cVar2 != '\0') {
      FUN_1400811b6("imgui_demo.cpp",0x10c6,"Widgets/Tree Nodes/Advanced, with Selectable nodes");
      FUN_14009cf92(
                   "This is a more typical looking tree with selectable nodes.\nClick to select, Ctrl+Click to toggle, click on arrows or double-click to open."
                   );
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_OpenOnArrow",&DAT_140f1c350,0x80);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_OpenOnDoubleClick",&DAT_140f1c350,0x40);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_SpanAvailWidth",&DAT_140f1c350,0x800);
      uVar1 = DAT_1401c86a4;
      FUN_140092bab(0,DAT_1401c86a4);
      FUN_14009cf92(
                   "Extend hit area to all available width instead of allowing more items to be laid out after the node."
                   );
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_SpanFullWidth",&DAT_140f1c350,0x1000);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_SpanLabelWidth",&DAT_140f1c350,0x2000);
      FUN_140092bab(0,uVar1);
      FUN_14009cf92("Reduce hit area to the text label and a bit of margin.");
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_SpanAllColumns",&DAT_140f1c350,0x4000);
      FUN_140092bab(0,uVar1);
      FUN_14009cf92("For use in Tables only.");
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_AllowOverlap",&DAT_140f1c350,4);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_Framed",&DAT_140f1c350,2);
      FUN_140092bab(0,uVar1);
      FUN_14009cf92("Draw frame with background (e.g. for CollapsingHeader)");
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_FramePadding",&DAT_140f1c350,0x400);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_NavLeftJumpsToParent",&DAT_140f1c350,0x20000);
      FUN_14009cf92("Default option for DrawLinesXXX is stored in style.TreeLinesFlags");
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_DrawLinesNone",&DAT_140f1c350,0x40000);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_DrawLinesFull",&DAT_140f1c350,0x80000);
      thunk_FUN_1400af8bf("ImGuiTreeNodeFlags_DrawLinesToNodes",&DAT_140f1c350,0x100000);
      FUN_1400aeb6a("Align label with current X position",&DAT_140f31bd4);
      FUN_1400aeb6a("Test tree node as drag source",&DAT_140f31bd5);
      FUN_1400abfd5("Hello!");
      if (DAT_140f31bd4 != '\0') {
        FUN_1400c67d3();
        FUN_14009331a();
      }
      uVar1 = DAT_1401c86a4;
      uVar6 = 0xffffffff;
      uVar8 = 0;
      do {
        uVar5 = (DAT_140f1c354 >> ((uint)uVar8 & 0x1f) & 1) != 0 | _DAT_140f1c350;
        if (uVar8 < 3) {
          cVar2 = FUN_1400c5f8e(uVar8,uVar5,"Selectable Node %d",uVar8 & 0xffffffff);
          cVar3 = FUN_140089f15();
          if (cVar3 != '\0') {
            cVar3 = FUN_140089f36();
            if (cVar3 == '\0') {
              uVar6 = uVar8 & 0xffffffff;
            }
          }
          if (DAT_140f31bd5 == '\x01') {
            cVar3 = FUN_140095b6d();
            if (cVar3 != '\0') {
              FUN_140095e05("_TREENODE",0,0,0);
              FUN_1400abfd5();
              FUN_140095dd0();
            }
          }
          if ((uVar8 == 2) && ((_DAT_140f1c350 & 0x2000) != 0)) {
            FUN_140092bab(0,uVar1);
            FUN_1400ad18f();
          }
          if (cVar2 != '\0') {
            FUN_1400ac536("Blah blah\nBlah Blah");
            FUN_140092bab(0,uVar1);
            FUN_1400ad18f();
            FUN_1400c66d9();
          }
        }
        else {
          FUN_1400c5f8e(uVar8,uVar5 | 0x108,"Selectable Leaf %d",uVar8 & 0xffffffff);
          cVar2 = FUN_140089f15();
          if (cVar2 != '\0') {
            cVar2 = FUN_140089f36();
            if (cVar2 == '\0') {
              uVar6 = uVar8 & 0xffffffff;
            }
          }
          if (DAT_140f31bd5 == '\x01') {
            cVar2 = FUN_140095b6d();
            if (cVar2 != '\0') {
              FUN_140095e05("_TREENODE",0,0,0);
              FUN_1400abfd5();
              FUN_140095dd0();
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 6);
      if ((uint)uVar6 != 0xffffffff) {
        lVar4 = FUN_140081200();
        uVar5 = 0;
        if (*(char *)(lVar4 + 0x108) != '\0') {
          uVar5 = DAT_140f1c354;
        }
        DAT_140f1c354 = uVar5 ^ 1 << ((uint)uVar6 & 0x1f);
      }
      if (DAT_140f31bd4 == '\x01') {
        FUN_1400c67d3();
        FUN_1400932c6();
      }
      FUN_1400c66d9();
    }
    FUN_1400c66d9();
  }
  if (DAT_140f17b40 == (local_60 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_60 ^ (ulonglong)auStack_88);
}

