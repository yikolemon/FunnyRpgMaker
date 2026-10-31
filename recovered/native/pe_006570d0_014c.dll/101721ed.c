/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101721ed */

undefined4 __fastcall FUN_101721ed(int *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 uVar9;
  uint uVar10;
  bool bVar11;
  ushort local_14;
  ushort local_12;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  uVar6 = param_1[2];
  uVar10 = uVar6 & 7;
  if (uVar10 != 0) {
    if ((int)uVar6 < 0) {
      FUN_10172a07();
      uVar6 = param_1[2];
    }
    param_1[4] = (uint)param_1[4] >> (sbyte)uVar10;
    uVar6 = uVar6 - uVar10;
    param_1[2] = uVar6;
  }
  if ((int)uVar6 < 1) {
    uVar10 = 0;
    if (-1 < (int)uVar6) {
LAB_1017224f:
      puVar7 = (undefined1 *)*param_1;
      puVar1 = (undefined1 *)param_1[1];
      do {
        if (puVar7 < puVar1) {
          *param_1 = (int)(puVar7 + 1);
          uVar9 = *puVar7;
          puVar7 = puVar7 + 1;
        }
        else {
          uVar9 = 0;
        }
        *(undefined1 *)((int)&local_14 + uVar10) = uVar9;
        uVar10 = uVar10 + 1;
      } while (uVar10 != 4);
      goto LAB_1017226e;
    }
LAB_10172296:
    FUN_10170e07();
  }
  else {
    uVar5 = param_1[4];
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      *(char *)((int)&local_14 + uVar2) = (char)uVar5;
      uVar10 = uVar2 + 1;
      uVar5 = uVar5 >> 8;
      bVar11 = 7 < uVar6;
      uVar6 = uVar6 - 8;
    } while (bVar11 && uVar6 != 0);
    param_1[4] = uVar5;
    param_1[2] = uVar6;
    if (uVar6 != 0) goto LAB_10172296;
    if (uVar2 < 3) goto LAB_1017224f;
LAB_1017226e:
    uVar6 = (uint)local_14;
    if (((local_12 ^ local_14) != 0xffff) || (iVar4 = *param_1, (uint)param_1[1] < iVar4 + uVar6))
    goto LAB_10172296;
    iVar8 = param_1[5];
    if (iVar8 + uVar6 <= (uint)param_1[7]) {
LAB_101722d3:
      FUN_1025b2d0(iVar8,iVar4,uVar6);
      *param_1 = *param_1 + uVar6;
      param_1[5] = param_1[5] + uVar6;
      uVar3 = 1;
      goto LAB_1017229d;
    }
    iVar4 = FUN_10172a46(uVar6);
    if (iVar4 != 0) {
      iVar4 = *param_1;
      iVar8 = param_1[5];
      goto LAB_101722d3;
    }
  }
  uVar3 = 0;
LAB_1017229d:
  if (DAT_10388d00 != (local_10 ^ (uint)&local_14)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar3;
}

