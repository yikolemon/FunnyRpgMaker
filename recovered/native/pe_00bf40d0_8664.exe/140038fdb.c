/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140038fdb */

undefined8 FUN_140038fdb(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  ushort *puVar4;
  longlong lVar5;
  byte *pbVar6;
  ushort *puVar7;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  uVar2 = FUN_1400390a7((ushort *)
                        ((ulonglong)*(byte *)(param_1 + 3) + param_1 +
                        (ulonglong)*(byte *)(param_1 + 2) * 0x100),param_2,&local_1c);
  if ((char)uVar2 != '\0') {
    uVar1 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
    puVar4 = (ushort *)(param_1 + (ulonglong)uVar1 * 2 + 6);
    uVar2 = 0;
    if ((param_2 < puVar4) || (uVar1 != local_1c)) goto LAB_14003907a;
    puVar3 = (ushort *)(param_1 + 6);
    do {
      if (puVar4 <= puVar3) {
        uVar2 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
        goto LAB_14003907a;
      }
      lVar5 = (ulonglong)(byte)*puVar3 * 0x100 + param_1;
      puVar7 = (ushort *)((ulonglong)*(byte *)((longlong)puVar3 + 1) + lVar5 + 2);
    } while ((puVar7 <= param_2) &&
            (pbVar6 = (byte *)(lVar5 + (ulonglong)*(byte *)((longlong)puVar3 + 1)),
            puVar3 = puVar3 + 1,
            puVar7 + (ulonglong)*pbVar6 * 0x100 + (ulonglong)pbVar6[1] <= param_2));
  }
  uVar2 = 0;
LAB_14003907a:
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

