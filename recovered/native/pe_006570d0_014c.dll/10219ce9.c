/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10219ce9 */

int FUN_10219ce9(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar7 = (uint)*(ushort *)(param_1 + 8);
  iVar2 = FUN_101c2a50(param_2,1,0,uVar7 + 1,0,&local_18);
  iVar6 = 0;
  if (local_18 == 0) {
    uVar3 = 0;
    uVar4 = uVar3;
    if (uVar7 != 0) {
      do {
        cVar5 = *(char *)(iVar1 + uVar3);
        uVar4 = uVar3;
        if (cVar5 == '\0') break;
        if (cVar5 < ' ') {
          cVar5 = '?';
        }
        *(char *)(iVar2 + uVar3) = cVar5;
        uVar3 = uVar3 + 1;
        uVar4 = uVar7;
      } while (uVar7 != uVar3);
    }
    *(undefined1 *)(iVar2 + uVar4) = 0;
    iVar6 = iVar2;
  }
  if (DAT_10388d00 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar6;
}

