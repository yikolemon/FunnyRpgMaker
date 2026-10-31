/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140083fc4 */

undefined8 FUN_140083fc4(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  bVar2 = FUN_140084000(param_1);
  if ((int)CONCAT71(extraout_var,bVar2) != 0) {
    return 0xfffffffe;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x34) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  uVar3 = FUN_140084038(param_1);
  return uVar3;
}

