/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140191250 */

void FUN_140191250(uint param_1,int param_2,longlong *param_3,ulonglong *param_4,short param_5)

{
  ulonglong uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  short *psVar10;
  bool bVar11;
  
  uVar7 = (ulonglong)param_1;
  if (param_5 == 0) {
    psVar5 = (short *)*param_3;
    if (1 < *param_4) {
      do {
        psVar10 = psVar5;
        uVar2 = (int)uVar7 / 10;
        *psVar10 = (short)uVar7 + (short)uVar2 * -10 + 0x30;
        uVar1 = *param_4;
        uVar7 = (ulonglong)uVar2;
        *param_4 = uVar1 - 1;
        if ((int)uVar2 < 1) break;
        psVar5 = psVar10 + 1;
      } while (1 < uVar1 - 1);
      psVar5 = (short *)*param_3;
      *param_3 = (longlong)(psVar10 + 1);
      for (; psVar5 < psVar10; psVar5 = psVar5 + 1) {
        sVar3 = *psVar10;
        *psVar10 = *psVar5;
        psVar10 = psVar10 + -1;
        *psVar5 = sVar3;
      }
      return;
    }
    *param_3 = (longlong)((short *)*param_3 + -*param_4);
  }
  else if ((ulonglong)(longlong)param_2 < *param_4) {
    iVar4 = 0;
    if (param_2 != 0) {
      lVar8 = (longlong)(param_2 + -1) * 2;
      iVar9 = param_2 + -1;
      iVar4 = 0;
      do {
        iVar6 = (int)uVar7;
        sVar3 = param_5;
        if (iVar6 != 0) {
          sVar3 = (short)uVar7 +
                  (((short)(iVar6 / 10) + ((short)(uVar7 >> 0x10) >> 0xf)) -
                  (short)((longlong)iVar6 * 0x66666667 >> 0x3f)) * -10 + 0x30;
        }
        *(short *)(lVar8 + *param_3) = sVar3;
        iVar4 = iVar4 + 1;
        lVar8 = lVar8 + -2;
        uVar7 = (ulonglong)(uint)(iVar6 / 10);
        bVar11 = iVar9 != 0;
        iVar9 = iVar9 + -1;
      } while (bVar11);
    }
    *param_3 = *param_3 + (longlong)iVar4 * 2;
    *param_4 = *param_4 - (longlong)iVar4;
    return;
  }
  *param_4 = 0;
  return;
}

