/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14000ce51 */

undefined8 *
FUN_14000ce51(undefined8 *param_1,byte *param_2,undefined1 (*param_3) [32],uint param_4,uint param_5
             )

{
  uint uVar1;
  sbyte sVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48 [3];
  ulonglong uVar8;
  
  local_48[2] = DAT_14012ea80 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar1 = param_5 + 0x37 >> 5;
  uVar7 = uVar1 - 1;
  uVar5 = (ulonglong)uVar7;
  sVar2 = (sbyte)(param_5 & 0x1f);
  uVar3 = param_4 << sVar2;
  if (8 < (param_5 & 0x1f)) {
    *(uint *)((longlong)local_48 + (ulonglong)(uVar1 - 2) * 4) = uVar3;
    uVar3 = param_4 >> (-sVar2 & 0x1fU);
  }
  *(uint *)((longlong)local_48 + uVar5 * 4) = uVar3;
  uVar10 = 0;
  if (uVar7 != 0) {
    do {
      uVar7 = *(uint *)((longlong)local_48 + uVar5 * 4);
      uVar3 = (uint)((ulonglong)(uVar7 >> 9) * 0x44b83 >> 0x27);
      uVar1 = uVar7 + uVar3 * -1000000000;
      *(uint *)((longlong)local_48 + uVar5 * 4) = uVar3;
      uVar3 = (int)uVar5 - 1;
      piVar9 = (int *)((longlong)local_48 + (ulonglong)uVar3 * 4);
      uVar8 = uVar5;
      do {
        iVar4 = (int)(CONCAT44(uVar1,*piVar9) / 1000000000);
        uVar1 = iVar4 * -1000000000 + *piVar9;
        *piVar9 = iVar4;
        piVar9 = piVar9 + -1;
        uVar6 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar6;
      } while (uVar6 != 0);
      auStack_60[uVar10 + 2] = uVar1;
      uVar10 = uVar10 + 1;
      if (999999999 >= uVar7) {
        uVar5 = (ulonglong)uVar3;
      }
    } while (999999999 < uVar7 || uVar3 != 0);
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
  if ((longlong)(ulonglong)((int)uVar10 * 9 + uVar7) <= (longlong)param_3 - (longlong)param_2) {
    FUN_14000d997((ulonglong)uVar7,local_48[0] & 0xffffffff,param_2);
    param_3 = (undefined1 (*) [32])(param_2 + uVar7);
    uVar11 = 0;
    if (0 < (int)uVar10) {
      uVar5 = (uVar10 & 0xffffffff) + 1;
      do {
        FUN_14000da87((ulonglong)auStack_60[uVar5],param_3);
        param_3 = (undefined1 (*) [32])(*param_3 + 9);
        uVar5 = uVar5 - 1;
        uVar11 = 0;
      } while (1 < uVar5);
    }
  }
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = uVar11;
  if (DAT_14012ea80 != (local_48[2] ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48[2] ^ (ulonglong)auStack_78);
  }
  return param_1;
}

