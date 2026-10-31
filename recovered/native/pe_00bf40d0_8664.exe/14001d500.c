/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001d500 */

int FUN_14001d500(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStackY_58 [32];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14012ea80 ^ (ulonglong)auStackY_58;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x98);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)(param_1 + 0xf0) + 8) = uVar1 | 1;
  }
  else {
    FUN_14001c53d(lVar2,*(longlong *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  lVar2 = FUN_14001c617(lVar2,*(uint *)(param_1 + 0x70),0,*(uint *)(param_1 + 0x68),0,&local_24);
  *(longlong *)(param_1 + 0x78) = lVar2;
  if (DAT_14012ea80 == (local_20 ^ (ulonglong)auStackY_58)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_20 ^ (ulonglong)auStackY_58);
}

