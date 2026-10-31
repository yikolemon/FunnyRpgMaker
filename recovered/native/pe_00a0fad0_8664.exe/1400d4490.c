/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d4490 */

void FUN_1400d4490(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_res8 [32];
  
  FUN_1400d39b0(local_res8,0);
  if (*(ulonglong *)(param_1 + 0x18) <= param_3) {
    uVar3 = param_3 + 1;
    if (uVar3 < 0x28) {
      uVar3 = 0x28;
    }
    lVar1 = _realloc_base(*(undefined8 *)(param_1 + 0x10));
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400d9cb0();
    }
    *(longlong *)(param_1 + 0x10) = lVar1;
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    while (uVar2 < uVar3) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + uVar2 * 8) = 0;
      uVar2 = *(longlong *)(param_1 + 0x18) + 1;
      *(ulonglong *)(param_1 + 0x18) = uVar2;
    }
  }
  (*(code *)PTR__guard_dispatch_icall_140178c20)(param_2);
  if ((*(longlong *)(*(longlong *)(param_1 + 0x10) + param_3 * 8) != 0) &&
     (lVar1 = (*(code *)PTR__guard_dispatch_icall_140178c20)(), lVar1 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140178c20)(lVar1,1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + param_3 * 8) = param_2;
  FUN_1400d3a00(local_res8);
  return;
}

