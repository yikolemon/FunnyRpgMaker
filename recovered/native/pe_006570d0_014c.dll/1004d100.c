/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004d100 */

void __fastcall FUN_1004d100(int param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_8 [3];
  undefined1 local_5;
  uint local_4;
  
  local_4 = DAT_10388d00 ^ (uint)auStack_8;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (*(uint *)(param_1 + 0x40) < 0x10) {
    puVar1 = (undefined1 *)(param_1 + 0x2c);
  }
  else {
    puVar1 = *(undefined1 **)(param_1 + 0x2c);
  }
  *puVar1 = 0;
  puVar1 = *(undefined1 **)(param_1 + 0x20);
  puVar2 = *(undefined1 **)(param_1 + 0x24);
  if (puVar1 != *(undefined1 **)(param_1 + 0x24)) {
    *(undefined1 **)(param_1 + 0x24) = puVar1;
    puVar2 = puVar1;
  }
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  local_5 = *(undefined1 *)(param_1 + 0xc);
  if (puVar2 == *(undefined1 **)(param_1 + 0x28)) {
    FUN_1004cf34(puVar2,&local_5);
  }
  else {
    *puVar2 = local_5;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  if (DAT_10388d00 == (local_4 ^ (uint)auStack_8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

