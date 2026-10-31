/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101419a0 */

void FUN_101419a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_14;
  pcVar3 = "%08X";
  if ((param_5 & 2) == 0) {
    pcVar3 = "%d";
  }
  puVar2 = &param_4;
  if (param_4 < 1) {
    puVar2 = (undefined4 *)0x0;
  }
  puVar1 = (undefined4 *)0x0;
  if (0 < param_3) {
    puVar1 = &param_3;
  }
  FUN_101412ec(param_1,4,param_2,puVar1,puVar2,pcVar3,param_5);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

