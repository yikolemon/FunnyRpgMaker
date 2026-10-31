/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005176a */

undefined8 * FUN_14005176a(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  int local_38;
  uint local_34;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x30);
    local_38 = FUN_140050c74((longlong *)(param_1 + 0x30),param_2,(longlong *)&local_30,&local_34);
    if (local_38 == 0) {
      puVar2 = (undefined8 *)FUN_14001e961(lVar1,local_34 + 1,&local_38);
      if (local_38 == 0) {
        FUN_1400b3550(puVar2,local_30,(ulonglong)local_34);
        *(undefined1 *)((longlong)puVar2 + (ulonglong)local_34) = 0;
      }
      FUN_140050c64((longlong *)(param_1 + 0x30),(longlong *)&local_30);
      goto LAB_1400517f5;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_1400517f5:
  if (DAT_14012ea80 == (local_28 ^ (ulonglong)auStack_58)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_28 ^ (ulonglong)auStack_58);
}

