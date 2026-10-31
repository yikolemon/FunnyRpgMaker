/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140073201 */

undefined8 FUN_140073201(longlong param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  undefined1 auStack_58 [34];
  ushort local_36;
  ushort local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  puVar5 = *(ushort **)(param_5 + 2);
  if (puVar5 == (ushort *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    if (lVar2 != 0) {
      uVar4 = FUN_1400769ed(*(longlong *)(lVar2 + 8),(uint)*(ushort *)(lVar2 + 2),param_2,&local_36)
      ;
      if ((((char)uVar4 != '\0') && (local_32 != 0)) &&
         ((uint)local_34 + (uint)local_32 <= (uint)*(ushort *)(lVar2 + 4))) {
        *param_5 = (uint)local_32;
        param_5[1] = 0;
        puVar5 = (ushort *)((ulonglong)local_34 * 4 + *(longlong *)(lVar2 + 0x10));
        goto LAB_140073242;
      }
    }
  }
  else if (param_5[1] < *param_5) {
LAB_140073242:
    *(ushort **)(param_5 + 2) = puVar5 + 1;
    *param_3 = (uint)(ushort)(*puVar5 << 8 | *puVar5 >> 8);
    puVar5 = *(ushort **)(param_5 + 2);
    *(ushort **)(param_5 + 2) = puVar5 + 1;
    uVar1 = *puVar5;
    uVar3 = uVar1 << 8 | uVar1 >> 8;
    *param_4 = (uint)uVar3;
    if ((*param_3 < *(uint *)(param_1 + 0x10)) &&
       ((uVar3 == 0xffff || (uVar3 < *(ushort *)(param_1 + 0x388))))) {
      param_5[1] = param_5[1] + 1;
      uVar4 = CONCAT71((uint7)(byte)uVar1,1);
      goto LAB_1400732d2;
    }
  }
  uVar4 = 0;
LAB_1400732d2:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

