/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0047aae9 */

undefined4 * __cdecl
FUN_0047aae9(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  bool bVar1;
  float10 fVar2;
  float10 fVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  local_40 = param_2;
  uStack_3c = param_3;
  uStack_38 = param_4;
  uStack_34 = param_5;
  local_30 = param_6;
  uStack_2c = param_7;
  uStack_28 = param_8;
  uStack_24 = param_9;
  bVar1 = FUN_0047aa04(param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (bVar1) {
    fVar2 = FUN_0041ba2c((int)&local_40);
    fVar3 = FUN_0041ba28((double *)&local_40);
    FUN_0041b968(param_1,SUB84((double)fVar3,0),(int)((ulonglong)(double)fVar3 >> 0x20),
                 SUB84((double)fVar2,0),(int)((ulonglong)(double)fVar2 >> 0x20),70.0);
  }
  else {
    param_1[4] = param_6;
    param_1[5] = param_7;
    param_1[6] = param_8;
    param_1[7] = param_9;
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  if (DAT_0050e8c0 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
}

