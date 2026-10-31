/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a996a */

void __fastcall FUN_100a996a(uint *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined1 local_20 [8];
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_30;
  uVar4 = *param_2;
  uVar3 = uVar4 + param_2[1];
  local_30 = param_1;
  if (param_2[1] != 0) {
    local_2c = uVar3;
    do {
      iVar2 = FUN_100a9b0a();
      local_28 = uVar4;
      local_24 = iVar2;
      FUN_100a9a88(local_20,&local_28);
      cVar1 = FUN_100a9a40(local_18,&local_28);
      if (cVar1 == '\0') {
        FUN_100a9a88(local_20,&local_28);
        uVar3 = local_2c;
        cVar1 = FUN_100a9a40(local_18,&local_28);
        if (cVar1 == '\0') break;
      }
      uVar4 = uVar4 + iVar2;
    } while (uVar4 < uVar3);
  }
  *local_30 = uVar4;
  local_30[1] = uVar3 - uVar4;
  if (DAT_10388d00 == (local_14 ^ (uint)&local_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

