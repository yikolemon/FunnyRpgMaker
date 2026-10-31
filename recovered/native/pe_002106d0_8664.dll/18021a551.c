/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021a551 */

undefined8 * FUN_18021a551(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  int *local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_180402640 ^ (ulonglong)auStack_68;
  puVar1 = (undefined8 *)FUN_1801cc006(param_1,0x28,&local_34);
  if (local_34 == 0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    local_48 = 0;
    local_40 = &local_34;
    uVar2 = FUN_1801cc8d6(param_1,8,0,param_3);
    puVar1[2] = uVar2;
    if (local_34 == 0) {
      *(undefined4 *)(puVar1 + 4) = param_3;
      puVar1[3] = uVar2;
      goto LAB_18021a5cf;
    }
    FUN_1801c9b65(param_1,puVar1);
  }
  puVar1 = (undefined8 *)0x0;
LAB_18021a5cf:
  if (DAT_180402640 == (local_30 ^ (ulonglong)auStack_68)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_30 ^ (ulonglong)auStack_68);
}

