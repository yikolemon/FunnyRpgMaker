/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004713cd */

int __cdecl FUN_004713cd(int param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  iVar1 = *(int *)(param_1 + 0x10);
  uVar2 = *(ushort *)(param_1 + 8) >> 1;
  uVar9 = (uint)uVar2;
  iVar3 = FUN_0041efcd(param_2,1,0,uVar9 + 1,0,&local_18);
  iVar8 = 0;
  if (local_18 == 0) {
    uVar4 = 0;
    uVar5 = uVar4;
    if (uVar2 != 0) {
      do {
        uVar6 = *(undefined1 *)(iVar1 + 1 + uVar4 * 2);
        uVar7 = (uint)CONCAT11(*(undefined1 *)(iVar1 + uVar4 * 2),uVar6);
        uVar5 = uVar4;
        if (uVar7 == 0) break;
        if (uVar7 - 0x80 < 0xffffffa0) {
          uVar6 = 0x3f;
        }
        *(undefined1 *)(iVar3 + uVar4) = uVar6;
        uVar4 = uVar4 + 1;
        uVar5 = uVar9;
      } while (uVar9 != uVar4);
    }
    *(undefined1 *)(iVar3 + uVar5) = 0;
    iVar8 = iVar3;
  }
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_18);
  }
  return iVar8;
}

