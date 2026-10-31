/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140068b1f */

undefined8 FUN_140068b1f(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14012ea80 ^ (ulonglong)auStack_48;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x50) == 0) {
    uVar1 = FUN_140069c14(*(longlong *)(param_1 + 800),(uint)param_2);
    if ((int)uVar1 < 0) {
      uVar2 = 0x12;
      goto LAB_140068baa;
    }
    param_2 = uVar1 & 0xffffffff;
    lVar3 = *(longlong *)(param_1 + 8);
  }
  uVar2 = (**(code **)(param_1 + 0x380))(lVar3,param_2,&local_20,&local_24);
  if ((int)uVar2 == 0) {
    param_3[1] = local_20;
    lVar3 = (ulonglong)local_24 + local_20;
    if (local_20 == 0) {
      lVar3 = 0;
    }
    param_3[2] = lVar3;
    param_3[3] = local_20;
    uVar2 = 0;
  }
LAB_140068baa:
  if (DAT_14012ea80 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_18 ^ (ulonglong)auStack_48);
}

