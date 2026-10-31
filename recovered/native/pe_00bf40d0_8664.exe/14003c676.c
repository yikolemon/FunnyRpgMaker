/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003c676 */

void FUN_14003c676(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStackY_68 [32];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStackY_68;
  uVar1 = *param_2;
  if (uVar1 < *(ushort *)(param_1 + 0x298)) {
    lVar3 = *(longlong *)(param_1 + 0x2a0);
    if ((*(int *)(param_1 + 0x1d8) == 3) && (lVar3 != *(longlong *)(param_1 + 0x2b0))) {
      puVar2 = (undefined8 *)
               FUN_14001f231(*(longlong *)(param_1 + 0x10),4,(uint)*(ushort *)(param_1 + 0x2a8),
                             (uint)*(ushort *)(param_1 + 0x298),*(longlong *)(param_1 + 0x2b0),
                             &local_2c);
      *(undefined8 **)(param_1 + 0x2b0) = puVar2;
      *(int *)(param_1 + 0x20) = local_2c;
      if (local_2c != 0) goto LAB_14003c742;
      *(ushort *)(param_1 + 0x2a8) = *(ushort *)(param_1 + 0x298);
      FUN_1400b3550(puVar2,*(undefined8 **)(param_1 + 0x2a0),
                    (ulonglong)*(ushort *)(param_1 + 0x298) << 2);
      lVar3 = *(longlong *)(param_1 + 0x2b0);
      *(longlong *)(param_1 + 0x2a0) = lVar3;
    }
    *(uint *)(lVar3 + (ulonglong)uVar1 * 4) = param_2[1];
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
LAB_14003c742:
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStackY_68)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStackY_68);
}

