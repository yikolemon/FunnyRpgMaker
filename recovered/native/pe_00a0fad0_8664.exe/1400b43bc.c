/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b43bc */

uint FUN_1400b43bc(undefined8 param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  ulonglong uVar8;
  short sVar9;
  longlong lVar10;
  byte *pbVar11;
  
  pbVar5 = (byte *)FUN_1400afc2f();
  iVar2 = FUN_1400d2196(0x3a4,pbVar5);
  iVar3 = FUN_1400d1d88(0x3a4);
  iVar3 = iVar3 * iVar2;
  if (iVar3 == 0) {
    *param_2 = 0;
    uVar7 = 4;
  }
  else {
    uVar4 = iVar3 + 7;
    if (-1 < (int)(iVar3 + 4U)) {
      uVar4 = iVar3 + 4U;
    }
    *(short *)param_2 = (short)((int)uVar4 >> 2);
    uVar7 = ((int)uVar4 >> 2) << 3;
    iVar2 = 0;
    FUN_1401366a0(param_2 + 1,0,(longlong)(int)uVar7);
    FUN_1400d1f23(0x3a4,(longlong)param_2 + (longlong)(int)(uVar4 & 0xfffffffc) + 4,pbVar5);
    if (*pbVar5 == 0) {
      sVar9 = 0;
    }
    else {
      lVar10 = 0;
      sVar9 = 0;
      pbVar11 = pbVar5;
      do {
        uVar4 = FUN_1400d1df2(pbVar11,0x3a4);
        if (uVar4 == 1) {
          bVar1 = *pbVar11;
          bVar6 = bVar1 - 0x20;
          if (0x19 < (byte)(bVar1 + 0x9f)) {
            bVar6 = bVar1;
          }
          *(byte *)((longlong)param_2 + lVar10 + 4) = bVar6;
          sVar9 = sVar9 + (ushort)bVar6;
          iVar2 = iVar2 + 1;
        }
        else {
          if (0 < (int)uVar4) {
            uVar8 = 0;
            do {
              bVar1 = pbVar5[uVar8 + (longlong)iVar2];
              *(byte *)((longlong)(param_2 + 1) + uVar8 + (longlong)iVar2) = bVar1;
              sVar9 = sVar9 + (ushort)bVar1;
              uVar8 = uVar8 + 1;
            } while (uVar4 != uVar8);
          }
          iVar2 = iVar2 + uVar4;
        }
        lVar10 = (longlong)iVar2;
        pbVar11 = pbVar5 + lVar10;
      } while (pbVar5[lVar10] != 0);
    }
    *(short *)((longlong)param_2 + 2) = sVar9;
    thunk_FUN_1400ddcd0(pbVar5);
    uVar7 = uVar7 | 4;
  }
  return uVar7;
}

