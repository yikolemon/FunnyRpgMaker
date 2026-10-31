/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003327e */

int FUN_14003327e(longlong *param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort uVar7;
  
  pbVar5 = (byte *)param_1[(ulonglong)param_2 * 0x113 + 10];
  if (pbVar5 == (byte *)0x0) {
    iVar4 = FUN_14003190a(param_1,param_2);
    return iVar4;
  }
  uVar3 = *(uint *)(param_1 + (ulonglong)param_2 * 0x113 + 9);
  iVar4 = FUN_14003190a(param_1,param_2);
  if ((iVar4 == 0) && (iVar4 = 0, uVar3 != 0)) {
    pbVar1 = pbVar5 + (ulonglong)uVar3 * 0x48;
    do {
      puVar6 = *(ushort **)(pbVar5 + 0x38);
      uVar7 = *puVar6;
      bVar2 = *pbVar5;
      *pbVar5 = bVar2 & 0xfe;
      if (puVar6 != *(ushort **)(pbVar5 + 0x40)) {
        uVar7 = uVar7 & 3;
        do {
          puVar6 = *(ushort **)(puVar6 + 0x10);
          if (uVar7 == 0 && (*puVar6 & 3) == 0) goto LAB_1400332f7;
          uVar7 = *puVar6 & 3;
        } while (puVar6 != *(ushort **)(pbVar5 + 0x40));
        *pbVar5 = bVar2 | 1;
      }
LAB_1400332f7:
      pbVar5 = pbVar5 + 0x48;
    } while (pbVar5 < pbVar1);
  }
  return iVar4;
}

