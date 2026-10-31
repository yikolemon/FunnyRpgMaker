/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1002c70c */

undefined4 * FUN_1002c70c(undefined4 *param_1,undefined4 param_2,byte param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_28;
  undefined4 uStack_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar2 = *param_4;
  if ((byte)(((byte)uVar2 & 7) - 2) < 5) {
    uVar2 = *param_4;
    uVar3 = (uint)param_3;
    if ((uVar2 >> 0xe & 1) != 0) {
      uStack_20 = 2;
      local_28 = uVar3;
      cVar1 = FUN_100259b2(param_2,uVar3);
      if (cVar1 != '\0') {
        *param_1 = param_2;
        goto LAB_1002c7f0;
      }
      uVar2 = *param_4;
    }
    FUN_10025b80(param_1,param_2,uVar3,*(undefined4 *)((int)&DAT_1028f244 + (uVar2 >> 8 & 0xc)),
                 param_4);
  }
  else {
    if ((uVar2 & 0x38) == 0x20 || (uVar2 & 0x2c00) != 0) {
      FUN_10025774();
                    /* WARNING: Subroutine does not return */
      FUN_102586e0(&local_28,&DAT_103607ac);
    }
    local_28._0_2_ = CONCAT11(param_3,(*param_4 & 7) == 1);
    FUN_100274cd(param_1,param_2,param_4,1,1,&local_28);
  }
LAB_1002c7f0:
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

