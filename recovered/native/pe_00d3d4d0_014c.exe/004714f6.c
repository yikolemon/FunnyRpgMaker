/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004714f6 */

undefined4 __fastcall
FUN_004714f6(ushort *param_1,int param_2,void *param_3,undefined4 *param_4,undefined4 *param_5,
            ushort *param_6,undefined2 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_38 [3];
  ushort local_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  undefined4 local_24;
  uint local_20 [3];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xffffffbc;
  if (param_2 == 0) {
    uVar4 = 8;
  }
  else {
    uVar3 = param_2 - 1;
    FUN_00471624((ushort *)local_20,param_1);
    FUN_00471624((ushort *)local_38,param_1 + uVar3 * 6);
    uVar1 = FUN_0047164d(param_3,local_20[0]);
    uVar4 = 0x10;
    if (uVar1 != 0xffffffff) {
      uVar1 = FUN_0047164d(param_3,local_38[0]);
      if (uVar1 != 1) {
        uVar1 = 0;
        do {
          uVar5 = uVar1 + uVar3 >> 1;
          FUN_00471624(&local_2c,param_1 + uVar5 * 6);
          uVar2 = FUN_0047164d(param_3,CONCAT22(uStack_2a,local_2c));
          if (uVar2 == 0xffffffff) {
            uVar3 = uVar5 - 1;
          }
          else {
            if (uVar2 != 1) {
              *param_4 = uStack_28;
              *param_5 = local_24;
              *param_6 = local_2c;
              *param_7 = uStack_2a;
              uVar4 = 0;
              goto LAB_004715cf;
            }
            uVar1 = uVar5 + 1;
          }
        } while (uVar1 <= uVar3);
        uVar4 = 0x10;
      }
    }
  }
LAB_004715cf:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&stack0xffffffbc)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xffffffbc);
}

