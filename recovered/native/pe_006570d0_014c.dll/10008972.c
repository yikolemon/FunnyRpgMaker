/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10008972 */

undefined4 FUN_10008972(undefined4 param_1,undefined4 param_2,double param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [24];
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_3c;
  if (NAN(param_3)) {
    local_3c = param_3;
    iVar2 = FUN_10268ff0();
    puVar1 = (undefined2 *)local_24;
    if (iVar2 != 0) {
      puVar1 = (undefined2 *)(local_24 + 1);
      local_24[0] = 0x2d;
    }
    *(undefined1 *)(puVar1 + 1) = 0x6e;
    *puVar1 = 0x616e;
    puVar1 = (undefined2 *)((int)puVar1 + 3);
    if (puVar1 != (undefined2 *)local_24) goto LAB_100089ba;
  }
  local_28 = 0;
  local_2c = 0;
  local_34 = param_3;
  local_3c = (double)CONCAT44(&local_c,local_24);
  puVar1 = (undefined2 *)FUN_10008a2f();
LAB_100089ba:
  local_34 = (double)CONCAT44(param_2,puVar1);
  local_3c = (double)CONCAT44(local_24,param_1);
  FUN_10006bdf();
  if (DAT_10388d00 != (local_c ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

