/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001bb7c */

void __fastcall FUN_1001bb7c(int *param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *local_44;
  int local_40;
  uint local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int *local_2c;
  int local_28;
  uint local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_100592f0;
  local_1c = ExceptionList;
  iVar5 = *param_1;
  local_24 = param_1[2] - iVar5;
  uVar2 = ((int)local_24 >> 2) * -0x33333333;
  iVar3 = (uVar2 >> 1) + (uint)(uVar2 >> 1 == 0);
  uVar4 = iVar3 + uVar2;
  if (0xcccccccU - iVar3 < uVar2) {
    uVar4 = 0xccccccc;
  }
  ExceptionList = &local_1c;
  local_2c = param_1;
  if (uVar4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_10228760(0xc);
  }
  if (0xccccccc < uVar4) {
    local_20 = (undefined1 *)&local_44;
                    /* WARNING: Subroutine does not return */
    FUN_1000146d();
  }
  local_28 = param_1[1];
  local_20 = (undefined1 *)&local_44;
  local_40 = FUN_10001426(uVar4 * 0x14);
  local_14 = 0;
  local_44 = param_1;
  local_3c = uVar4;
  local_38 = iVar5;
  local_34 = uVar4;
  local_30 = local_40;
  thunk_FUN_1001bd1e(iVar5,local_28,local_40);
  *local_2c = local_30;
  local_2c[1] = (local_28 - local_38) + local_30;
  local_2c[2] = local_30 + local_34 * 0x14;
  local_40 = 0;
  if ((char)local_2c[3] == '\x01') {
    uVar2 = local_24;
    iVar5 = local_38;
    if (0xfff < local_24) {
      if (0x1f < (uint)((local_38 + -4) - *(int *)(local_38 + -4))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = local_24 + 0x23;
      iVar5 = *(int *)(local_38 + -4);
    }
    FUN_102283a0(iVar5,uVar2);
  }
  else {
    *(undefined1 *)(local_2c + 3) = 1;
  }
  local_14 = 0xffffffff;
  FUN_1001bce2();
  ExceptionList = local_1c;
  return;
}

