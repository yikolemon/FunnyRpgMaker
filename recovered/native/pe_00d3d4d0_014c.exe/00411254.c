/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00411254 */

void __thiscall FUN_00411254(void *this,uint param_1)

{
  ulonglong uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  FUN_004112d6(this,(char *)&local_28,param_1);
  uVar1 = FUN_00411186(&local_15,local_28,uStack_24,uStack_20,uStack_1c);
  if ((int)uVar1 < 0 || (int)(uVar1 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504add);
  }
  **(int **)this = (int)uVar1;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
}

