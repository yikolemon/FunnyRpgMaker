/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101dd24e */

int __thiscall FUN_101dd24e(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_28 [20];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_28;
  FUN_101dd457();
  do {
    cVar1 = FUN_101dd486();
    if (cVar1 == '\0') {
      iVar2 = 0;
      break;
    }
    iVar2 = FUN_101dd4ea(param_1,param_2);
  } while (iVar2 == 0);
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar2;
}

