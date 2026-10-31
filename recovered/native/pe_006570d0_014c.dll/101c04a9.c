/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c04a9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_101c04a9(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 *local_14;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_28;
  param_1[1] = 0xf1;
  *param_1 = 0x50;
  param_1[2] = 0;
  puVar2 = &LAB_101c5980;
  if (param_2 == 0) {
    puVar2 = &LAB_101c59be;
  }
  pcVar3 = FUN_1006ce73;
  if (param_2 == 0) {
    pcVar3 = (code *)&LAB_101c59e7;
  }
  param_1[3] = puVar2;
  param_1[4] = pcVar3;
  local_14 = &local_10;
  local_24 = _DAT_10302e20;
  uStack_20 = _UNK_10302e24;
  uStack_1c = _UNK_10302e28;
  uStack_18 = _UNK_10302e2c;
  local_28 = param_3;
  uVar1 = FUN_101c00c3();
  param_1[5] = uVar1;
  if (DAT_10388d00 == (local_c ^ (uint)&local_28)) {
    return local_10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

