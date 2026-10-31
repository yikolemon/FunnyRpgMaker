/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407739d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407739d0(ulonglong param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint *unaff_RBX;
  uint uVar7;
  ulonglong *puVar9;
  uint *puVar10;
  int iVar11;
  uint *unaff_RDI;
  undefined4 *puVar8;
  
  uVar7 = (int)&stack0xffffffffffffffe0 - 0xc;
  puVar8 = (undefined4 *)(ulonglong)uVar7;
  puVar10 = (uint *)(ulonglong)param_2;
  *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)((longlong)puVar8 + 0x20);
  uVar4 = (ulonglong)_DAT_8b1c5a8b1039d74c;
  iVar6 = (int)unaff_RBX;
  iVar11 = (int)unaff_RDI;
  uVar5 = param_1;
  if ((POPCOUNT(uVar7 & 0xff) & 1U) != 0) {
    if ((*(byte *)(uVar4 + 0x27b5) & 4) == 0) goto LAB_140773a1d;
    uVar4 = 0;
    uVar5 = 0;
    if (iVar11 != 0) {
      uVar5 = (ulonglong)*unaff_RDI;
    }
    if (iVar6 != 0) {
      uVar4 = (ulonglong)*unaff_RBX;
    }
    puVar9 = (ulonglong *)((longlong)puVar8 + -8);
    puVar8 = (undefined4 *)((longlong)puVar8 + -8);
    *puVar9 = (ulonglong)*puVar10;
  }
  *(ulonglong *)((longlong)puVar8 + -8) = uVar5;
  *(ulonglong *)((longlong)puVar8 + -0x10) = uVar4;
  *(undefined8 *)((longlong)puVar8 + -0x18) = 0x1034d593;
  *(undefined8 *)((longlong)puVar8 + -0x20) = 0x140773a1a;
  FUN_1407518b6();
  puVar8 = (undefined4 *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x18) + 0x10);
LAB_140773a1d:
  *puVar8 = (int)param_1;
  puVar8[2] = puVar10[0x11];
  uVar7 = puVar10[0x12];
  *(undefined8 *)(puVar8 + -2) = 0x140773a35;
  FUN_140781ba6(puVar10,puVar8[1]);
  if (iVar6 != 0) {
    *(undefined8 *)(puVar8 + -2) = 0x140773a42;
    FUN_14077387b(param_2,(ulonglong)unaff_RBX & 0xffffffff);
    uVar3 = *puVar10;
    uVar1 = *unaff_RBX;
    *(undefined8 *)(puVar8 + -2) = 0x140773a4c;
    FUN_140773943(uVar1,uVar3);
  }
  if (iVar11 != 0) {
    *(undefined8 *)(puVar8 + -2) = 0x140773a59;
    FUN_14077387b(param_2,(ulonglong)unaff_RDI & 0xffffffff);
    uVar3 = *puVar10;
    uVar1 = *unaff_RDI;
    *(undefined8 *)(puVar8 + -2) = 0x140773a63;
    FUN_140773943(uVar1,uVar3);
  }
  *(undefined8 *)(puVar8 + -2) = 0x140773a6a;
  FUN_140783bd2(param_2);
  puVar10[0x2a] = puVar10[0x2a] & 0xfffffe00;
  uVar3 = puVar10[2] & 0xfffc078f;
  puVar10[0x1f] = *(uint *)((ulonglong)(uint)puVar8[1] + 0x7c);
  puVar10[0x12] = uVar7;
  puVar10[0x11] = puVar8[2];
  puVar10[2] = uVar3;
  if (iVar6 != 0) {
    uVar3 = uVar3 | unaff_RBX[2] & 0x3f870;
  }
  uVar2 = *puVar8;
  puVar10[2] = uVar3;
  if (iVar11 != 0) {
    uVar3 = uVar3 | unaff_RDI[2] & 0x3f870;
  }
  puVar10[2] = uVar3;
  if (iVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = unaff_RBX[3];
  }
  if (iVar11 != 0) {
    uVar7 = uVar7 | unaff_RDI[3];
  }
  puVar10[3] = uVar7;
  puVar10[4] = uVar3 | puVar10[1] | uVar7;
  if (iVar6 != 0) {
    *(undefined8 *)(puVar8 + -2) = 0x140773ae2;
    FUN_140771e15(uVar2,(ulonglong)unaff_RBX & 0xffffffff);
  }
  if (iVar11 != 0) {
    FUN_140771e15(uVar2,(ulonglong)unaff_RDI & 0xffffffff);
    return;
  }
  return;
}

