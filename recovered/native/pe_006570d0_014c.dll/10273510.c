/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10273510 */

void FUN_10273510(int *param_1,undefined4 param_2)

{
  undefined *puVar1;
  BOOL BVar2;
  
  if ((*param_1 == -0x1f928c9d) && (PTR_FUN_10323698 != (undefined *)0x0)) {
    BVar2 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_10323698);
    puVar1 = PTR_FUN_10323698;
    if (BVar2 != 0) {
      (*(code *)PTR_guard_check_icall_1035d810)(param_1,param_2);
      (*(code *)puVar1)();
    }
  }
  return;
}

