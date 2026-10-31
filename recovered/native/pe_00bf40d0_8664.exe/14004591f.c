/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004591f */

void FUN_14004591f(ushort *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint local_70;
  
  if (*param_1 != 0) {
    uVar6 = 0;
    uVar8 = 0;
    do {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0xc) + uVar8 * 2);
      uVar5 = (uint)uVar6;
      uVar14 = uVar6;
      if (uVar5 <= uVar1) {
        lVar10 = -1;
        uVar9 = 0;
        lVar7 = param_4;
        uVar3 = uVar5;
LAB_140045995:
        uVar3 = uVar3 + 1;
        if (*(char *)(lVar7 + uVar6) == '\0') goto code_r0x00014004599c;
        uVar4 = uVar6 - uVar9;
        uVar14 = uVar4 + 1;
        local_70 = (uint)uVar1;
        if ((uint)uVar4 < local_70) {
          uVar11 = (ulonglong)uVar3 - 1;
          uVar12 = uVar4;
          uVar14 = uVar14 & 0xffffffff;
          uVar2 = uVar4;
          do {
            uVar13 = uVar14;
            if (*(char *)(param_4 + 1 + uVar11) != '\0') {
              FUN_140045aca((int)uVar12 + 1,(uint)uVar2,uVar12 & 0xffffffff,uVar13 & 0xffffffff,
                            param_3,param_2);
              uVar12 = uVar13 & 0xffffffff;
            }
            uVar14 = uVar13 + 1;
            uVar11 = uVar11 + 1;
            uVar2 = uVar13;
          } while (uVar11 < uVar1);
          if (uVar5 - (int)uVar12 != (int)uVar9) {
            FUN_140045aca((int)uVar12 + 1,(uint)uVar1,uVar12 & 0xffffffff,uVar4,param_3,param_2);
            if (uVar6 != uVar9) {
              FUN_140045aca(uVar5,uVar5 + (int)lVar10,uVar12 & 0xffffffff,uVar4,param_3,param_2);
            }
            goto LAB_140045aa7;
          }
        }
        FUN_140045c1b(uVar5,(uint)uVar1,(uint)uVar4,param_3,param_2);
      }
LAB_140045aa7:
      uVar8 = uVar8 + 1;
      uVar6 = uVar14 & 0xffffffff;
    } while (uVar8 < *param_1);
  }
  return;
code_r0x00014004599c:
  uVar9 = uVar9 - 1;
  lVar10 = lVar10 + 1;
  lVar7 = lVar7 + 1;
  uVar14 = (ulonglong)(uVar1 + 1);
  if ((uVar6 - uVar1) + lVar10 == 0) goto LAB_140045aa7;
  goto LAB_140045995;
}

