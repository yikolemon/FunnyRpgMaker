/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100258cd */

undefined4 * FUN_100258cd(undefined4 *param_1,undefined4 param_2,byte param_3,uint *param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *local_28;
  uint uStack_24;
  undefined4 uStack_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar2 = *param_4;
  if ((uVar2 & 5) == 0) {
    uStack_24 = param_3 ^ 5;
    local_28 = "Set to false";
    if (param_3 != 0) {
      local_28 = "Set to true";
    }
    local_28 = local_28 + 7;
    FUN_10028152(param_1,param_2,param_4,uStack_24,uStack_24,&local_28);
  }
  else {
    pcVar3 = (char *)(uint)param_3;
    if ((uVar2 >> 0xe & 1) != 0) {
      uStack_20 = 1;
      local_28 = pcVar3;
      cVar1 = FUN_100259b2(param_2,pcVar3);
      if (cVar1 != '\0') {
        *param_1 = param_2;
        goto LAB_1002598d;
      }
      uVar2 = *param_4;
    }
    FUN_10025b80(param_1,param_2,pcVar3,*(undefined4 *)((int)&DAT_1028f244 + (uVar2 >> 8 & 0xc)),
                 param_4);
  }
LAB_1002598d:
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

