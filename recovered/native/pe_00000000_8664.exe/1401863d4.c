/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401863d4 */

undefined8 FUN_1401863d4(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = FUN_140186410();
  if (iVar2 != 0) {
    return 0xfffffffe;
  }
  lVar1 = *(longlong *)(param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x34) = 0;
  *(undefined4 *)(lVar1 + 0x3c) = 0;
  uVar3 = FUN_140186448(param_1);
  return uVar3;
}

