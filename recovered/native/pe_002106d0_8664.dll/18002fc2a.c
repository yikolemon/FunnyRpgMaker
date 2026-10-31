/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18002fc2a */

longlong * FUN_18002fc2a(longlong *param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  *(int *)(param_1 + 0x15) = (int)param_1[0x15] + (iVar4 >> 5);
  if ((param_2 % 0x20 != 0) && (lVar5 = param_1[1], lVar5 != 0)) {
    bVar3 = (byte)(param_2 % 0x20);
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar1 = *(uint *)(*param_1 + lVar9 * 4);
      bVar2 = 0x20 - bVar3 & 0x1f;
      uVar8 = uVar1 >> bVar2;
      *(uint *)(*param_1 + lVar9 * 4) = (uVar1 << (bVar3 & 0x1f)) + uVar7;
      lVar9 = lVar9 + 1;
      uVar7 = uVar8;
    } while (lVar5 != lVar9);
    if (uVar1 >> bVar2 != 0) {
      lVar5 = param_1[1];
      uVar6 = lVar5 + 1;
      if ((ulonglong)param_1[2] < uVar6) {
        (*(code *)param_1[3])(param_1);
        lVar5 = param_1[1];
        uVar6 = lVar5 + 1;
      }
      param_1[1] = uVar6;
      *(uint *)(*param_1 + lVar5 * 4) = uVar8;
    }
  }
  return param_1;
}

