/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007c4c3 */

void FUN_14007c4c3(byte *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  
  uVar9 = -*(int *)(param_1 + 4);
  uVar6 = (int)((param_3 + *(int *)(param_1 + 4)) - 1U & uVar9) >> (*param_1 & 0x1f);
  iVar10 = (int)(uVar9 & param_4) >> (*param_1 & 0x1f);
  if ((-1 < iVar10) && (iVar1 = *(int *)(param_1 + 0xa4), (int)uVar6 <= iVar1)) {
    uVar9 = 0;
    if (0 < (int)uVar6) {
      uVar9 = uVar6;
    }
    if (iVar10 < iVar1) {
      iVar1 = iVar10;
    }
    uVar6 = uVar9 >> 3;
    uVar7 = (ulonglong)uVar6;
    iVar10 = iVar1 >> 3;
    lVar2 = *(longlong *)(param_1 + 0xb8);
    pbVar3 = (byte *)(lVar2 + uVar7);
    bVar8 = (byte)(0xff >> ((byte)uVar9 & 7));
    bVar4 = (byte)(-0x80 >> ((byte)iVar1 & 7));
    if ((int)uVar6 < iVar10) {
      *pbVar3 = *pbVar3 | bVar8;
      if (iVar10 - uVar6 != 1) {
        uVar5 = (ulonglong)((iVar10 - uVar6) - 2);
        FUN_1400b3c00((undefined1 (*) [32])(lVar2 + uVar7 + 1),0xff,uVar5 + 1);
        pbVar3 = (byte *)(uVar5 + lVar2 + uVar7 + 1);
      }
      pbVar3[1] = pbVar3[1] | bVar4;
    }
    else {
      *pbVar3 = *pbVar3 | bVar4 & bVar8;
    }
  }
  return;
}

