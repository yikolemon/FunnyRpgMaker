/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c38b */

int FUN_14017c38b(longlong param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  local_24 = 0;
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x2c) < param_2) {
    *(undefined8 *)(param_1 + 0x38) = param_3;
    local_38 = *(undefined8 *)(param_1 + 0x30);
    local_30 = &local_24;
    uVar2 = FUN_14012b8aa(param_3,4,*(uint *)(param_1 + 0x2c),param_2);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    iVar1 = local_24;
    if (local_24 == 0) {
      *(uint *)(param_1 + 0x2c) = param_2;
      iVar1 = 0;
    }
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_58)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_58);
}

