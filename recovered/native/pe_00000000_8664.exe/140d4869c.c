/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140d4869c */

void Unwind_140d4869c(undefined4 param_1,uint param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  ushort *in_RAX;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong unaff_RBP;
  longlong in_FS_OFFSET;
  undefined1 *puVar8;
  
  do {
    *(undefined4 *)(unaff_RBP + -0x34) = param_1;
    *(int *)(unaff_RBP + -0x20) = (int)in_RAX;
    uVar2 = *in_RAX;
    *(undefined4 *)(unaff_RBP + -0x10) = 3;
    puVar7 = (undefined1 *)((longlong)register0x00000020 + -8);
    puVar10 = (undefined1 *)((longlong)register0x00000020 + -8);
    puVar8 = (undefined1 *)((longlong)register0x00000020 + -8);
    *(ulonglong *)((longlong)register0x00000020 + -8) = (ulonglong)uVar2;
    *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x140d486b5;
    sVar4 = FUN_140d43468(param_2);
    param_2 = *(uint *)(unaff_RBP + -0x2c);
    uVar6 = *(uint *)(unaff_RBP + -0x20);
    in_RAX = (ushort *)(ulonglong)uVar6;
    param_1 = *(undefined4 *)(unaff_RBP + -0x34);
    if (sVar4 != -1) goto LAB_140d486c8;
    do {
      uVar6 = (uint)in_RAX;
      *(undefined1 *)(unaff_RBP + -0x28) = 1;
LAB_140d486c8:
      in_RAX = (ushort *)(ulonglong)(uVar6 + 2);
      if (uVar6 + 2 == 0) {
        uVar6 = *(uint *)(unaff_RBP + -0x30) | (uint)*(byte *)(unaff_RBP + -0x28);
        *(undefined4 *)(unaff_RBP + -0x20) = 0;
        iVar3 = (int)unaff_RBP;
        *(uint *)(ulonglong)(iVar3 + 0x10) = uVar6;
        ((uint *)(ulonglong)(iVar3 + 0x10))[1] = param_2;
        iVar5 = *(int *)(unaff_RBP + -0x3c) - *(int *)(unaff_RBP + -0x24);
        *(int *)(unaff_RBP + -0x3c) = iVar5;
        *(uint *)(unaff_RBP + -0x30) = uVar6;
        *(char *)(unaff_RBP + -0x28) = (char)uVar6;
        *(uint *)(unaff_RBP + -0x2c) = param_2;
        if (iVar5 == 0) goto LAB_140d48742;
        if (*(uint *)(unaff_RBP + -0x40) < 8) {
          iVar5 = iVar3 + -0x54;
        }
        else {
          iVar5 = *(int *)(unaff_RBP + -0x54);
        }
        uVar6 = iVar5 + *(int *)(unaff_RBP + -0x24) * 2;
        puVar10 = puVar7;
        goto LAB_140d48710;
      }
      register0x00000020 = (BADSPACEBASE *)puVar8;
    } while (param_2 == 0);
  } while( true );
LAB_140d48710:
  do {
    puVar9 = puVar10;
    if (param_2 == 0) {
LAB_140d48736:
      *(undefined1 *)(unaff_RBP + -0x28) = 1;
      puVar10 = puVar9;
    }
    else {
      *(uint *)(unaff_RBP + -0x24) = uVar6;
      uVar2 = *(ushort *)(ulonglong)uVar6;
      *(undefined4 *)(unaff_RBP + -0x10) = 3;
      puVar9 = puVar10 + -8;
      *(ulonglong *)(puVar10 + -8) = (ulonglong)uVar2;
      *(undefined8 *)(puVar10 + -0x10) = 0x140d4872a;
      sVar4 = FUN_140d43468(param_2);
      param_2 = *(uint *)(unaff_RBP + -0x2c);
      uVar6 = *(uint *)(unaff_RBP + -0x24);
      puVar10 = puVar10 + -8;
      if (sVar4 == -1) goto LAB_140d48736;
    }
    uVar6 = uVar6 + 2;
    piVar1 = (int *)(unaff_RBP + -0x3c);
    *piVar1 = *piVar1 + -1;
  } while (*piVar1 != 0);
LAB_140d48742:
  uVar6 = *(uint *)(unaff_RBP + 0x18);
  *(undefined4 *)((ulonglong)uVar6 + 0x24) = 0;
  *(undefined4 *)((ulonglong)uVar6 + 0x20) = 0;
  if (*(int *)(unaff_RBP + -0x20) != 0) {
    *(uint *)(unaff_RBP + -0x24) = (uint)*(ushort *)(unaff_RBP + 0x1c);
    do {
      puVar9 = puVar10;
      if (param_2 == 0) {
LAB_140d48779:
        *(undefined1 *)(unaff_RBP + -0x28) = 1;
        puVar10 = puVar9;
      }
      else {
        *(undefined4 *)(unaff_RBP + -0x10) = 3;
        puVar9 = puVar10 + -8;
        *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(unaff_RBP + -0x24);
        *(undefined8 *)(puVar10 + -0x10) = 0x140d48770;
        sVar4 = FUN_140d43468(param_2);
        param_2 = *(uint *)(unaff_RBP + -0x2c);
        puVar10 = puVar10 + -8;
        if (sVar4 == -1) goto LAB_140d48779;
      }
      piVar1 = (int *)(unaff_RBP + -0x20);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  uVar6 = *(uint *)(unaff_RBP + 0xc);
  *(uint *)(ulonglong)uVar6 =
       (uint)*(byte *)(unaff_RBP + -0x28) | *(uint *)(unaff_RBP + -0x30) & 0xffffff00;
  ((uint *)(ulonglong)uVar6)[1] = param_2;
  *(undefined4 *)(unaff_RBP + -0x10) = 0xffffffff;
  *(undefined8 *)(puVar10 + -8) = 0x140d487a9;
  FUN_140d405da(iVar3 + -0x70);
  *(undefined8 *)(puVar10 + -8) = 0x140d487b1;
  FUN_140d4053e(iVar3 + -0x54);
  *(undefined4 *)(in_FS_OFFSET + -0x3b7c0f7700000000) = *(undefined4 *)(unaff_RBP + -0x18);
  return;
}

