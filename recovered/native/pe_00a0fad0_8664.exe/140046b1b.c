/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140046b1b */

longlong *
FUN_140046b1b(longlong *param_1,longlong param_2,longlong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  sbyte sVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  int *piVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 auStack_78 [24];
  int aiStack_60 [6];
  ulonglong local_48 [3];
  
  local_48[2] = DAT_1401c9640 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar1 = param_5 + 0x37 >> 5;
  uVar7 = uVar1 - 1;
  uVar6 = (ulonglong)uVar7;
  sVar3 = (sbyte)(param_5 & 0x1f);
  uVar4 = param_4 << sVar3;
  if (8 < (param_5 & 0x1f)) {
    *(uint *)((longlong)local_48 + (ulonglong)(uVar1 - 2) * 4) = uVar4;
    uVar4 = param_4 >> (-sVar3 & 0x1fU);
  }
  *(uint *)((longlong)local_48 + uVar6 * 4) = uVar4;
  uVar10 = 0;
  if (uVar7 != 0) {
    do {
      uVar7 = *(uint *)((longlong)local_48 + uVar6 * 4);
      uVar1 = (uint)((ulonglong)(uVar7 >> 9) * 0x44b83 >> 0x27);
      iVar2 = uVar7 + uVar1 * -1000000000;
      *(uint *)((longlong)local_48 + uVar6 * 4) = uVar1;
      uVar1 = (int)uVar6 - 1;
      piVar9 = (int *)((longlong)local_48 + (ulonglong)uVar1 * 4);
      uVar8 = uVar6;
      do {
        iVar5 = (int)(CONCAT44(iVar2,*piVar9) / 1000000000);
        iVar2 = iVar5 * -1000000000 + *piVar9;
        *piVar9 = iVar5;
        piVar9 = piVar9 + -1;
        uVar4 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar4;
      } while (uVar4 != 0);
      aiStack_60[uVar10 + 2] = iVar2;
      uVar10 = uVar10 + 1;
      if (999999999 >= uVar7) {
        uVar6 = (ulonglong)uVar1;
      }
    } while (999999999 < uVar7 || uVar1 != 0);
  }
  uVar7 = 10;
  if ((((((uint)local_48[0] < 1000000000) && (uVar7 = 9, (uint)local_48[0] < 100000000)) &&
       (uVar7 = 8, (uint)local_48[0] < 10000000)) &&
      ((uVar7 = 7, (uint)local_48[0] < 1000000 && (uVar7 = 6, (uint)local_48[0] < 100000)))) &&
     ((uVar7 = 5, (uint)local_48[0] < 10000 &&
      ((uVar7 = 4, (uint)local_48[0] < 1000 && (uVar7 = 3, (uint)local_48[0] < 100)))))) {
    uVar7 = 2 - ((uint)local_48[0] < 10);
  }
  uVar11 = 0x84;
  if ((longlong)(ulonglong)((int)uVar10 * 9 + uVar7) <= param_3 - param_2) {
    FUN_140047661(uVar7,local_48[0] & 0xffffffff,param_2);
    param_3 = (ulonglong)uVar7 + param_2;
    uVar11 = 0;
    if (0 < (int)uVar10) {
      uVar6 = (uVar10 & 0xffffffff) + 1;
      do {
        FUN_140047751(aiStack_60[uVar6],param_3);
        param_3 = param_3 + 9;
        uVar6 = uVar6 - 1;
        uVar11 = 0;
      } while (1 < uVar6);
    }
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar11;
  if (DAT_1401c9640 != (local_48[2] ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400d3720(local_48[2] ^ (ulonglong)auStack_78);
  }
  return param_1;
}

