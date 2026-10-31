/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140084148 */

undefined8 FUN_140084148(longlong param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined8 uVar4;
  int iVar5;
  
  bVar3 = FUN_140084000(param_1);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    uVar2 = param_2 & 0xf;
    if ((int)param_2 < 0) {
      uVar2 = -param_2;
    }
    iVar5 = 0;
    if ((int)param_2 >= 0) {
      iVar5 = (param_2 >> 4) + 5;
    }
    if (uVar2 == 0 || 7 < (int)uVar2) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((*(longlong *)(lVar1 + 0x40) != 0) && (*(uint *)(lVar1 + 0x30) != uVar2)) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(int *)(lVar1 + 0x10) = iVar5;
      *(uint *)(lVar1 + 0x30) = uVar2;
      uVar4 = FUN_140083fc4(param_1);
      return uVar4;
    }
  }
  return 0xfffffffe;
}

