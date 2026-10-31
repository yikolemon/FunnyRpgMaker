/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013b093 */

undefined8 FUN_14013b093(longlong param_1,byte *param_2)

{
  char cVar1;
  ushort uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  byte *pbVar5;
  longlong lVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14013b15f((ulonglong)*(byte *)(param_1 + 3) + param_1 +
                        (ulonglong)*(byte *)(param_1 + 2) * 0x100,param_2,&local_1c);
  if (cVar1 != '\0') {
    uVar2 = *(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8;
    pbVar5 = (byte *)(param_1 + (ulonglong)uVar2 * 2 + 6);
    uVar4 = 0;
    if ((param_2 < pbVar5) || (uVar2 != local_1c)) goto LAB_14013b132;
    pbVar3 = (byte *)(param_1 + 6);
    do {
      if (pbVar5 <= pbVar3) {
        uVar4 = CONCAT71((int7)((ulonglong)pbVar3 >> 8),1);
        goto LAB_14013b132;
      }
      lVar6 = (ulonglong)*pbVar3 * 0x100 + param_1;
      pbVar8 = (byte *)((ulonglong)pbVar3[1] + lVar6 + 2);
    } while ((pbVar8 <= param_2) &&
            (pbVar7 = (byte *)(lVar6 + (ulonglong)pbVar3[1]), pbVar3 = pbVar3 + 2,
            pbVar8 + (ulonglong)pbVar7[1] * 2 + (ulonglong)*pbVar7 * 0x200 <= param_2));
  }
  uVar4 = 0;
LAB_14013b132:
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

