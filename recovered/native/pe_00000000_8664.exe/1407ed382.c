/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407ed382 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1407ed382(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint *puVar8;
  
  uVar7 = (int)&stack0xffffffffffffffe0 - 0x34;
  puVar8 = (uint *)(ulonglong)uVar7;
  piVar5 = (int *)(ulonglong)param_2;
  puVar8[0xc] = _DAT_150b76095 ^ uVar7;
  iVar11 = *piVar5;
  uVar7 = (puVar8[0x12] + piVar5[2]) - (int)puVar8[0x12] % piVar5[2];
  puVar8[7] = iVar11;
  if ((iVar11 < (int)uVar7) || (iVar11 = piVar5[1], puVar8[8] = iVar11, iVar11 < (int)puVar8[0x13]))
  {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    uVar9 = param_2 + 0x18;
    puVar8[6] = param_2;
    puVar6 = (uint *)(ulonglong)(uint)piVar5[6];
    uVar3 = *puVar6;
    puVar8[3] = uVar7;
    puVar8[9] = (int)param_1;
    if ((int)puVar8[7] < (int)(uVar3 + uVar7)) {
      uVar10 = 0;
      puVar8[4] = 0x40000000;
      puVar8[1] = 0x40000000;
      *puVar8 = 0;
    }
    else {
      puVar8[2] = 0;
      puVar8[4] = 0x40000000;
      puVar8[5] = uVar3;
      puVar8[1] = 0x40000000;
      puVar13 = puVar6;
      uVar10 = uVar9;
      do {
        *puVar8 = (int)puVar13;
        *(ulonglong *)(puVar8 + -2) = (ulonglong)(puVar8 + 0xb) & 0xffffffff;
        *(ulonglong *)(puVar8 + -4) = (ulonglong)uVar7;
        *(undefined8 *)(puVar8 + -6) = 0x1407ed440;
        uVar7 = FUN_1407ed5a6(puVar13,uVar3);
        puVar8 = (uint *)(ulonglong)((int)(puVar8 + -4) + 8);
        if (*(int *)((ulonglong)puVar8[6] + 0x10) == 0) {
          uVar3 = puVar8[1];
          uVar4 = uVar3;
          if ((int)uVar7 < (int)uVar3) {
            uVar4 = uVar7;
          }
          puVar8[1] = uVar4;
          uVar4 = puVar8[2];
          if ((int)uVar7 < (int)uVar3) {
            uVar4 = uVar10;
          }
          puVar8[2] = uVar4;
LAB_1407ed49d:
          uVar12 = (ulonglong)*puVar8;
        }
        else {
          if ((int)puVar8[8] < (int)(puVar8[0x13] + uVar7)) goto LAB_1407ed49d;
          uVar12 = (ulonglong)*puVar8;
          if (((int)uVar7 < (int)puVar8[1]) ||
             ((int)puVar8[0xb] < (int)puVar8[4] && uVar7 == puVar8[1])) {
            puVar8[1] = uVar7;
            puVar8[2] = uVar10;
            puVar8[4] = puVar8[0xb];
          }
        }
        puVar13 = (uint *)(ulonglong)*(uint *)(uVar12 + 8);
        uVar10 = (int)uVar12 + 8;
        uVar3 = *puVar13;
        uVar7 = puVar8[3];
      } while ((int)(uVar3 + uVar7) <= (int)puVar8[7]);
      uVar10 = puVar8[2];
      if (uVar10 == 0) {
        uVar10 = 0;
        *puVar8 = 0;
      }
      else {
        *puVar8 = *(undefined4 *)(ulonglong)*(uint *)(ulonglong)uVar10;
      }
      uVar7 = puVar8[3];
      uVar3 = puVar8[5];
    }
    iVar11 = *(int *)((ulonglong)*(uint *)((longlong)puVar8 + 0x18) + 0x10);
    *(uint *)((longlong)puVar8 + 8) = uVar10;
    puVar13 = puVar6;
    if (iVar11 == 1) {
      while ((int)uVar3 < (int)uVar7) {
        uVar3 = *(uint *)(ulonglong)puVar13[2];
        puVar13 = (uint *)(ulonglong)puVar13[2];
      }
      do {
        iVar11 = *puVar13 - uVar7;
        puVar2 = puVar6;
        uVar7 = uVar9;
        do {
          uVar9 = uVar7;
          puVar6 = puVar2;
          puVar2 = (uint *)(ulonglong)puVar6[2];
          uVar7 = (int)puVar6 + 8;
        } while ((int)*(uint *)(ulonglong)puVar6[2] <= iVar11);
        *(ulonglong *)((longlong)puVar8 + -8) = (ulonglong)((longlong)puVar8 + 0x28) & 0xffffffff;
        *(undefined8 *)((longlong)puVar8 + -0x10) = *(undefined8 *)((longlong)puVar8 + 8);
        *(undefined8 *)((longlong)puVar8 + -0x18) = 0x1407ed522;
        uVar3 = FUN_1407ed5a6(puVar6,iVar11);
        puVar8 = (uint *)(ulonglong)((int)(undefined1 *)((longlong)puVar8 + -0x10) + 8);
        if (((int)puVar8[8] < (int)(puVar8[0x13] + uVar3)) || ((int)puVar8[1] < (int)uVar3)) {
          uVar7 = puVar8[3];
        }
        else {
          iVar1 = puVar8[10];
          uVar7 = puVar8[3];
          if (((uVar3 < puVar8[1]) || (iVar1 < (int)puVar8[4])) ||
             ((iVar1 == puVar8[4] && (iVar11 < (int)*puVar8)))) {
            puVar8[1] = uVar3;
            puVar8[2] = uVar9;
            *puVar8 = iVar11;
            puVar8[4] = iVar1;
          }
        }
        puVar2 = puVar13 + 2;
        puVar13 = (uint *)(ulonglong)*puVar2;
      } while (*puVar2 != 0);
    }
    param_1 = (undefined4 *)(ulonglong)puVar8[9];
    param_1[2] = puVar8[2];
    *param_1 = *puVar8;
    param_1[1] = puVar8[1];
  }
  if (_DAT_150b7628d != (*(uint *)((longlong)puVar8 + 0x30) ^ (uint)puVar8)) {
                    /* WARNING: Subroutine does not return */
    *(code **)((longlong)puVar8 + -8) = FUN_1407ed5a6;
    FUN_1408802b0(*(uint *)((longlong)puVar8 + 0x30) ^ (uint)puVar8);
  }
  return (ulonglong)param_1 & 0xffffffff;
}

