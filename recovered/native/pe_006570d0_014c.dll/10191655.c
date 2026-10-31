/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191655 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10191655(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(int *)(param_1 + 0x30) = param_2;
  auVar3._4_4_ = (float)(int)((ulonglong)*(undefined8 *)(param_2 + 0x1c) >> 0x20);
  auVar3._0_4_ = (float)(int)*(undefined8 *)(param_2 + 0x1c);
  auVar3._8_8_ = 0;
  auVar3 = divps(_DAT_102b70a0,auVar3);
  *(longlong *)(param_1 + 0x44) = auVar3._0_8_;
  *(int *)(param_1 + 0x20) = param_2;
  FUN_1019141a(param_1,uVar1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x2c));
  if (DAT_10388d00 == (uVar2 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

