/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000b914 */

void __thiscall FUN_1000b914(undefined4 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  FUN_1000b996(&local_28,param_2);
  uVar1 = FUN_1000b844(&local_15,local_28,uStack_24,uStack_20,uStack_1c);
  if ((int)uVar1 < 0 || (int)((ulonglong)uVar1 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10006198("Number is too big.");
  }
  *(int *)*param_1 = (int)uVar1;
  if (DAT_10388d00 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

