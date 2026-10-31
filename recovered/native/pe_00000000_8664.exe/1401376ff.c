/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401376ff */

undefined8 FUN_1401376ff(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined8 uVar6;
  ushort uVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStack_98 [46];
  undefined2 local_6a;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  FUN_140137801(local_68,(ulonglong)*(byte *)(param_2 + 3) + param_2 +
                         (ulonglong)*(byte *)(param_2 + 2) * 0x100);
  cVar5 = FUN_140137840(local_68,&local_6a);
  if (cVar5 != '\0') {
    pbVar8 = (byte *)(param_2 + 6);
    do {
      uVar4 = local_6a;
      bVar1 = *pbVar8;
      bVar2 = pbVar8[1];
      uVar7 = *(ushort *)((ulonglong)bVar2 + param_2 + (ulonglong)bVar1 * 0x100);
      uVar7 = uVar7 << 8 | uVar7 >> 8;
      if (uVar7 != 0) {
        lVar9 = 0;
        do {
          uVar3 = *(ushort *)((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2 + param_2 + 2 + lVar9 * 2)
          ;
          uVar6 = FUN_1401378b0(uVar4,uVar3 << 8 | uVar3 >> 8,param_1,param_3);
          if ((int)uVar6 != 0) goto LAB_1401377ce;
          lVar9 = lVar9 + 1;
        } while ((uint)uVar7 != (uint)lVar9);
      }
      pbVar8 = pbVar8 + 2;
      cVar5 = FUN_140137840(local_68,&local_6a);
    } while (cVar5 != '\0');
  }
  uVar6 = 0;
LAB_1401377ce:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_98)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
}

