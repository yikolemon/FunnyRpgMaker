/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800075be */

undefined8 FUN_1800075be(undefined8 param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined2 *local_58 [2];
  undefined1 local_48 [24];
  ulonglong local_30 [3];
  
  local_30[0] = DAT_180402640 ^ (ulonglong)auStack_88;
  if (NAN(param_3)) {
    iVar1 = FUN_18027e7d0(param_3);
    puVar2 = (undefined2 *)local_48;
    if (iVar1 != 0) {
      puVar2 = (undefined2 *)(local_48 + 1);
      local_48[0] = 0x2d;
    }
    *(undefined1 *)(puVar2 + 1) = 0x6e;
    *puVar2 = 0x616e;
    puVar2 = (undefined2 *)((longlong)puVar2 + 3);
    if (puVar2 != (undefined2 *)local_48) goto LAB_18000760e;
  }
  local_60 = 0;
  local_68 = 0;
  FUN_180007688(local_58,local_48,local_30,param_3);
  puVar2 = local_58[0];
LAB_18000760e:
  FUN_18000692b(param_1,local_48,puVar2,param_2);
  if (DAT_180402640 != (local_30[0] ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_30[0] ^ (ulonglong)auStack_88);
  }
  return param_1;
}

