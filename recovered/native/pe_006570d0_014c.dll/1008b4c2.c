/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1008b4c2 */

void FUN_1008b4c2(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_1c [3];
  undefined1 local_19;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  local_18 = param_1[1] - *param_1;
  FUN_1008b9b2(&local_18);
  puVar2 = (undefined1 *)*param_1;
  puVar1 = (undefined1 *)param_1[1];
  if (puVar2 != puVar1) {
    do {
      local_19 = *puVar2;
      FUN_1007e5fc(&local_19);
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_1c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

