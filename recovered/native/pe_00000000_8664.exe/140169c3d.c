/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140169c3d */

undefined8 * FUN_140169c3d(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_14012afda(param_1,0x28,&local_34);
  if (local_34 == 0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    local_48 = 0;
    local_40 = &local_34;
    uVar2 = FUN_14012b8aa(param_1,8,0,param_3);
    puVar1[2] = uVar2;
    if (local_34 == 0) {
      *(undefined4 *)(puVar1 + 4) = param_3;
      puVar1[3] = uVar2;
      goto LAB_140169cbb;
    }
    FUN_140128b39(param_1,puVar1);
  }
  puVar1 = (undefined8 *)0x0;
LAB_140169cbb:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_68)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_68);
}

