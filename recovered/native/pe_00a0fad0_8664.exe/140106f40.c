/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140106f40 */

undefined8 * FUN_140106f40(undefined8 *param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  int *local_38;
  int local_30;
  undefined4 local_2c;
  
  uVar6 = local_2c;
  iVar7 = 0;
  local_30 = 0;
  iVar11 = 0;
  local_38 = param_2;
  FUN_140106650(param_2,&local_38);
  if (*param_2 != 0) {
    uVar10 = param_2[6];
    iVar9 = 0;
    pbVar12 = *(byte **)(param_2 + 2);
    iVar11 = 0;
    do {
      iVar4 = iVar7;
      if ((((int)uVar10 <= param_3) && (param_3 <= param_2[7])) &&
         (iVar4 = iVar9, iVar11 = iVar9, iVar7 == 0)) {
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      iVar9 = iVar9 + 1;
      lVar8 = (longlong)(char)(&DAT_1401661e0)[*pbVar12 & 0xf];
      bVar1 = (&DAT_1401661f0)[*pbVar12 & 0xf];
      pbVar5 = pbVar12 + -lVar8;
      uVar10 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      uVar10 = uVar10 >> (bVar1 & 0x1f);
      param_2[6] = uVar10;
      cVar2 = (&DAT_1401661e0)[*pbVar5 & 0xf];
      bVar1 = (&DAT_1401661f0)[*pbVar5 & 0xf];
      pbVar5 = pbVar12 + (-lVar8 - (longlong)cVar2);
      uVar3 = *(uint *)(pbVar5 + -4);
      *(byte **)(param_2 + 2) = pbVar5;
      param_2[7] = uVar3 >> (bVar1 & 0x1f);
      bVar1 = (&DAT_1401661f0)[*pbVar5 & 0xf];
      pbVar12 = pbVar12 + ((-(longlong)cVar2 - (longlong)(char)(&DAT_1401661e0)[*pbVar5 & 0xf]) -
                          lVar8);
      uVar3 = *(uint *)(pbVar12 + -4);
      *(byte **)(param_2 + 2) = pbVar12;
      param_2[8] = uVar3 >> (bVar1 & 0x1f);
      iVar4 = *(int *)pbVar12;
      pbVar12 = pbVar12 + 4;
      *(byte **)(param_2 + 2) = pbVar12;
      param_2[9] = iVar4;
      uVar6 = local_2c;
    } while (iVar9 != *param_2);
  }
  local_38 = param_2;
  local_30 = iVar7;
  local_2c = uVar6;
  FUN_140106650(param_2,&local_38);
  *(int *)(param_1 + 3) = iVar11 + 1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = local_2c;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  *param_1 = param_2;
  *(int *)(param_1 + 1) = iVar7;
  param_1[2] = param_2;
  return param_1;
}

