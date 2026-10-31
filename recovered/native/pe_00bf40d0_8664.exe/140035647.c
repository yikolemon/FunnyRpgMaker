/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140035647 */

undefined8 FUN_140035647(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort uVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 auStack_98 [46];
  ushort local_6a;
  int local_68 [8];
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  FUN_140035749(local_68,(ushort *)
                         ((ulonglong)*(byte *)(param_2 + 3) + param_2 +
                         (ulonglong)*(byte *)(param_2 + 2) * 0x100));
  uVar5 = FUN_140035788(local_68,&local_6a);
  if ((char)uVar5 != '\0') {
    pbVar7 = (byte *)(param_2 + 6);
    do {
      uVar4 = local_6a;
      bVar1 = *pbVar7;
      bVar2 = pbVar7[1];
      uVar6 = *(ushort *)((ulonglong)bVar2 + param_2 + (ulonglong)bVar1 * 0x100);
      uVar6 = uVar6 << 8 | uVar6 >> 8;
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          uVar3 = *(ushort *)((ulonglong)bVar1 * 0x100 + (ulonglong)bVar2 + param_2 + 2 + lVar8 * 2)
          ;
          uVar5 = FUN_1400357f8(uVar4,(uint)(ushort)(uVar3 << 8 | uVar3 >> 8),param_1,param_3);
          if ((int)uVar5 != 0) goto LAB_140035716;
          lVar8 = lVar8 + 1;
        } while ((uint)uVar6 != (uint)lVar8);
      }
      pbVar7 = pbVar7 + 2;
      uVar5 = FUN_140035788(local_68,&local_6a);
    } while ((char)uVar5 != '\0');
  }
  uVar5 = 0;
LAB_140035716:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_98)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_98);
}

