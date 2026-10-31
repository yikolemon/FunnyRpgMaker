/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004230b6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_004230b6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            double param_5)

{
  double dVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  uint unaff_retaddr;
  double local_28 [3];
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  FUN_00424f09(local_28,(double)CONCAT44(param_2,param_1),(double)CONCAT44(param_4,param_3),param_5,
               (double *)&DAT_004d7510);
  fVar2 = FUN_00423033(extraout_ECX,SUB84(local_28[0],0),(uint)((ulonglong)local_28[0] >> 0x20));
  fVar3 = FUN_00423033(extraout_ECX_00,SUB84(local_28[1],0),(uint)((ulonglong)local_28[1] >> 0x20));
  fVar4 = FUN_00423033(extraout_ECX_01,SUB84(local_28[2],0),(uint)((ulonglong)local_28[2] >> 0x20));
  dVar5 = (double)fVar4;
  dVar1 = ((double)fVar2 * DAT_004d7de8 + DAT_004d7de0 * (double)fVar3 + dVar5) / DAT_004d7de8;
  dVar5 = (((double)fVar2 + (double)fVar3) - (dVar5 + dVar5)) / _DAT_004d7df0;
  FUN_00490460(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),SUB84(dVar1,0),
               (int)((ulonglong)dVar1 >> 0x20));
  if (DAT_0050e8c0 == (unaff_retaddr ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(unaff_retaddr ^ (uint)&stack0xfffffffc);
}

