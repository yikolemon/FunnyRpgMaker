/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021b4e3 */

undefined8 FUN_18021b4e3(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x50) == 0) {
    uVar1 = FUN_18021c5d4(*(undefined8 *)(param_1 + 800));
    if ((int)uVar1 < 0) {
      uVar2 = 0x12;
      goto LAB_18021b56e;
    }
    param_2 = (ulonglong)uVar1;
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
LAB_18021b56e:
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

