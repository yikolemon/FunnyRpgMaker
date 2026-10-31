/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10239250 */

void __thiscall FUN_10239250(int param_1,undefined4 param_2)

{
  undefined8 local_18;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  FUN_1022c060(local_10,param_2,&local_18,param_1 + 0x18);
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

