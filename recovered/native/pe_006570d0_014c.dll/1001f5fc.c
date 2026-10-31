/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f5fc */

void __thiscall FUN_1001f5fc(int *param_1,uint param_2,undefined1 param_3)

{
  uint uVar1;
  undefined1 auStack_20 [11];
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_20;
  local_15 = param_3;
  uVar1 = param_1[3];
  if (param_2 < uVar1 || param_2 - uVar1 == 0) {
    if (param_2 < uVar1) {
      FUN_1001f732(auStack_20,((int)param_2 >> 0x1f & 0xe0000000U) + *param_1 + (param_2 >> 5) * 4,
                   param_2 & 0x1f,((int)uVar1 >> 0x1f & 0xe0000000U) + *param_1 + (uVar1 >> 5) * 4,
                   uVar1 & 0x1f);
    }
  }
  else {
    FUN_1001f6b2(auStack_20,((int)uVar1 >> 0x1f & 0xe0000000U) + (uVar1 >> 5) * 4 + *param_1,
                 uVar1 & 0x1f,param_2 - uVar1,&local_15);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

