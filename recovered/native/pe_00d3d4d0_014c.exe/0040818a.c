/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040818a */

void __thiscall
FUN_0040818a(void *this,uint *param_1,uint param_2,int param_3,uint param_4,int param_5,
            undefined4 param_6,undefined4 param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar6 = *(uint *)((int)this + 0x3c);
  uVar9 = 0xffffffff;
  uVar8 = uVar9;
  if (((param_8 & (uVar6 & 4) >> 2) == 0) &&
     (uVar8 = 0xffffffff, ((byte)((uVar6 & 2) >> 1) & (byte)(param_8 >> 1) & 0x7f) == 0)) {
    uVar7 = param_2 + param_4;
    uVar10 = param_3 + param_5 + (uint)CARRY4(param_2,param_4);
    iVar1 = **(int **)((int)this + 0x1c);
    if (((uVar6 & 2) == 0) && (uVar6 = **(uint **)((int)this + 0x20), uVar6 != 0)) {
      bVar4 = true;
      if (*(uint *)((int)this + 0x38) < uVar6) {
        *(uint *)((int)this + 0x38) = uVar6;
      }
    }
    else {
      bVar4 = false;
    }
    iVar2 = *(int *)((int)this + 0x38);
    iVar3 = **(int **)((int)this + 0xc);
    iVar5 = iVar2 - iVar3;
    uVar6 = iVar5 >> 0x1f;
    uVar8 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (uVar10 <= uVar6 && (uint)((uint)(iVar5 >> 1) < uVar7) <= uVar6 - uVar10) {
      if (uVar7 != 0 || uVar10 != 0) {
        uVar8 = 0xffffffff;
        if ((iVar1 == 0 & (byte)param_8) != 0) {
          uVar9 = 0xffffffff;
          goto LAB_004082c5;
        }
        uVar9 = 0xffffffff;
        if ((param_8 & 2) != 0 && !bVar4) goto LAB_004082c5;
      }
      iVar5 = uVar7 * 2 + iVar3;
      if (iVar1 != 0 && (param_8 & 1) != 0) {
        **(int **)((int)this + 0x1c) = iVar5;
        **(int **)((int)this + 0x2c) = iVar2 - iVar5 >> 1;
      }
      uVar8 = uVar7;
      uVar9 = uVar10;
      if (bVar4 && (param_8 & 2) != 0) {
        iVar1 = **(int **)((int)this + 0x30);
        iVar2 = **(int **)((int)this + 0x20);
        **(int **)((int)this + 0x10) = iVar3;
        **(int **)((int)this + 0x20) = iVar5;
        **(int **)((int)this + 0x30) = (iVar1 * 2 + iVar2) - iVar5 >> 1;
      }
    }
  }
LAB_004082c5:
  *param_1 = uVar8;
  param_1[1] = uVar9;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

