/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140050e1e */

uint FUN_140050e1e(undefined8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [44];
  byte local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  iVar1 = FUN_140020a85((longlong *)*param_1,(undefined8 *)local_1c,
                        (uint)*(byte *)((longlong)param_1 + 0x14));
  uVar2 = 0;
  if ((iVar1 == 0) && ((ulonglong)*(byte *)((longlong)param_1 + 0x14) != 0)) {
    uVar2 = 0;
    uVar3 = 0;
    do {
      uVar2 = uVar2 << 8 | (uint)local_1c[uVar3];
      uVar3 = uVar3 + 1;
    } while (*(byte *)((longlong)param_1 + 0x14) != uVar3);
  }
  *param_2 = iVar1;
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

