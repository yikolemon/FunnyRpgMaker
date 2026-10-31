/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100e1d7c */

void __thiscall FUN_100e1d7c(int *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  int *piVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  uint local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_30;
  local_18 = &LAB_100ea9a0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  local_2c = param_1;
  do {
    local_24 = param_1;
    cVar5 = FUN_100e1d6e(&param_2,&stack0x0000000c);
    if (cVar5 != '\0') {
      piVar1 = local_2c + 4;
      if (0xf < (uint)local_2c[5]) {
        local_2c = (int *)*local_2c;
      }
      *(undefined1 *)((int)local_2c + *piVar1) = 0;
      *unaff_FS_OFFSET = local_1c;
      return;
    }
    uVar2 = local_2c[4];
    uVar9 = local_2c[5];
    if (uVar2 == uVar9) {
      if (uVar2 == 0x7fffffff) {
        local_24 = local_2c;
                    /* WARNING: Subroutine does not return */
        FUN_100013fb();
      }
      local_28 = local_2c;
      if (0xf < uVar2) {
        local_28 = (int *)*local_2c;
      }
      local_30 = 0x7fffffff;
      if ((-2 < (int)uVar2) && (uVar2 <= (uVar2 >> 1 ^ 0x7fffffff))) {
        uVar9 = uVar2 + 1 | 0xf;
        local_30 = (uVar2 >> 1) + uVar2;
        if (local_30 < uVar9) {
          local_30 = uVar9;
        }
      }
      local_24 = local_2c;
      piVar6 = (int *)FUN_10001426(local_30 + 1);
      piVar4 = local_28;
      piVar1 = local_2c;
      local_28 = piVar6;
      FUN_1025b2d0(piVar6,piVar4,local_2c[4]);
      uVar9 = local_30;
      uVar2 = piVar1[5];
      if (0xf < uVar2) {
        iVar8 = *piVar1;
        uVar7 = uVar2 + 1;
        iVar10 = iVar8;
        if (0xfff < uVar7) {
          iVar10 = *(int *)(iVar8 + -4);
          if (0x1f < (uint)((iVar8 + -4) - iVar10)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar7 = uVar2 + 0x24;
        }
        FUN_102283a0(iVar10,uVar7);
      }
      *piVar1 = (int)local_28;
      piVar1[5] = uVar9;
      local_24 = piVar1;
    }
    else {
      local_28 = (int *)*local_2c;
      local_24 = local_2c;
    }
    if (uVar9 < 0x10) {
      local_28 = local_24;
    }
    if ((char)param_3 == '\0') {
      FUN_100e1fa2();
      local_24 = local_2c;
    }
    *(undefined1 *)((int)local_28 + local_24[4]) = param_3._1_1_;
    local_24[4] = local_24[4] + 1;
    param_1 = local_24;
    if ((param_2 == 0) || (iVar8 = FUN_10082d16(), param_1 = local_2c, iVar8 == -1)) {
      param_2 = 0;
      param_3._0_1_ = '\x01';
    }
    else {
      param_3._0_1_ = '\0';
    }
  } while( true );
}

