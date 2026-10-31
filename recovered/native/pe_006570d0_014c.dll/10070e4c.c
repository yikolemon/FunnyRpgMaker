/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10070e4c */

void __thiscall FUN_10070e4c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_20;
  FUN_1008b410(&DAT_1039cb74);
  FUN_1008b4c2(param_1 + 0x38);
  local_20 = param_2 + 0x38;
  FUN_1008b9b2(param_1 + 0x44);
  FUN_1008b536(param_1 + 0x48);
  FUN_1008b536(&DAT_1039cb84);
  FUN_1008b4c2(param_1 + 0x78);
  FUN_1008b536(param_1 + 0x84);
  iVar1 = *(int *)(param_1 + 0xa0);
  for (iVar2 = *(int *)(param_1 + 0x9c); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_1008b536(iVar2);
  }
  FUN_1008b536(param_1 + 0xa8);
  if (8 < *(uint *)(param_1 + 0x44)) {
    FUN_1008b536(param_1 + 0xc0);
    if (9 < *(uint *)(param_1 + 0x44)) {
      FUN_1008b536(param_1 + 0xd8);
      FUN_1008b536(param_1 + 0xf0);
      FUN_1008b536(param_1 + 0x108);
      FUN_1008b536(param_1 + 0x120);
      if (0xd < *(uint *)(param_1 + 0x44)) {
        FUN_1008b536(param_1 + 0x138);
      }
    }
  }
  local_1c = FUN_1008b7e2();
  iVar2 = local_1c - *(int *)(param_1 + 0x17c);
  FUN_1008b9b2(&local_1c);
  FUN_1008b9b2(param_1 + 0x154);
  FUN_1008b9b2(param_1 + 0x158);
  local_18 = -1;
  FUN_1008bcec(param_1 + 0x15c,&local_18);
  local_18 = *(int *)(param_1 + 0x168) + iVar2;
  FUN_1008b9b2(&local_18);
  local_18 = iVar2 + *(int *)(param_1 + 0x16c);
  FUN_1008b9b2(&local_18);
  local_18 = -1;
  FUN_1008bcec(param_1 + 0x170,&local_18);
  if (DAT_10388d00 == (local_14 ^ (uint)&local_20)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

