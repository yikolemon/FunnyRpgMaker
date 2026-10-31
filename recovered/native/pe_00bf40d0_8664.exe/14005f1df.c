/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005f1df */

int FUN_14005f1df(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auStackY_78 [32];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  local_3c = 0;
  uVar2 = param_3 - 7;
  if (uVar2 != 0) {
    lVar1 = FUN_14001f231(*(longlong *)(param_1 + 0x80),1,*(uint *)(param_1 + 0x68),
                          (param_3 + *(uint *)(param_1 + 0x68)) - 6,*(longlong *)(param_1 + 0x60),
                          &local_3c);
    *(longlong *)(param_1 + 0x60) = lVar1;
    if (local_3c == 0) {
      puVar3 = (undefined8 *)(lVar1 + (ulonglong)*(uint *)(param_1 + 0x68));
      FUN_1400b3550(puVar3,(undefined8 *)(param_2 + 7),(ulonglong)uVar2);
      *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar3) = 0;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_3 + -6;
    }
  }
  if (DAT_14012ea80 != (local_38 ^ (ulonglong)auStackY_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_38 ^ (ulonglong)auStackY_78);
  }
  return local_3c;
}

