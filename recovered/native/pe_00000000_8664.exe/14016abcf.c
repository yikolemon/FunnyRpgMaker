/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14016abcf */

undefined8 FUN_14016abcf(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(*(longlong *)(lVar3 + 0xd0) + 0x50) == 0) {
    uVar1 = FUN_14016bcc0(*(undefined8 *)(param_1 + 800));
    if ((int)uVar1 < 0) {
      uVar2 = 0x12;
      goto LAB_14016ac5a;
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
LAB_14016ac5a:
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

