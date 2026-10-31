/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001bf0c */

void FUN_14001bf0c(int *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  switchD_14001c1d2::caseD_0(param_1,(uint *)&DAT_14014d0a0,param_3,param_4);
  bVar1 = *(byte *)((longlong)param_4 + 1);
  if ((bVar1 == 0x25) || (bVar1 == 0x15)) {
    uVar2 = 0xffffffffffffffff;
    if (((*(byte *)(param_1 + 7) & 0xfe) != 100) &&
       ((puVar3 = (undefined8 *)((longlong)param_4 + (longlong)*(int *)((longlong)param_4 + 2) + 6),
        DAT_140150000 == 0 || ((DAT_140150008 <= puVar3 && (puVar3 < DAT_14012ecc0)))))) {
      uVar2 = *puVar3;
    }
  }
  else {
    uVar2 = 0xffffffffffffffff;
    if (((bVar1 & 0x30) != 0x20) && ((bVar1 & 0x30) != 0x10)) {
      return;
    }
  }
  **(undefined8 **)(param_1 + 8) = uVar2;
  return;
}

