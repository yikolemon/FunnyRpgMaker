/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047aa04 */

bool __cdecl
FUN_0047aa04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  
  local_20 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  uStack_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  local_30 = param_5;
  uStack_2c = param_6;
  uStack_28 = param_7;
  uStack_24 = param_8;
  fVar2 = FUN_0041ba28((double *)&local_40);
  fVar2 = FUN_00492980((double)fVar2);
  fVar3 = FUN_0041ba2c((int)&local_40);
  fVar3 = FUN_00492980((double)fVar3);
  fVar4 = FUN_0041ba30((int)&local_40);
  bVar1 = false;
  if (((DAT_004dc9b0 <= (double)fVar2) && ((double)fVar2 <= DAT_004f6ca8)) &&
     (DAT_004d80e0 < (double)fVar3)) {
    fVar2 = FUN_00492980((double)fVar4);
    bVar1 = (double)fVar2 < DAT_004f6cb0;
  }
  if (DAT_0050e8c0 == (local_20 ^ (uint)&stack0xfffffffc)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_20 ^ (uint)&stack0xfffffffc);
}

