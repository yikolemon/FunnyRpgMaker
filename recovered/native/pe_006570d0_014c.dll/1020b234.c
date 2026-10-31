/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b234 */

undefined4 * __fastcall FUN_1020b234(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_1c = param_2;
  puVar1 = (undefined4 *)FUN_101c21f6(param_1,0x14,&local_18);
  puVar3 = (undefined4 *)0x0;
  if (local_18 == 0) {
    *puVar1 = param_1;
    puVar1[1] = local_1c;
    uVar2 = FUN_101c2a50(param_1,8,0,param_3,0,&local_18);
    puVar1[2] = uVar2;
    if (local_18 == 0) {
      puVar1[4] = param_3;
      puVar1[3] = uVar2;
      puVar3 = puVar1;
    }
    else {
      FUN_101c0017(param_1,puVar1);
      puVar3 = (undefined4 *)0x0;
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_1c)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

