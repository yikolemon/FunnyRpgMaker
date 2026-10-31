/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c725a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c725a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_101c90ad(&local_28,param_1,param_2,param_3,param_4,param_5,&DAT_10302f60);
  fVar2 = (float10)FUN_101c71d7(local_28);
  fVar3 = (float10)FUN_101c71d7(local_20);
  fVar4 = (float10)FUN_101c71d7(local_18);
  dVar1 = (double)fVar4;
  FUN_1026cb50((((double)fVar2 + (double)fVar3) - (dVar1 + dVar1)) / _DAT_10303840,
               ((double)fVar2 * DAT_10303838 + DAT_10303830 * (double)fVar3 + dVar1) / DAT_10303838)
  ;
  if (DAT_10388d00 == (local_10 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

