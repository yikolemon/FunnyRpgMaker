/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017e56f */

void FUN_14017e56f(byte *param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = -*(int *)(param_1 + 4);
  uVar7 = (int)((param_3 + *(int *)(param_1 + 4)) - 1U & uVar10) >> (*param_1 & 0x1f);
  iVar11 = (int)(uVar10 & param_4) >> (*param_1 & 0x1f);
  if ((-1 < iVar11) && (iVar1 = *(int *)(param_1 + 0xa4), (int)uVar7 <= iVar1)) {
    uVar10 = 0;
    if (0 < (int)uVar7) {
      uVar10 = uVar7;
    }
    if (iVar11 < iVar1) {
      iVar1 = iVar11;
    }
    uVar7 = uVar10 >> 3;
    uVar8 = (ulonglong)uVar7;
    iVar5 = iVar1 >> 3;
    lVar2 = *(longlong *)(param_1 + 0xb8);
    pbVar3 = (byte *)(lVar2 + uVar8);
    iVar11 = iVar5 - uVar7;
    bVar9 = (byte)(0xff >> ((byte)uVar10 & 7));
    bVar4 = (byte)(-0x80 >> ((byte)iVar1 & 7));
    if (iVar11 == 0 || iVar5 < (int)uVar7) {
      *pbVar3 = *pbVar3 | bVar4 & bVar9;
    }
    else {
      *pbVar3 = *pbVar3 | bVar9;
      if (iVar11 != 1) {
        uVar6 = (ulonglong)((iVar5 - uVar7) - 2);
        FUN_1401c5830(lVar2 + uVar8 + 1,CONCAT71((uint7)(uint3)((uint)iVar11 >> 8),0xff),uVar6 + 1);
        pbVar3 = (byte *)(uVar6 + lVar2 + uVar8 + 1);
      }
      pbVar3[1] = pbVar3[1] | bVar4;
    }
  }
  return;
}

