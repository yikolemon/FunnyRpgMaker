/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1015626c */

uint FUN_1015626c(int param_1,uint param_2,float param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24 [2];
  float local_1c [2];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_34;
  iVar2 = FUN_100fcb2d();
  local_2c = iVar2;
  if (param_2 != 0 && param_3 != 0.0) {
    uVar3 = 0;
    do {
      local_34 = param_3;
      FUN_100fdb2e(local_1c,*(undefined4 *)(param_1 + uVar3 * 4),0,0,0xbf800000);
      param_3 = *(float *)(iVar2 + 0x4c) + *(float *)(iVar2 + 0x4c) + local_1c[0];
      if (param_3 <= local_34) {
        param_3 = local_34;
      }
      uVar3 = uVar3 + 1;
    } while (param_2 != uVar3);
  }
  local_28 = param_3;
  FUN_10114f9f(local_1c);
  local_30 = local_1c[0];
  FUN_1010c3e4(local_24);
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    local_30 = local_30 + local_24[0];
    uVar3 = 0xffffffff;
    uVar4 = 0;
    local_34 = local_28;
    do {
      FUN_10113358(uVar4);
      if ((local_28 == 0.0) && (!NAN(local_28))) {
        FUN_100fdb2e(local_1c,*(undefined4 *)(param_1 + uVar4 * 4),0,0,0xbf800000);
        local_34 = *(float *)(local_2c + 0x4c) + *(float *)(local_2c + 0x4c) + local_1c[0];
      }
      local_1c[0] = local_34;
      local_1c[1] = 0.0;
      cVar1 = FUN_1012e1b7(*(undefined4 *)(param_1 + uVar4 * 4),local_1c);
      if (cVar1 != '\0') {
        uVar3 = uVar4;
      }
      FUN_1010c049(local_1c);
      uVar4 = uVar4 + 1;
      if ((uVar4 < param_2) && (local_1c[0] + *(float *)(local_2c + 0x5c) + local_34 < local_30)) {
        FUN_10114a0e(0,0xbf800000);
      }
      FUN_10113568();
    } while (param_2 != uVar4);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_34)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar3;
}

