/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018f944 */

void FUN_1018f944(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined4 local_9c;
  undefined4 local_94 [12];
  undefined1 local_64;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_ac;
  uVar1 = FUN_1018fc17();
  local_ac = uVar1;
  uVar2 = FUN_100fa1fa();
  FUN_1018fc1d();
  if (param_4 == (undefined4 *)0x0) {
    FUN_1018e2b2();
  }
  else {
    puVar4 = local_94;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_4;
      param_4 = param_4 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_a0 = local_94;
  local_64 = 1;
  local_9c = param_5;
  local_a4 = param_3;
  local_ac = uVar2;
  local_a8 = uVar1;
  FUN_1018fb4c();
  if (DAT_10388d00 != (local_14 ^ (uint)&local_ac)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

