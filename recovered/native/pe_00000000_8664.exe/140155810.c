/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140155810 */

undefined8 FUN_140155810(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  puVar2 = (undefined8 *)FUN_1401571c4();
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *param_1;
    uVar3 = (*(code *)*puVar2)(*(undefined8 *)(lVar1 + 0x98),
                               (longlong)*(int *)(lVar1 + 4) * 0xfc + *(longlong *)(lVar1 + 0x1b8),
                               &local_18);
    if ((int)uVar3 == 0) {
      *(undefined8 *)param_1[7] = local_18;
    }
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

