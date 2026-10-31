/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401150c5 */

undefined4 * FUN_1401150c5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  puVar2 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = 0;
  iVar1 = FUN_1400a4807(param_3,"0x%08X,%d");
  uVar3 = local_1c;
  if (1 < iVar1) {
    puVar2 = (undefined4 *)FUN_140114e0a(local_1c);
    if (puVar2 != (undefined4 *)0x0) {
      if (local_20 <= *(short *)((longlong)puVar2 + 0xe)) {
        FUN_140114db1(puVar2,uVar3);
        goto LAB_140115146;
      }
      *puVar2 = 0;
      uVar3 = local_1c;
    }
    puVar2 = (undefined4 *)FUN_140114d5e(uVar3,local_20);
  }
LAB_140115146:
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_48)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
}

