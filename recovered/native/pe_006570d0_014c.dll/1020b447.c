/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020b447 */

void __thiscall FUN_1020b447(int param_1,undefined4 param_2,int *param_3,char *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_2c;
  undefined1 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  uVar1 = FUN_1020b545();
  if ((((byte)uVar1 & *(char *)(param_1 + 8) == '\0') == 1) && (*param_4 == '\0')) {
    iVar2 = FUN_1020b54f();
    iVar3 = FUN_1020b0b2();
    *param_3 = iVar3 + iVar2;
  }
  if (*(char *)(*(int *)(param_1 + 0xb0) + 0x224) == '\0') {
    if (1 < uVar1) {
      uVar4 = uVar1 & 1;
      local_2c = uVar1;
      do {
        iVar2 = FUN_1020b54f();
        local_24 = iVar2 + param_5;
        iVar3 = FUN_1020b54f();
        param_5 = iVar3 + iVar2 + param_5;
        local_28 = 0;
        local_1c = 0;
        local_18 = 0;
        local_20 = param_5;
        FUN_1020c5bf();
        uVar4 = uVar4 + 2;
      } while (uVar4 < local_2c);
    }
    FUN_1020b317();
  }
  *param_4 = '\x01';
  if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

