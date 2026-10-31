/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a2460 */

void FUN_1404a2460(uint param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *in_stack_00000040;
  
  uVar2 = 0;
  if (param_1 < 0xdead) {
    if (param_1 == 0xdeac) goto LAB_1404a2500;
    if (0xc433 < param_1) {
      if ((param_1 == 0xc435) || (param_1 == 0xd698)) goto LAB_1404a2500;
      iVar1 = param_1 - 0xdeaa;
      goto LAB_1404a24f1;
    }
    if ((((param_1 == 0xc433) || (param_1 == 0x2a)) || (param_1 == 0xc42c)) ||
       ((param_1 == 0xc42d || (param_1 == 0xc42e)))) goto LAB_1404a2500;
    bVar3 = param_1 == 0xc431;
  }
  else {
    if (((((param_1 == 0xdead) || (param_1 == 0xdeae)) || (param_1 == 0xdeaf)) ||
        ((param_1 == 0xdeb0 || (param_1 == 0xdeb1)))) ||
       ((param_1 == 0xdeb2 || (param_1 == 0xdeb3)))) goto LAB_1404a2500;
    iVar1 = param_1 - 65000;
LAB_1404a24f1:
    if (iVar1 == 0) goto LAB_1404a2500;
    bVar3 = iVar1 == 1;
  }
  if (!bVar3) {
    uVar2 = param_2 & 0xffffff7f;
  }
LAB_1404a2500:
  if ((param_1 - 65000 < 2) && (in_stack_00000040 != (undefined4 *)0x0)) {
    *in_stack_00000040 = 0;
  }
  (*(code *)s_LoadLibraryW_14059e282._6_8_)(param_1,uVar2,param_3,param_4);
  return;
}

