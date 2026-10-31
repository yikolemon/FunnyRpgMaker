/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140025fac */

void FUN_140025fac(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar2 = param_1[1];
  if (lVar2 == 0) {
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar5 = *param_2;
    uVar1 = param_2[1];
    uVar6 = 0;
    lVar10 = 0;
    uVar9 = 0;
    do {
      uVar8 = (ulonglong)*(uint *)(*param_1 + lVar10 * 4);
      uVar7 = (uVar5 >> 0x20) * uVar8;
      uVar3 = (uVar5 & 0xffffffff) * uVar8;
      uVar11 = uVar7 << 0x20;
      uVar12 = uVar11 + uVar3;
      uVar13 = uVar12 + (uVar9 & 0xffffffff);
      uVar11 = (ulonglong)CARRY8(uVar11,uVar3) + (uVar7 >> 0x20) +
               (ulonglong)CARRY8(uVar12,uVar9 & 0xffffffff);
      uVar14 = uVar6 << 0x20 | uVar9 >> 0x20;
      uVar12 = uVar11 << 0x20 | uVar13 >> 0x20;
      lVar4 = (uVar1 >> 0x20) * uVar8;
      uVar8 = uVar8 * (uVar1 & 0xffffffff);
      uVar3 = lVar4 << 0x20;
      uVar7 = (uVar8 << 0x20) + uVar12;
      uVar9 = uVar7 + uVar14;
      uVar6 = (uVar3 + uVar8 >> 0x20) + (uVar6 >> 0x20) +
              (((ulonglong)CARRY8(uVar3,uVar8) << 0x20) + lVar4 & 0xffffffff00000000) +
              (uVar11 >> 0x20) + (ulonglong)CARRY8(uVar8 << 0x20,uVar12) +
              (ulonglong)CARRY8(uVar7,uVar14);
      *(int *)(*param_1 + lVar10 * 4) = (int)uVar13;
      lVar10 = lVar10 + 1;
    } while (lVar2 != lVar10);
  }
  for (; uVar6 != 0 || uVar9 != 0; uVar6 = uVar6 >> 0x20) {
    lVar2 = param_1[1];
    uVar5 = lVar2 + 1;
    if ((ulonglong)param_1[2] < uVar5) {
      (*(code *)param_1[3])(param_1);
      lVar2 = param_1[1];
      uVar5 = lVar2 + 1;
    }
    param_1[1] = uVar5;
    *(int *)(*param_1 + lVar2 * 4) = (int)uVar9;
    uVar9 = uVar9 >> 0x20 | uVar6 << 0x20;
  }
  return;
}

