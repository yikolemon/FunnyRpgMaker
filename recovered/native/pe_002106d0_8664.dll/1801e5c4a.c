/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e5c4a */

undefined8 FUN_1801e5c4a(longlong param_1,uint param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort uVar7;
  
  pbVar5 = *(byte **)(param_1 + 0x50 + (ulonglong)param_2 * 0x898);
  if (pbVar5 == (byte *)0x0) {
    uVar4 = FUN_1801e42d6();
    return uVar4;
  }
  uVar3 = *(uint *)((ulonglong)param_2 * 0x898 + param_1 + 0x48);
  uVar4 = FUN_1801e42d6();
  if (((int)uVar4 == 0) && (uVar4 = 0, uVar3 != 0)) {
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
          if (uVar7 == 0 && (*puVar6 & 3) == 0) goto LAB_1801e5cc3;
          uVar7 = *puVar6 & 3;
        } while (puVar6 != *(ushort **)(pbVar5 + 0x40));
        *pbVar5 = bVar2 | 1;
      }
LAB_1801e5cc3:
      pbVar5 = pbVar5 + 0x48;
    } while (pbVar5 < pbVar1);
  }
  return uVar4;
}

