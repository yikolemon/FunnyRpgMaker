/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140083e41 */

undefined8 FUN_140083e41(longlong param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  longlong lVar3;
  
  bVar1 = FUN_140084000(param_1);
  uVar2 = 0xfffffffe;
  if ((int)CONCAT71(extraout_var,bVar1) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (*(longlong *)(lVar3 + 0x40) != 0) {
      (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),*(longlong *)(lVar3 + 0x40));
      lVar3 = *(longlong *)(param_1 + 0x28);
    }
    (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),lVar3);
    *(undefined8 *)(param_1 + 0x28) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

