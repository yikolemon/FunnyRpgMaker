/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ee530 */

void FUN_1801ee530(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  uint *local_58;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_180402640 ^ (ulonglong)auStack_78;
  uVar1 = *param_2;
  if (*(short *)(param_1 + 0x196) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0xb2);
  }
  if (uVar1 < uVar3) {
    local_58 = &local_3c;
    cVar2 = FUN_1801f8dc7(param_1,&local_40,&local_44,*(undefined8 *)(param_1 + 0xc0));
    if (cVar2 == '\0') {
      if (uVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = ((uint)*(ushort *)(*(longlong *)(param_1 + 0xd8) + -2 + (ulonglong)uVar1 * 2) -
                (uint)*(ushort *)(param_1 + 0xe0)) + 1;
      }
      if (*(short *)(param_1 + 0x196) == 0) {
        uVar5 = (uint)*(ushort *)(param_1 + 0xb0);
      }
      else {
        uVar5 = ((uint)*(ushort *)(*(longlong *)(param_1 + 0xd8) + (ulonglong)uVar1 * 2) -
                (uint)*(ushort *)(param_1 + 0xe0)) + 1;
      }
      if (uVar4 < uVar5) {
        do {
          if (local_3c != uVar4) {
            FUN_1801f8ea8(param_1,uVar4,local_40,local_44);
          }
          uVar4 = uVar4 + 1;
        } while (uVar5 != uVar4);
      }
    }
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  if (DAT_180402640 != (local_38 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_38 ^ (ulonglong)auStack_78);
  }
  return;
}

