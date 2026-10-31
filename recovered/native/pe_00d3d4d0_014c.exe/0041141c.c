/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0041141c */

void __fastcall FUN_0041141c(int *param_1)

{
  ulonglong uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  FUN_00411152(param_1,(char *)&local_28);
  uVar1 = FUN_0041149d(&local_15,local_28,uStack_24,uStack_20,uStack_1c);
  if ((int)uVar1 < 0 || (int)(uVar1 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ba4e(0x504add);
  }
  *(int *)(*param_1 + 4) = (int)uVar1;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
}

