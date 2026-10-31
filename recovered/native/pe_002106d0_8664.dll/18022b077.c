/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022b077 */

undefined1 * FUN_18022b077(undefined8 param_1,longlong param_2,longlong param_3,code *param_4)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  puVar4 = (undefined1 *)FUN_1801cc006(param_1,*(ushort *)(param_3 + 8) + 1,&local_4c);
  if (local_4c == 0) {
    local_4c = FUN_1801ce63e(param_2,*(undefined4 *)(param_3 + 0xc));
    if ((local_4c == 0) &&
       (local_4c = FUN_1801cec60(param_2,*(undefined2 *)(param_3 + 8)), local_4c == 0)) {
      uVar1 = *(ushort *)(param_3 + 8);
      if (uVar1 == 0) {
        *puVar4 = 0;
        FUN_1801ced84(param_2);
      }
      else {
        lVar2 = *(longlong *)(param_2 + 0x38);
        lVar6 = 0;
        puVar5 = puVar4;
        local_58 = param_2;
        do {
          iVar3 = (*param_4)((int)*(char *)(lVar2 + lVar6));
          if (iVar3 != 0) {
            *puVar5 = *(undefined1 *)(lVar2 + lVar6);
            puVar5 = puVar5 + 1;
          }
          lVar6 = lVar6 + 1;
        } while ((uint)uVar1 != (uint)lVar6);
        *puVar5 = 0;
        FUN_1801ced84(local_58);
        if (puVar5 != puVar4) goto LAB_18022b115;
      }
    }
    FUN_1801c9b65(param_1,puVar4);
    *(undefined4 *)(param_3 + 0xc) = 0;
    *(undefined2 *)(param_3 + 8) = 0;
    FUN_1801c9b65(param_1,*(undefined8 *)(param_3 + 0x10));
    *(undefined8 *)(param_3 + 0x10) = 0;
  }
  puVar4 = (undefined1 *)0x0;
LAB_18022b115:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return puVar4;
}

