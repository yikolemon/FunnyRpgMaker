/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00471469 */

int __cdecl FUN_00471469(int param_1,int param_2)

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
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar7 = (uint)*(ushort *)(param_1 + 8);
  iVar2 = FUN_0041efcd(param_2,1,0,uVar7 + 1,0,&local_18);
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
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return iVar6;
}

