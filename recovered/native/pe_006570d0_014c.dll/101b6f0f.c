/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b6f0f */

undefined4 FUN_101b6f0f(void)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  undefined4 local_40;
  uint local_3c;
  size_t local_38;
  char *local_34;
  undefined1 local_30 [28];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_40;
  local_40 = FUN_101b750c(0);
  uVar2 = 0;
  do {
    local_3c = uVar2;
    FUN_101b75f6(local_30,0x1c,"%s %d",
                 *(undefined4 *)((int)&PTR_s_Apple_103021ec + (uVar2 & 0xfffffffe) * 2),uVar2 & 1);
    local_34 = (char *)FUN_101b750c(local_40);
    local_38 = _strlen(local_34);
    if (0 < (int)local_38) {
      sVar3 = 0;
      do {
        FUN_101b75f6(local_30,0x1c,"Child %d",sVar3);
        iVar1 = FUN_101b750c(local_34);
        *(undefined1 *)(iVar1 + 0x34) = 1;
        if (sVar3 == 0) {
          FUN_101b75f6(local_30,0x1c,"Sub-child %d",0);
          iVar1 = FUN_101b750c(iVar1);
          *(undefined1 *)(iVar1 + 0x34) = 1;
        }
        sVar3 = sVar3 + 1;
      } while (local_38 != sVar3);
    }
    uVar2 = local_3c + 1;
  } while (uVar2 != 0x14);
  if (DAT_10388d00 != (local_14 ^ (uint)&local_40)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_40;
}

