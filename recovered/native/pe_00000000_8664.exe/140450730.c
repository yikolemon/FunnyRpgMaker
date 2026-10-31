/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140450730 */

void FUN_140450730(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_res8 [32];
  
  FUN_14044e710(local_res8,0);
  if (*(ulonglong *)(param_1 + 0x18) <= param_3) {
    uVar3 = param_3 + 1;
    if (uVar3 < 0x28) {
      uVar3 = 0x28;
    }
    lVar1 = _realloc_base(*(undefined8 *)(param_1 + 0x10));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_14044ac40();
    }
    *(longlong *)(param_1 + 0x10) = lVar1;
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    while (uVar2 < uVar3) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar2 * 8) = 0;
      uVar2 = *(longlong *)(param_1 + 0x18) + 1;
      *(ulonglong *)(param_1 + 0x18) = uVar2;
    }
  }
  (*DAT_14059d150)(param_2);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + param_3 * 8) != 0) &&
     (lVar1 = (*DAT_14059d150)(), lVar1 != 0)) {
    (*DAT_14059d150)(lVar1,1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + param_3 * 8) = param_2;
  FUN_14044e760(local_res8);
  return;
}

