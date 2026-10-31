/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00432b1e */

int __fastcall FUN_00432b1e(int *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  byte *pbVar6;
  ushort *puVar7;
  
  pbVar6 = (byte *)param_1[param_2 * 0x151 + 0xf];
  if (pbVar6 == (byte *)0x0) {
    iVar3 = FUN_0043122d(param_1,param_2);
    return iVar3;
  }
  iVar3 = param_1[param_2 * 0x151 + 0xd];
  iVar1 = FUN_0043122d(param_1,param_2);
  if ((iVar1 == 0) && (iVar1 = 0, iVar3 != 0)) {
    pbVar2 = pbVar6 + iVar3 * 0x2c;
    do {
      puVar7 = *(ushort **)(pbVar6 + 0x24);
      uVar5 = *puVar7;
      uVar4 = CONCAT11(*pbVar6,*pbVar6) & 0xfeff;
      *pbVar6 = (byte)(uVar4 >> 8);
      if (puVar7 != *(ushort **)(pbVar6 + 0x28)) {
        uVar5 = uVar5 & 3;
        do {
          puVar7 = *(ushort **)(puVar7 + 0x10);
          if (uVar5 == 0 && (*puVar7 & 3) == 0) goto LAB_00432b7d;
          uVar5 = *puVar7 & 3;
        } while (puVar7 != *(ushort **)(pbVar6 + 0x28));
        *pbVar6 = (byte)uVar4 | 1;
      }
LAB_00432b7d:
      pbVar6 = pbVar6 + 0x2c;
    } while (pbVar6 < pbVar2);
    iVar1 = 0;
  }
  return iVar1;
}

