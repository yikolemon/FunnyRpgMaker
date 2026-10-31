/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400307af */

undefined4
FUN_1400307af(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  uVar1 = (ulonglong)param_3;
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x30);
  lVar2 = (**(code **)(*(longlong *)(*(longlong *)(lVar3 + 0x318) + 0x48) + 0x30))
                    (param_2,&local_3c);
  lVar3 = (**(code **)(*(longlong *)(*(longlong *)(lVar3 + 0x318) + 0x48) + 0x38))
                    (param_2,&local_3c);
  uVar4 = 0;
  if (param_3 < local_3c) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar3 + uVar1 * 0x14);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(lVar3 + 0xc + uVar1 * 0x14);
    }
    uVar4 = *(undefined4 *)(lVar2 + uVar1 * 0x14);
  }
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_68)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_68);
}

