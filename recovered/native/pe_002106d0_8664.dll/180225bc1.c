/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180225bc1 */

undefined8
FUN_180225bc1(longlong param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  ushort *puVar6;
  undefined1 auStack_58 [34];
  undefined1 local_36 [2];
  ushort local_34;
  ushort local_32;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_58;
  puVar6 = *(ushort **)(param_5 + 2);
  if (puVar6 == (ushort *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    if (lVar2 != 0) {
      cVar3 = FUN_1802293ad(*(undefined8 *)(lVar2 + 8),*(undefined2 *)(lVar2 + 2),param_2,local_36);
      if (((cVar3 != '\0') && (local_32 != 0)) &&
         ((uint)local_34 + (uint)local_32 <= (uint)*(ushort *)(lVar2 + 4))) {
        *param_5 = (uint)local_32;
        param_5[1] = 0;
        puVar6 = (ushort *)((ulonglong)local_34 * 4 + *(longlong *)(lVar2 + 0x10));
        goto LAB_180225c02;
      }
    }
  }
  else if (param_5[1] < *param_5) {
LAB_180225c02:
    *(ushort **)(param_5 + 2) = puVar6 + 1;
    *param_3 = (uint)(ushort)(*puVar6 << 8 | *puVar6 >> 8);
    puVar6 = *(ushort **)(param_5 + 2);
    *(ushort **)(param_5 + 2) = puVar6 + 1;
    uVar1 = *puVar6;
    uVar4 = uVar1 << 8 | uVar1 >> 8;
    *param_4 = (uint)uVar4;
    if ((*param_3 < *(uint *)(param_1 + 0x10)) &&
       ((uVar4 == 0xffff || (uVar4 < *(ushort *)(param_1 + 0x388))))) {
      param_5[1] = param_5[1] + 1;
      uVar5 = CONCAT71((uint7)(byte)uVar1,1);
      goto LAB_180225c92;
    }
  }
  uVar5 = 0;
LAB_180225c92:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_58);
}

