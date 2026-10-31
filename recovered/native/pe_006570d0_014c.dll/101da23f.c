/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101da23f */

void __fastcall FUN_101da23f(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  uint local_28;
  
  iVar1 = param_1 + param_4 * 0x544;
  uVar5 = *(uint *)(iVar1 + 0x3c);
  iVar8 = 0;
  local_28 = 0;
  if (uVar5 != 0) {
    local_28 = *(int *)(iVar1 + 0x34) * 0x2c + uVar5;
  }
  if (param_2 != 0) {
    iVar8 = *(int *)(param_3 + -0xc + param_2 * 0xc);
  }
  uVar12 = *(uint *)(*(int *)(param_1 + 0xac4) + 0x2c);
  uVar9 = uVar12;
  if ((int)uVar12 < 0) {
    uVar9 = uVar12 + 0xff;
  }
  iVar7 = 1;
  if (0x1fe < uVar12 + 0xff) {
    iVar7 = (int)uVar9 >> 8;
  }
  iVar2 = uVar12 * 6000;
  iVar4 = iVar2 + 0x7ff;
  if (-1 < iVar2) {
    iVar4 = iVar2;
  }
  if (uVar5 < local_28) {
    uVar12 = uVar5;
    do {
      uVar9 = uVar5;
      if (*(int *)(iVar1 + 0x4c) == (int)*(char *)(uVar12 + 1)) {
        do {
          if (*(short *)(uVar12 + 2) < *(short *)(uVar9 + 2) &&
              (int)*(char *)(uVar9 + 1) + (int)*(char *)(uVar12 + 1) == 0) {
            sVar6 = *(short *)(uVar9 + 6);
            if (*(short *)(uVar9 + 6) < *(short *)(uVar12 + 6)) {
              sVar6 = *(short *)(uVar12 + 6);
            }
            sVar10 = (short)*(undefined4 *)(uVar12 + 8);
            sVar3 = (short)*(undefined4 *)(uVar9 + 8);
            if (sVar10 < sVar3) {
              sVar3 = sVar10;
            }
            if (iVar7 <= (int)sVar3 - (int)sVar6) {
              uVar11 = (int)*(short *)(uVar9 + 2) - (int)*(short *)(uVar12 + 2);
              if (iVar8 != 0) {
                iVar2 = (int)(uVar11 * 0x400) / iVar8;
                uVar11 = 32000;
                if ((iVar2 < 0x2b11) && (uVar11 = 0, 0x400 < iVar2)) {
                  uVar11 = (uint)((iVar2 + -0x400) * (iVar2 + -0x400)) / 3000;
                }
              }
              iVar2 = (iVar4 >> 0xb) / ((int)sVar3 - (int)sVar6) + uVar11;
              if (iVar2 < *(int *)(uVar12 + 0x1c)) {
                *(int *)(uVar12 + 0x1c) = iVar2;
                *(uint *)(uVar12 + 0x14) = uVar9;
              }
              if (iVar2 < *(int *)(uVar9 + 0x1c)) {
                *(int *)(uVar9 + 0x1c) = iVar2;
                *(uint *)(uVar9 + 0x14) = uVar12;
              }
            }
          }
          uVar9 = uVar9 + 0x2c;
        } while (uVar9 < local_28);
      }
      uVar12 = uVar12 + 0x2c;
    } while (uVar12 < local_28);
    do {
      iVar1 = *(int *)(uVar5 + 0x14);
      if ((iVar1 != 0) && (uVar5 != *(uint *)(iVar1 + 0x14))) {
        *(undefined4 *)(uVar5 + 0x14) = 0;
        *(undefined4 *)(uVar5 + 0x18) = *(undefined4 *)(iVar1 + 0x14);
      }
      uVar5 = uVar5 + 0x2c;
    } while (uVar5 < local_28);
  }
  return;
}

