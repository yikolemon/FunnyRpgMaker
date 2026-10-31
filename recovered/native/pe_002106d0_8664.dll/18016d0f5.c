/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016d0f5 */

undefined4 * FUN_18016d0f5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [40];
  int local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  puVar2 = (undefined4 *)0x0;
  local_1c = 0;
  local_20 = 0;
  iVar1 = FUN_18012b8d7(param_3,"0x%08X,%d");
  uVar3 = local_1c;
  if (1 < iVar1) {
    puVar2 = (undefined4 *)FUN_18016ce3a(local_1c);
    if (puVar2 != (undefined4 *)0x0) {
      if (local_20 <= *(short *)((longlong)puVar2 + 0xe)) {
        FUN_18016cde1(puVar2,uVar3);
        goto LAB_18016d176;
      }
      *puVar2 = 0;
      uVar3 = local_1c;
    }
    puVar2 = (undefined4 *)FUN_18016cd8e(uVar3,local_20);
  }
LAB_18016d176:
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

