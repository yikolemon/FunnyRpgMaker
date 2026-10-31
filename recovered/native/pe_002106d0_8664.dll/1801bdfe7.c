/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801bdfe7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bdfe7(void)

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
  
  local_60 = DAT_180402640 ^ (ulonglong)auStack_88;
  cVar2 = FUN_18014c2cb("Tree Nodes");
  if (cVar2 != '\0') {
    FUN_180107e9e("imgui_demo.cpp",0x1081,"Widgets/Tree Nodes");
    cVar2 = FUN_18014c2cb("Basic trees");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x1085,"Widgets/Tree Nodes/Basic trees");
      uVar1 = DAT_1802bb8e0;
      iVar7 = 0;
      do {
        if (iVar7 == 0) {
          FUN_18014d8bf(1,2);
        }
        FUN_18011810d(iVar7);
        cVar2 = FUN_18014c0b4(&DAT_1803861e4,"Child %d",iVar7);
        if (cVar2 != '\0') {
          FUN_1801330a5("blah blah");
          FUN_180119893(0,uVar1);
          FUN_18013425f("button");
          FUN_18014d7a9();
        }
        FUN_18011834f();
        iVar7 = iVar7 + 1;
      } while (iVar7 != 5);
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Hierarchy lines");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x109f,"Widgets/Tree Nodes/Hierarchy lines");
      FUN_180124063("Default option for DrawLinesXXX is stored in style.TreeLinesFlags");
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_DrawLinesNone",&DAT_180408bac,0x40000);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_DrawLinesFull",&DAT_180408bac,0x80000);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_DrawLinesToNodes",&DAT_180408bac,0x100000);
      cVar2 = FUN_18014cfb6("Parent",DAT_180408bac);
      if (cVar2 != '\0') {
        cVar2 = FUN_18014cfb6("Child 1",DAT_180408bac);
        if (cVar2 != '\0') {
          local_68 = 0;
          FUN_180134257("Button for Child 1");
          FUN_18014d7a9();
        }
        cVar2 = FUN_18014cfb6("Child 2",DAT_180408bac);
        if (cVar2 != '\0') {
          local_68 = 0;
          FUN_180134257("Button for Child 2");
          FUN_18014d7a9();
        }
        FUN_1801330a5("Remaining contents");
        FUN_1801330a5("Remaining contents");
        FUN_18014d7a9();
      }
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Clipping Large Trees");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x10bc,"Widgets/Tree Nodes/Clipping Large Trees");
      FUN_1801332a0(
                   "- Using ImGuiListClipper with trees is a less easy than on arrays or grids.\n- Refer to \'Demo->Examples->Property Editor\' for an example of how to do that.\n- Discuss in #3823"
                   );
      FUN_18014d7a9();
    }
    cVar2 = FUN_18014c2cb("Advanced, with Selectable nodes");
    if (cVar2 != '\0') {
      FUN_180107e9e("imgui_demo.cpp",0x10c6,"Widgets/Tree Nodes/Advanced, with Selectable nodes");
      FUN_180124063(
                   "This is a more typical looking tree with selectable nodes.\nClick to select, Ctrl+Click to toggle, click on arrows or double-click to open."
                   );
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_OpenOnArrow",&DAT_180408bb0,0x80);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_OpenOnDoubleClick",&DAT_180408bb0,0x40);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_SpanAvailWidth",&DAT_180408bb0,0x800);
      uVar1 = DAT_1802bb8e0;
      FUN_180119893(0,DAT_1802bb8e0);
      FUN_180124063(
                   "Extend hit area to all available width instead of allowing more items to be laid out after the node."
                   );
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_SpanFullWidth",&DAT_180408bb0,0x1000);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_SpanLabelWidth",&DAT_180408bb0,0x2000);
      FUN_180119893(0,uVar1);
      FUN_180124063("Reduce hit area to the text label and a bit of margin.");
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_SpanAllColumns",&DAT_180408bb0,0x4000);
      FUN_180119893(0,uVar1);
      FUN_180124063("For use in Tables only.");
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_AllowOverlap",&DAT_180408bb0,4);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_Framed",&DAT_180408bb0,2);
      FUN_180119893(0,uVar1);
      FUN_180124063("Draw frame with background (e.g. for CollapsingHeader)");
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_FramePadding",&DAT_180408bb0,0x400);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_NavLeftJumpsToParent",&DAT_180408bb0,0x20000);
      FUN_180124063("Default option for DrawLinesXXX is stored in style.TreeLinesFlags");
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_DrawLinesNone",&DAT_180408bb0,0x40000);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_DrawLinesFull",&DAT_180408bb0,0x80000);
      thunk_FUN_18013698f("ImGuiTreeNodeFlags_DrawLinesToNodes",&DAT_180408bb0,0x100000);
      FUN_180135c3a("Align label with current X position",&DAT_180420484);
      FUN_180135c3a("Test tree node as drag source",&DAT_180420485);
      FUN_1801330a5("Hello!");
      if (DAT_180420484 != '\0') {
        FUN_18014d8a3();
        FUN_18011a002();
      }
      uVar1 = DAT_1802bb8e0;
      uVar6 = 0xffffffff;
      uVar8 = 0;
      do {
        uVar5 = (DAT_180408bb4 >> ((uint)uVar8 & 0x1f) & 1) != 0 | _DAT_180408bb0;
        if (uVar8 < 3) {
          cVar2 = FUN_18014d05e(uVar8,uVar5,"Selectable Node %d",uVar8 & 0xffffffff);
          cVar3 = FUN_180110bfd();
          if (cVar3 != '\0') {
            cVar3 = FUN_180110c1e();
            if (cVar3 == '\0') {
              uVar6 = uVar8 & 0xffffffff;
            }
          }
          if (DAT_180420485 == '\x01') {
            cVar3 = FUN_18011c8b1();
            if (cVar3 != '\0') {
              FUN_18011cb49("_TREENODE",0,0,0);
              FUN_1801330a5();
              FUN_18011cb14();
            }
          }
          if ((uVar8 == 2) && ((_DAT_180408bb0 & 0x2000) != 0)) {
            FUN_180119893(0,uVar1);
            FUN_18013425f();
          }
          if (cVar2 != '\0') {
            FUN_180133606("Blah blah\nBlah Blah");
            FUN_180119893(0,uVar1);
            FUN_18013425f();
            FUN_18014d7a9();
          }
        }
        else {
          FUN_18014d05e(uVar8,uVar5 | 0x108,"Selectable Leaf %d",uVar8 & 0xffffffff);
          cVar2 = FUN_180110bfd();
          if (cVar2 != '\0') {
            cVar2 = FUN_180110c1e();
            if (cVar2 == '\0') {
              uVar6 = uVar8 & 0xffffffff;
            }
          }
          if (DAT_180420485 == '\x01') {
            cVar2 = FUN_18011c8b1();
            if (cVar2 != '\0') {
              FUN_18011cb49("_TREENODE",0,0,0);
              FUN_1801330a5();
              FUN_18011cb14();
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != 6);
      if ((uint)uVar6 != 0xffffffff) {
        lVar4 = FUN_180107ee8();
        uVar5 = 0;
        if (*(char *)(lVar4 + 0x108) != '\0') {
          uVar5 = DAT_180408bb4;
        }
        DAT_180408bb4 = uVar5 ^ 1 << ((uint)uVar6 & 0x1f);
      }
      if (DAT_180420484 == '\x01') {
        FUN_18014d8a3();
        FUN_180119fae();
      }
      FUN_18014d7a9();
    }
    FUN_18014d7a9();
  }
  if (DAT_180402640 == (local_60 ^ (ulonglong)auStack_88)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_60 ^ (ulonglong)auStack_88);
}

