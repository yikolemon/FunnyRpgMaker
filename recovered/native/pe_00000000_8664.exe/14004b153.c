/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14004b153 */

undefined8 FUN_14004b153(undefined8 param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined2 *local_58 [2];
  undefined1 local_48 [24];
  ulonglong local_30 [3];
  
  local_30[0] = DAT_140f17b40 ^ (ulonglong)auStack_88;
  if (NAN(param_3)) {
    iVar1 = FUN_14019ea30(param_3);
    puVar2 = (undefined2 *)local_48;
    if (iVar1 != 0) {
      puVar2 = (undefined2 *)(local_48 + 1);
      local_48[0] = 0x2d;
    }
    *(undefined1 *)(puVar2 + 1) = 0x6e;
    *puVar2 = 0x616e;
    puVar2 = (undefined2 *)((longlong)puVar2 + 3);
    if (puVar2 != (undefined2 *)local_48) goto LAB_14004b1a3;
  }
  local_60 = 0;
  local_68 = 0;
  FUN_14004b21d(local_58,local_48,local_30,param_3);
  puVar2 = local_58[0];
LAB_14004b1a3:
  FUN_14004a4e4(param_1,local_48,puVar2,param_2);
  if (DAT_140f17b40 != (local_30[0] ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_30[0] ^ (ulonglong)auStack_88);
  }
  return param_1;
}

