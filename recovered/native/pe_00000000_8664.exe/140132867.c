/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140132867 */

undefined4
FUN_140132867(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0x30);
  lVar1 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 0x318) + 0x48) + 0x30))
                    (param_2,&local_3c);
  lVar2 = (**(code **)(*(longlong *)(*(longlong *)(lVar2 + 0x318) + 0x48) + 0x38))
                    (param_2,&local_3c);
  uVar3 = 0;
  if (param_3 < local_3c) {
    uVar4 = (ulonglong)param_3;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar2 + uVar4 * 0x14);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = *(undefined4 *)(lVar2 + 0xc + uVar4 * 0x14);
    }
    uVar3 = *(undefined4 *)(lVar1 + uVar4 * 0x14);
  }
  if (DAT_140f17b40 == (local_38 ^ (ulonglong)auStack_68)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_38 ^ (ulonglong)auStack_68);
}

