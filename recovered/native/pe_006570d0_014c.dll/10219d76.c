/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10219d76 */

undefined4 __fastcall
FUN_10219d76(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined2 *param_6,undefined2 *param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined2 local_2c;
  undefined2 uStack_2a;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_44;
  if (param_2 == 0) {
    uVar4 = 8;
  }
  else {
    uVar3 = param_2 - 1;
    FUN_10219ea4();
    FUN_10219ea4();
    local_3c = local_18;
    local_44 = local_20;
    iVar1 = FUN_10219ecd();
    uVar4 = 0x10;
    if (iVar1 != -1) {
      local_3c = local_30;
      local_44 = local_38;
      iVar1 = FUN_10219ecd();
      if (iVar1 != 1) {
        uVar2 = 0;
        do {
          uVar5 = uVar2 + uVar3 >> 1;
          FUN_10219ea4();
          local_3c = local_24;
          local_44 = CONCAT44(uStack_28,CONCAT22(uStack_2a,local_2c));
          iVar1 = FUN_10219ecd();
          if (iVar1 == -1) {
            uVar3 = uVar5 - 1;
          }
          else {
            if (iVar1 != 1) {
              *param_4 = uStack_28;
              *param_5 = local_24;
              *param_6 = local_2c;
              *param_7 = uStack_2a;
              uVar4 = 0;
              goto LAB_10219e4f;
            }
            uVar2 = uVar5 + 1;
          }
        } while (uVar2 <= uVar3);
        uVar4 = 0x10;
      }
    }
  }
LAB_10219e4f:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_44)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

