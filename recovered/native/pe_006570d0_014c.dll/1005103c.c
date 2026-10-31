/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1005103c */

void __fastcall FUN_1005103c(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_18 [8];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_18;
  uVar1 = param_1[3];
  iVar2 = (uVar1 >> 5) * 4 + *param_1;
  uVar4 = uVar1 & 0x1f;
  uVar1 = (int)uVar1 >> 0x1f & 0xe0000000;
  iVar5 = uVar4 - 1;
  iVar3 = iVar2 + uVar1 + (uVar4 - 1 >> 5) * 4;
  if (uVar4 == 0) {
    iVar3 = (uVar1 - 4) + iVar2;
    iVar5 = 0x1f;
  }
  FUN_10053f96(auStack_18,iVar3,iVar5);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

