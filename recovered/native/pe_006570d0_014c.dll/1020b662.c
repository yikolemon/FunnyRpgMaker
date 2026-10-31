/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b662 */

void __fastcall FUN_1020b662(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  uVar1 = FUN_1020c5fc();
  if ((char)uVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),*(char *)(param_1 + 0x2d8d) == '\0');
  }
  local_2c = param_2;
  if ((*(int *)(param_1 + 0x2dc8) != param_3 || *(int *)(param_1 + 0x2dc4) != param_2) ||
      (uVar2 & 1) != 0) {
    local_28 = uVar2;
    FUN_1020c600(*(int *)(param_1 + 0x2dc8),param_2,param_3,&local_18,&local_1c);
    local_24 = *(int *)(param_1 + 0x2dc4) + local_18;
    local_20 = *(int *)(param_1 + 0x2dc8) + local_1c;
    param_2 = local_18 + param_2;
    iVar3 = local_1c + param_3;
    if (*(char *)(param_1 + 0x2d8f) != '\0') {
      FUN_1020c7be(local_20);
      *(undefined1 *)(param_1 + 0x2d8f) = 0;
      *(undefined1 *)(param_1 + 0x2d8c) = 1;
      *(int *)(param_1 + 0x2dbc) = param_2;
      *(int *)(param_1 + 0x2dc0) = iVar3;
    }
    if (*(char *)(param_1 + 0x2ddc) != '\0') {
      FUN_1020c871(&local_24,param_2,iVar3,0);
    }
    *(undefined1 *)(param_1 + 0x2ddc) = 1;
    *(undefined4 *)(param_1 + 0x2de0) = 2;
    *(int *)(param_1 + 0x2de8) = local_20;
    *(int *)(param_1 + 0x2de4) = local_24;
    *(int *)(param_1 + 0x2dec) = param_2;
    *(int *)(param_1 + 0x2df0) = iVar3;
    if ((char)local_28 != '\0') {
      FUN_1020c0df(*(undefined4 *)(param_1 + 0x2d94),*(undefined4 *)(param_1 + 0x2d98),
                   *(undefined4 *)(param_1 + 0x2d9c),0);
    }
    *(int *)(param_1 + 0x2dc4) = local_2c;
    *(int *)(param_1 + 0x2dc8) = param_3;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

