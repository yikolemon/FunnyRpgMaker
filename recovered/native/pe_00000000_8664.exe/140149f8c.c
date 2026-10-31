/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140149f8c */

undefined8 FUN_140149f8c(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_140f17b40 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)FUN_14014c30e();
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(code *)*puVar1)(*(undefined8 *)(*param_1 + 0x98),*param_1 + 0x114,&local_18);
    if ((int)uVar2 == 0) {
      *(undefined8 *)param_1[7] = local_18;
    }
  }
  if (DAT_140f17b40 == (local_10 ^ (ulonglong)auStack_38)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_10 ^ (ulonglong)auStack_38);
}

