/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100251ca */

void __thiscall FUN_100251ca(undefined4 *param_1,undefined4 param_2)

{
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_17;
  undefined3 uStack_13;
  undefined4 local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)auStack_20;
  local_1c = 0x8000;
  local_18 = 0x20;
  local_17 = 0;
  uStack_13 = 0;
  local_10 = 0xffffffff;
  thunk_FUN_1002aaaa(auStack_20,*param_1,param_2,&local_1c,0);
  if (DAT_10388d00 == (local_c ^ (uint)auStack_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

