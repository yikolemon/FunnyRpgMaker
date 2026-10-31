/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00407b8e */

uint __thiscall FUN_00407b8e(void *this,ushort param_1)

{
  ushort *puVar1;
  uint *puVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  if ((*(byte *)((int)this + 0x3c) & 2) == 0) {
    uVar9 = (uint)param_1;
    if (param_1 == 0xffff) {
      return 0;
    }
    iVar4 = **(int **)((int)this + 0x20);
    iVar7 = **(int **)((int)this + 0x30);
    if (0 < iVar7 && iVar4 != 0) {
      **(int **)((int)this + 0x30) = iVar7 + -1;
      puVar1 = (ushort *)**(int **)((int)this + 0x20);
      **(int **)((int)this + 0x20) = (int)(puVar1 + 1);
      *puVar1 = param_1;
      *(int *)((int)this + 0x38) = iVar4 + 2;
      return uVar9;
    }
    puVar2 = (uint *)**(undefined4 **)((int)this + 0xc);
    uVar8 = (iVar4 + iVar7 * 2) - (int)puVar2 >> 1;
    if (iVar4 == 0) {
      uVar8 = 0;
    }
    iVar4 = 0x20;
    if (0x1f < uVar8) {
      if (uVar8 < 0x3fffffff) {
        iVar4 = uVar8 * 2;
      }
      else {
        iVar4 = 0x7fffffff;
        if (0x7ffffffe < uVar8) goto LAB_00407c9b;
      }
    }
    puVar5 = (uint *)FUN_004027ed(iVar4 * 2);
    FUN_004878c0(puVar5,puVar2,uVar8 * 2);
    *(uint *)((int)this + 0x38) = (int)puVar5 + uVar8 * 2 + 2;
    **(undefined4 **)((int)this + 0x10) = puVar5;
    **(int **)((int)this + 0x20) = (int)puVar5 + uVar8 * 2;
    **(int **)((int)this + 0x30) = iVar4 - uVar8;
    if ((*(byte *)((int)this + 0x3c) & 4) == 0) {
      iVar4 = *(int *)((int)this + 0x38);
      iVar7 = (int)puVar5 + (**(int **)((int)this + 0x1c) - (int)puVar2);
      **(undefined4 **)((int)this + 0xc) = puVar5;
      **(int **)((int)this + 0x1c) = iVar7;
      iVar4 = iVar4 - iVar7 >> 1;
    }
    else {
      **(undefined4 **)((int)this + 0xc) = puVar5;
      **(undefined4 **)((int)this + 0x1c) = puVar5;
      iVar4 = 0;
    }
    **(int **)((int)this + 0x2c) = iVar4;
    uVar6 = *(uint *)((int)this + 0x3c);
    if ((uVar6 & 1) != 0) {
      puVar5 = puVar2;
      if ((0x7ff < uVar8) &&
         (puVar5 = (uint *)puVar2[-1], 0x1f < (uint)((int)puVar2 + (-4 - (int)puVar5)))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      FUN_0047f280(puVar5);
      uVar6 = *(uint *)((int)this + 0x3c);
    }
    *(uint *)((int)this + 0x3c) = uVar6 | 1;
    **(int **)((int)this + 0x30) = **(int **)((int)this + 0x30) + -1;
    puVar1 = (ushort *)**(int **)((int)this + 0x20);
    **(int **)((int)this + 0x20) = (int)(puVar1 + 1);
    *puVar1 = param_1;
  }
  else {
LAB_00407c9b:
    uVar9 = 0xffffffff;
  }
  return uVar9;
}

