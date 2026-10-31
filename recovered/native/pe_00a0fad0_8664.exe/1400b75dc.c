/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400b75dc */

void FUN_1400b75dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1401c9640 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res10;
  uVar1 = FUN_14010b2d0(1);
  puVar2 = (undefined8 *)FUN_140024697();
  local_38 = &local_res10;
  FUN_14010b6e4(*puVar2,uVar1,param_1,0);
  if (DAT_1401c9640 == (local_20 ^ (ulonglong)auStack_58)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400d3720(local_20 ^ (ulonglong)auStack_58);
}

