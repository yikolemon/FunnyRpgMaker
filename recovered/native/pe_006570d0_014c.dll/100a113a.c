/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a113a */

void __thiscall
FUN_100a113a(int param_1,uint *param_2,uint param_3,int param_4,uint param_5,int param_6,
            undefined4 param_7,undefined4 param_8,uint param_9)

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
  
  uVar6 = *(uint *)(param_1 + 0x3c);
  uVar9 = 0xffffffff;
  uVar8 = uVar9;
  if (((param_9 & (uVar6 & 4) >> 2) == 0) &&
     (uVar8 = 0xffffffff, ((byte)((uVar6 & 2) >> 1) & (byte)(param_9 >> 1) & 0x7f) == 0)) {
    uVar7 = param_3 + param_5;
    uVar10 = param_4 + param_6 + (uint)CARRY4(param_3,param_5);
    iVar1 = **(int **)(param_1 + 0x1c);
    if (((uVar6 & 2) == 0) && (uVar6 = **(uint **)(param_1 + 0x20), uVar6 != 0)) {
      bVar4 = true;
      if (*(uint *)(param_1 + 0x38) < uVar6) {
        *(uint *)(param_1 + 0x38) = uVar6;
      }
    }
    else {
      bVar4 = false;
    }
    iVar2 = *(int *)(param_1 + 0x38);
    iVar3 = **(int **)(param_1 + 0xc);
    iVar5 = iVar2 - iVar3;
    uVar6 = iVar5 >> 0x1f;
    uVar8 = 0xffffffff;
    uVar9 = 0xffffffff;
    if (uVar10 <= uVar6 && (uint)((uint)(iVar5 >> 1) < uVar7) <= uVar6 - uVar10) {
      if (uVar7 != 0 || uVar10 != 0) {
        uVar8 = 0xffffffff;
        if ((iVar1 == 0 & (byte)param_9) != 0) {
          uVar9 = 0xffffffff;
          goto LAB_100a1275;
        }
        uVar9 = 0xffffffff;
        if ((param_9 & 2) != 0 && !bVar4) goto LAB_100a1275;
      }
      iVar5 = uVar7 * 2 + iVar3;
      if (iVar1 != 0 && (param_9 & 1) != 0) {
        **(int **)(param_1 + 0x1c) = iVar5;
        **(int **)(param_1 + 0x2c) = iVar2 - iVar5 >> 1;
      }
      uVar8 = uVar7;
      uVar9 = uVar10;
      if (bVar4 && (param_9 & 2) != 0) {
        iVar1 = **(int **)(param_1 + 0x30);
        iVar2 = **(int **)(param_1 + 0x20);
        **(int **)(param_1 + 0x10) = iVar3;
        **(int **)(param_1 + 0x20) = iVar5;
        **(int **)(param_1 + 0x30) = (iVar1 * 2 + iVar2) - iVar5 >> 1;
      }
    }
  }
LAB_100a1275:
  *param_2 = uVar8;
  param_2[1] = uVar9;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return;
}

