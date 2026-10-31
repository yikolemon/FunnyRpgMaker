/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10218787 */

int __fastcall FUN_10218787(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  uint uStack_1c;
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&uStack_1c;
  uVar1 = *(undefined4 *)(param_1 + 0x68);
  iVar2 = *(int *)(param_1 + 0x1dc);
  iVar4 = (**(code **)(param_1 + 0x204))(param_1,0x706f7374,uVar1,&uStack_1c);
  if ((((iVar4 == 0) && (0x21 < uStack_1c)) &&
      (iStack_18 = FUN_101c4672(uVar1,0x20), iVar4 = iStack_18, iStack_18 == 0)) &&
     ((sVar3 = FUN_101c4692(uVar1,&iStack_18), iVar4 = iStack_18, iStack_18 == 0 &&
      (iVar4 = 0, (ushort)(sVar3 - 1U) < *(ushort *)(param_1 + 0x108))))) {
    if (iVar2 == 0x25000) {
      iVar4 = FUN_10218a54(sVar3,uStack_1c - 0x22);
    }
    else if (iVar2 == 0x20000) {
      iVar4 = FUN_1021886c(sVar3,uStack_1c - 0x22);
    }
  }
  *(undefined1 *)(param_1 + 0x27c) = 1;
  if (DAT_10388d00 != (local_14 ^ (uint)&uStack_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar4;
}

