/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b3c68 */

void FUN_100b3c68(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined1 *puStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_38 [20];
  uint uStack_24;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iStack_54 = 0x100b3c83;
  FUN_10002303();
  local_44 = 0;
  local_40 = 0xffff;
  puVar3 = &DAT_1039c9d4;
  if (7 < DAT_1039c9e8) {
    puVar3 = DAT_1039c9d4;
  }
  iStack_54 = -1;
  uStack_58 = 3;
  puStack_5c = local_38;
  puStack_4c = (undefined1 *)FUN_10228d20(puVar3);
  FUN_100025ec(puStack_4c,local_38);
  puVar2 = puStack_4c;
  uStack_58 = FUN_10002303();
  iVar1 = iStack_54;
  puStack_5c = puVar2;
  if (iStack_54 == 0) {
    if (puVar2 != (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1000227a("exists",&puStack_5c,&DAT_1039c9d4);
    }
  }
  else {
    FUN_10002303();
    if (iVar1 != 1) {
      FUN_100b44e0(&DAT_1039c9d4);
      DAT_1039cad0 = 1;
    }
  }
  if (DAT_10388d00 == (uStack_24 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

