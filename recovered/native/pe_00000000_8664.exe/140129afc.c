/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140129afc */

undefined4 FUN_140129afc(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 *local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x98);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((uVar1 & 1) == 0) {
    *(uint *)(*(longlong *)(param_1 + 0xf0) + 8) = uVar1 | 1;
  }
  else {
    FUN_140128b39(uVar2,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  local_30 = &local_24;
  local_38 = 0;
  uVar2 = FUN_140128c13(uVar2,*(undefined4 *)(param_1 + 0x70),0,*(undefined4 *)(param_1 + 0x68));
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

