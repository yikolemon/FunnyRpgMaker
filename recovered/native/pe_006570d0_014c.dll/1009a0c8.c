/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009a0c8 */

void __fastcall FUN_1009a0c8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_20;
  undefined1 local_19;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  FUN_1007e5fc(param_1);
  local_19 = (undefined1)((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) >> 2);
  FUN_1007e5fc(&local_19);
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar2 = *(undefined4 **)(param_1 + 4); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    local_20 = *puVar2;
    FUN_1008b9b2(&local_20);
  }
  local_18 = 0xffffffff;
  FUN_1008bcec(&DAT_1039cb24,&local_18);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

