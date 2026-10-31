/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10190ad0 */

int __thiscall FUN_10190ad0(int param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  iVar1 = *(int *)(param_1 + 4);
  FUN_10192f9c();
  iVar2 = *(int *)(param_1 + 0x18);
  iVar7 = 0;
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x20);
    local_18 = (uint)param_2;
    do {
      iVar4 = *(int *)(iVar3 + iVar7);
      iVar6 = *(int *)(iVar4 + 0x74);
      if (iVar6 == 0) {
        iVar6 = *(int *)(iVar1 + 0x294);
      }
      if (*(code **)(iVar6 + 0x14) != (code *)0x0) {
        cVar5 = (**(code **)(iVar6 + 0x14))(iVar1,iVar4,local_18);
        if (cVar5 != '\0') {
          iVar7 = CONCAT31((int3)((uint)iVar7 >> 8),1);
          goto LAB_10190b39;
        }
      }
      iVar7 = iVar7 + 4;
    } while (iVar2 << 2 != iVar7);
    iVar7 = 0;
  }
LAB_10190b39:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

