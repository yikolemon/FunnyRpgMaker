/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003bb64 */

void FUN_14003bb64(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_78 [32];
  int local_44;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  uVar1 = *param_2;
  if (*(short *)(param_1 + 0x196) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0xb2);
  }
  if (uVar1 < uVar2) {
    uVar3 = FUN_1400463fb(param_1,&local_40,&local_44,*(longlong *)(param_1 + 0xc0),&local_3c);
    if ((char)uVar3 == '\0') {
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
            FUN_1400464dc(param_1,uVar4,local_40,local_44);
          }
          uVar4 = uVar4 + 1;
        } while (uVar5 != uVar4);
      }
    }
  }
  else if (*(char *)(param_1 + 0x2c6) != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 0x86;
  }
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
  }
  return;
}

