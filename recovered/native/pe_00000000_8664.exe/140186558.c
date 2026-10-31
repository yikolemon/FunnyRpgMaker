/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140186558 */

undefined8 FUN_140186558(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  
  iVar3 = FUN_140186410();
  if (iVar3 == 0) {
    uVar5 = (uint)param_2;
    uVar2 = uVar5 & 0xf;
    if ((int)uVar5 < 0) {
      uVar2 = -uVar5;
    }
    iVar3 = 0;
    if ((int)uVar5 >= 0) {
      iVar3 = ((uint)(param_2 >> 4) & 0xfffffff) + 5;
    }
    if (uVar2 == 0 || 7 < (int)uVar2) {
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((*(longlong *)(lVar1 + 0x40) != 0) && (*(uint *)(lVar1 + 0x30) != uVar2)) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      *(int *)(lVar1 + 0x10) = iVar3;
      *(uint *)(lVar1 + 0x30) = uVar2;
      uVar4 = FUN_1401863d4(param_1);
      return uVar4;
    }
  }
  return 0xfffffffe;
}

